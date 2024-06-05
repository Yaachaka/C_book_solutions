chapterNo = 13
QandA_count = 5

starting="""<html>
<head>
<meta charset=\"UTF-8\">
<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
<title>C (KNK) - Current Chapter</title>
<link rel=\"stylesheet\" href=\"./myStyle.css\">
</head>
<body>

# {} 

<!-- START: div -->
<div class=\"theQuote\">



</div>
<!-- END: div -->



## Q&A
""".format(chapterNo)

str1 = """<!-- START: div: QandA_question -->
<div class=\"QandA_question\">
<span class=\"ques\"></span>



</div>
<!-- END: div: QandA_question -->
<!-- START: div: QandA_answer -->
<div class=\"QandA_answer\">
<span class=\"ans\"></span>



</div>
<!-- END: div: QandA_answer -->

---

"""

ending = """## Examples

- Programs: <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Exmp/](./cknkCh{}/cknkCh{}Exmp/)

## Exercises

- Readme: <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Exrc/README.md](./cknkCh{}/cknkCh{}Exrc/README.md)  
- Readme (html): <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Exrc/cknkCh{}ExrcReadme.html](./cknkCh{}/cknkCh{}Exrc/cknkCh{}ExrcReadme.html)  
- Programs: <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Exrc/](./cknkCh{}/cknkCh{}Exrc/)  

## Programming Projects

- Readme: <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Prj/README.md](./cknkCh{}/cknkCh{}Prj/README.md)  
- Readme: <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Prj/cknkCh{}PrjReadme.html](./cknkCh{}/cknkCh{}Prj/cknkCh{}PrjReadme.html)  
- Programs: <span class=\"unicode_LINK_SYMBOL\"></span>[./cknkCh{}/cknkCh{}Prj/](./cknkCh{}/cknkCh{}Prj/)  

<hr class=\"chapterDivider\"/>

</body>
</html>""".format(chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo, chapterNo)

print(starting)
print(str1*15)
print(ending)