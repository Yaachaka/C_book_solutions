import os
import xml.etree.ElementTree as ET
tree = ET.parse('ucd.all.flat.xml')

print("XML parsing completed...")

tabSpaces = "    "
fileName = "AAAA"
fileExtension = "code-snippets"
fileHandle = open(f"my_Unicode_{fileName}.{fileExtension}", 'w')

def displayThisChar(i):
    global fileName
    global fileHandle
    # print(i.attrib.get('cp'))    # DEBUG CODE
    # if i.attrib.get('cp')  == "2665":    # DEBUG CODE
    #     print(f"{i.attrib.get('cp')} --> \u2665 --> {i.attrib.get('na')}")
    attrib_cp = i.attrib.get('cp')
    if type(attrib_cp) == str:
        
        # print(f"{attrib_cp} --> {type(attrib_cp)}")
        attrib_na = i.attrib.get('na')

        if attrib_na == "":
            attrib_na = i[0].attrib.get('alias')
        if attrib_cp == "0000" or attrib_cp == "000A" or attrib_cp == "000D":
            attrib_cp_escape = attrib_na;
        else:
            attrib_cp_escape = chr(int(attrib_cp, 16))
        
        # print(f"{attrib_cp} ;;; {attrib_cp_escape} ;;; {attrib_na}")    # DEBUG_CODE
            
        attrib_blk = i.attrib.get('blk')
        fullFileName = f"my_Unicode_{fileName}.{fileExtension}"
        # Writing to file starts here
        if attrib_blk != fileName:
            fileHandle.write("}")
            fileHandle.close()
            
            # update filename and create it
            fileName = attrib_blk
            fullFileName = f"my_{fileName}.{fileExtension}"
            fileHandle = open(f"{fullFileName}", 'w')
            
            fileHandle.write("{\n")
            
        if attrib_cp == "0022":
            attrib_cp_escape = "\\\""
        fileHandle.write(f"{tabSpaces}\"Unicode {attrib_cp_escape} U+{attrib_cp} {attrib_na}\": \n")
        
        fileHandle.write(f"{tabSpaces}{{\n")
        
        # prefix
        fileHandle.write(f"{2 * tabSpaces}\"prefix\": [\n")
        fileHandle.write(f"{3 * tabSpaces}\"..U.{attrib_cp}\",\n")
        fileHandle.write(f"{3 * tabSpaces}\"..U.{attrib_na}\",\n")
        fileHandle.write(f"{3 * tabSpaces}\"U+{attrib_cp}\",\n")
        fileHandle.write(f"{2 * tabSpaces}],\n")
        
        # body
        fileHandle.write(f"{2 * tabSpaces}\"body\": [\n")
        fileHandle.write(f"{3 * tabSpaces}\"${{1|{attrib_cp_escape},&#x{attrib_cp};,U+{attrib_cp},0x{attrib_cp},{attrib_na}|}}$2\",\n")
        fileHandle.write(f"{2 * tabSpaces}],\n")
        
        # Description
        fileHandle.write(f"{2 * tabSpaces}\"description\": [\n")
        fileHandle.write(f"{3 * tabSpaces}\"Code: U+{attrib_cp}\",\n")
        fileHandle.write(f"{3 * tabSpaces}\"Character/Symbol: {attrib_cp_escape}\",\n")
        fileHandle.write(f"{3 * tabSpaces}\"Name: {attrib_na}\",\n")
        fileHandle.write(f"{3 * tabSpaces}\"Group/Block: {attrib_blk}\",\n")
        fileHandle.write(f"{2 * tabSpaces}],\n")
        
        # closing brace
        fileHandle.write(f"{1 * tabSpaces}}},\n\n")
        
root = tree.getroot()

sFor = "{http://www.unicode.org/ns/2003/ucd/1.0}char"

for i in root: # level1
    # print(f"level1: {i.tag}")    # DEBUG CODE
    tags_rank = i.findall(sFor)
    if len(tags_rank):
        for k in tags_rank:
            displayThisChar(k)
    else:
        for j in i: # level2
            # print(f"level2: {j.tag}")    # DEBUG CODE
            tags_rank = j.findall(sFor)
            if len(tags_rank):
                for k in tags_rank:
                    displayThisChar(k)
            else:
                for k in j: # level2
                    # print(f"level3: {k.tag}")    # DEBUG CODE
                    tags_rank = k.findall(sFor)
                    if len(tags_rank):
                        for l in tags_rank:
                            displayThisChar(l)

print(f"Last file was {fileHandle}")
fileHandle.write("}")
fileHandle.close()