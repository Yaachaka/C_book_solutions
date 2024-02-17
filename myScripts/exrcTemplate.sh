chapter_section="Section 5." # Update needed here
chapter="05"    # Update needed here

chapterName="Selection Statements"    # Give chapter name here

title="# Chapter $chapter Excercises"

pref="cknkCh"

name1=$pref$chapter"Exrc"

exrcCount=11    # Update the number of exercises here
emptyLine="  "

echo "<html>
<head>
<title>Chapter $chapter exercises</title>
<meta charset=\"utf-8\">
<link rel=\"stylesheet\" href=\"../../myStyle.css\">
</head>
<body>

"

echo $chapter" "$chapterName
echo "---"
echo "  "
echo $title
echo "  "

echo "<hr class=\"hr1ExrcPrj\"/>"
echo $emptyLine

for i in $(seq 1 $exrcCount);    # For loop 1
do
    name2=$name1$(printf "%03d" $i)

    echo "# "$name2
    echo $emptyLine

    echo $chapter_section
    echo $emptyLine

    echo "<!-- START: Problem Statement -->"
    echo $emptyLine
    echo $emptyLine
    echo $emptyLine
    echo "<!-- END: Problem Statement -->"
    echo $emptyLine

    echo "# Solution:"
    echo $emptyLine
    echo $emptyLine

    echo "## Program Link"
    echo $emptyLine
    echo "[$name2.c](./$name2.c)"
    echo $emptyLine

    echo "## Output/ExecutionLog:"
    echo $emptyLine

    for j in {1..3};    # For loop 2
    do
        echo "### Trial$j:"
        echo $emptyLine
        echo "#### Trial$j execution:"
        echo $emptyLine
        echo "<!-- START: terminal interaction or other output -->"
        echo $emptyLine
        echo "\`\`\`shell"
        echo $emptyLine
        echo "\`\`\`"
        echo $emptyLine
        echo "<!-- END: terminal interaction or other output -->"
        echo $emptyLine
        echo "#### Trial$j Comments:"
        echo $emptyLine
        echo "<!-- START: Comments -->"
        echo $emptyLine
        echo $emptyLine
        echo $emptyLine
        echo "<!-- END: Comments -->"
        echo $emptyLine

    done    # For loop 2

    echo "# Exercise Comment:"
    echo $emptyLine
    echo "<!-- START: Comments -->"
    echo $emptyLine
    echo "<!-- END: Comments -->"
    echo $emptyLine
    
    echo "<hr class=\"hr1ExrcPrj\"/>"
    echo $emptyLine

done    # For loop 1


echo "</body>
</html>"