import xml.etree.ElementTree as ET
tree = ET.parse('ucd.all.flat.xml')

print("XML parsing completed...")

def displayThisChar(i):
    # print(i.attrib.get('cp'))    # DEBUG CODE
    # if i.attrib.get('cp')  == "2665":    # DEBUG CODE
    #     print(f"{i.attrib.get('cp')} --> \u2665 --> {i.attrib.get('na')}")
    attrib_cp = i.attrib.get('cp')
    if type(attrib_cp) == str:
        
        # print(f"{attrib_cp} --> {type(attrib_cp)}")
        attrib_cp_escape = chr(int(attrib_cp, 16))
        attrib_na = i.attrib.get('na')

        if attrib_na == "":
            attrib_na = i[0].attrib.get('alias')

        print(f"{attrib_cp} ;;; {attrib_cp_escape} ;;; {attrib_na}")

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