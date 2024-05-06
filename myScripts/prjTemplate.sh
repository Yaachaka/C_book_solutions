# Stay in `C_book_solutions` folder while running this script.
echo "Hope you are in the directory: \"C_book_solutions\""

chapter="10" # Give chapter number here
title="# Chapter $chapter Programming Projects"
chapterName="Program Organization"

pref="cknkCh"
prefChapter=$pref$chapter
name1=$pref$chapter"Prj"

exrcCount=7
emptyLine="  "

mkdir $prefChapter/$name1

echo "<html>
<head>
<meta charset=\"UTF-8\">
<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
<title>Chapter $chapter Programming Projects</title>
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

    echo "    
<!-- START: div -->
<div class=\"ch_problem\">

# $name2

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

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

\`\`\`

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

</div>
<!-- END: div -->

<hr class=\"hr1ExrcPrj\"/>
" >> $prefChapter/$name1/README.md # Fourth echo

    # File with initial template creation
#     echo "/**
#  * file: $name2.c
#  * Author: Yaachaka
#  */

# /* START: Header inclusions*/
# #include <stdio.h>

# /* END: Header inclusions*/

# /* START: MACRO definitions*/

# /* END: MACRO definitions*/

# /* START: type definitions*/

# /* END: type definitions*/

# /* START: Variable declarations*/

# /* END: Variable declarations*/

# /* START: Function prototypes*/

# /* END: Function prototypes*/

# int main(void)
# {
#     /* START: MACRO definitions*/
    
#     /* END: MACRO definitions*/

#     /* START: type definitions*/
    
#     /* END: type definitions*/

#     /* START: Variable declarations*/
    
#     /* END: Variable declarations*/

#     printf("\n");
#     return 0;
# }    // FUNCTION END: main" > $prefChapter/$name1/$name2.c

done

echo "</body>
</html>" >> $prefChapter/$name1/README.md # Fifth echo

pandoc $prefChapter/$name1/README.md -o $prefChapter/$name1/$name1"Readme.html"

echo "Template generation completed."
echo "Note: Please do not forget to navigate to chapter's directory."