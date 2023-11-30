echo "
<style>
    .hr1
    {
        width: 98%;
        border-style: ridge;
        border-color: rgb(0, 0, 0);
        background: linear-gradient(violet, indigo, blue, green, yellow, orange, red, red, orange, yellow, green, blue, indigo, violet);
    }
</style>

"
chapter="02"
title="# Chapter $chapter Excercises"

pref="cknkCh"

name1=$pref$chapter"Exrc"

exrcCount=10
emptyLine="  "

echo $title
echo "  "

echo "<hr class=\"hr1\"/>"

for i in $(seq 1 $exrcCount);
do
    name2=$name1$(printf "%03d" $i)

    echo "# "$name2
    echo $emptyLine

    echo "<!-- START: Problem Statement -->"
    echo $emptyLine
    echo "<!-- END: Problem Statement -->"
    echo $emptyLine

    echo "# Solution:"
    echo $emptyLine

    echo "## Program Link"
    echo $emptyLine
    echo "[$name2.c](./$name2.c)"
    echo $emptyLine

    echo "## Output/ExecutionLog:"
    echo $emptyLine

    echo "### Trial1:"
    echo $emptyLine
    echo "#### Trial1 execution:"
    echo $emptyLine
    echo "<!-- START: terminal interaction or other output -->"
    echo $emptyLine
    echo "<!-- END: terminal interaction or other output -->"
    echo $emptyLine
    echo "#### Trial1 Comments:"
    echo $emptyLine
    echo "<!-- START: Comments -->"
    echo $emptyLine
    echo "<!-- END: Comments -->"
    echo $emptyLine

    echo "### Trial2:"
    echo $emptyLine
    echo "#### Trial2 execution:"
    echo $emptyLine
    echo "<!-- START: terminal interaction or other output -->"
    echo $emptyLine
    echo "<!-- END: terminal interaction or other output -->"
    echo $emptyLine
    echo "#### Trial2 Comments:"
    echo $emptyLine
    echo "<!-- START: Comments -->"
    echo $emptyLine
    echo "<!-- END: Comments -->"
    echo $emptyLine

    echo "### Trial3:"
    echo $emptyLine
    echo "#### Trial3 execution:"
    echo $emptyLine
    echo "<!-- START: terminal interaction or other output -->"
    echo $emptyLine
    echo "<!-- END: terminal interaction or other output -->"
    echo $emptyLine
    echo "#### Trial3 Comments:"
    echo $emptyLine
    echo "<!-- START: Comments -->"
    echo $emptyLine
    echo "<!-- END: Comments -->"
    echo $emptyLine

    echo "# Exercise Comment:"
    echo $emptyLine
    echo "<!-- START: Comments -->"
    echo $emptyLine
    echo "<!-- END: Comments -->"
    echo $emptyLine
    
    echo "<hr class=\"hr1\"/>"
    echo $emptyLine
done

