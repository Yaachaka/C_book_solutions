# Stay in `C_book_solutions` folder while running this script.
chapter="07" # Give chapter number here
title="# Chapter $chapter Programming Projects"
chapterName="Basic Types"

pref="cknkCh"
prefChapter=$pref$chapter
name1=$pref$chapter"Prj"

exrcCount=15
emptyLine="  "

mkdir $prefChapter/$name1

echo "<html>
<head>
<title>Chapter $chapter Programming Projects</title>
<meta charset=\"utf-8\">
<link rel=\"stylesheet\" href=\"../../myStyle.css\">
</head>
<body>

$chapter $chapterName
---

$title

<hr class=\"hr1ExrcPrj\"/>
" > $prefChapter/$name1/README.md # First echo

for i in $(seq 1 $exrcCount);
do
    name2=$name1$(printf "%03d" $i)

    echo "# $name2

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[$name2.c](./$name2.c)

## Output/ExecutionLog:
" >> $prefChapter/$name1/README.md # Second echo

    for j in {1..3};
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
" >> $prefChapter/$name1/README.md # Third echo
    done

    echo "# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class=\"hr1ExrcPrj\"/>
" >> $prefChapter/$name1/README.md # Fourth echo

    # File with initial template creation
    echo "/**
 * file: $name2.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{


    return 0;
}" > $prefChapter/$name1/$name2.c

done

echo "
</body>
</html>" >> $prefChapter/$name1/README.md # Fifth echo

pandoc $prefChapter/$name1/README.md -o $prefChapter/$name1/$name1"Readme.html"