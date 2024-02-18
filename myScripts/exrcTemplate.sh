chapter_section="Section 6." # Update needed here
chapter="06"    # Update needed here

chapterName="Loops"    # Give chapter name here

title="# Chapter $chapter Excercises"

pref="cknkCh"
prefChapter=$pref$chapter
name1=$pref$chapter"Exrc"

mkdir $prefChapter/$name1

exrcCount=14    # Update the number of exercises here
emptyLine="  "

echo "<html>
<head>
<title>Chapter $chapter exercises</title>
<meta charset=\"utf-8\">
<link rel=\"stylesheet\" href=\"../../myStyle.css\">
</head>
<body>

$chapter $chapterName
---

$title

<hr class=\"hr1ExrcPrj\"/>
" > $prefChapter/$name1/README.md

for i in $(seq 1 $exrcCount);    # For loop 1
do
    name2=$name1$(printf "%03d" $i)

    echo "# $name2

$chapter_section

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[$name2.c](./$name2.c)

## Output/ExecutionLog:

" >> $prefChapter/$name1/README.md
    
    for j in {1..1};    # For loop 1
    do
        echo "### Trial$j:

#### Trial$j execution:

<!-- START: terminal interaction or other output -->

\`\`\`shell

\`\`\`

<!-- END: terminal interaction or other output -->

#### Trial$j Comments:

<!-- START: Comments -->



<!-- END: Comments -->
" >> $prefChapter/$name1/README.md
    done    # For loop 2

    echo "# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class=\"hr1ExrcPrj\"/>
" >> $prefChapter/$name1/README.md

    # File with initial template creation
    echo "/**
 * file: $name2.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{


    return 0;
}
" > $prefChapter/$name1/$name2.c

done    # For loop 1


echo "</body>
</html>" >> $prefChapter/$name1/README.md


pandoc $prefChapter/$name1/README.md -o $prefChapter/$name1/$name1"Readme.html"