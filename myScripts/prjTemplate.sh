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
title="# Chapter $chapter Programming Projects"

pref="cknkCh"

name1=$pref$chapter"Prj"

exrcCount=8
emptyLine="  "

echo $title
echo "  "

echo "<hr class=\"hr1\"/>"
echo $emptyLine

for i in $(seq 1 $exrcCount);
do
    name2=$name1$(printf "%03d" $i)

    echo "# "$name2
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

    for j in {1..3};
    do
        echo "### Trial$j:"
        echo $emptyLine
        echo "#### Trial$j execution:"
        echo $emptyLine
        echo "<!-- START: terminal interaction or other output -->"
        echo $emptyLine
        echo "\`\`\`"
        echo $emptyLine
        echo "\`\`\`"
        echo $emptyLine
        echo "<!-- END: terminal interaction or other output -->"
        echo $emptyLine
        echo "#### Trial$j Comments:"
        echo $emptyLine
        echo "<!-- START: Comments -->"
        echo $emptyLine
        echo "<!-- END: Comments -->"
        echo $emptyLine

    done

    echo "# Exercise Comment:"
    echo $emptyLine
    echo "<!-- START: Comments -->"
    echo $emptyLine
    echo "<!-- END: Comments -->"
    echo $emptyLine
    
    echo "<hr class=\"hr1\"/>"
    echo $emptyLine
done

