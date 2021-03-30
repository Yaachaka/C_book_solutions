/*
@@@@ PROGRAM NAME: knkcch17proj06.c
@@@@ FLAGS: -std=c99 -Wall -Wextra
@@@@ PROGRAM STATEMENT: Modify Programming Project 5 so that it uses
qsort to sort the array of pointers.
*/
#include <stdio.h>
#include <string.h>  //strcpy(), strlen()
#include <stdlib.h>  //malloc(), free(), NULL, EXIT_FAILURE
#include <ctype.h>  //isspace()
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int read_line(char str[], const int n);
int compare_words(const void *n1, const void *n2);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("File: %s, C Version: %ld, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);

        const int word_capacity = 10;  //word_capacity is the length of word.
        int num_words = 0;
        char **words = NULL, *temp = NULL;  //words will be the pointer to the strings. temp is used to get word.

        if((words = (char **)malloc(sizeof(char *))) == NULL)  //Allocate memory to store a pointer to string.
        {
                printf("Error: malloc failed.");
                exit(EXIT_FAILURE);
        }

        //Get words from user
        while(1)
        {
                //Allocate memory to store string
                if((temp = (char *)malloc(word_capacity * sizeof(char) + 1)) == NULL)
                {
                        printf("Error: malloc failed.");
                        exit(EXIT_FAILURE);
                }

                //Read word
                printf("Enter word: ");
                read_line(temp, word_capacity);
                if(!strlen(temp))  //If '\n' is detected without reading character.
                {
                        free(temp);
                        break;
                }
                words[num_words] = temp;
                ++num_words;

                //Reallocate memory to store pointer to next word
                if((words = (char **)realloc(words, (num_words+1) * sizeof(char *))) == NULL)
                {
                        printf("Error: malloc failed.");
                        exit(EXIT_FAILURE);
                }

        }

        //Print words in the order they entered
        printf("\nIn Unsorted order: ");
        for(short i = 0; i < num_words; i++)
                printf("%s  ", words[i]);

        //Sorting
        qsort(words, num_words, sizeof(char *), compare_words);

        printf("\nIn sorted order: ");
        for(short i = 0; i < num_words; i++)
        {
                //print the word
                printf("%s  ", words[i]);
                //free the memory.
                free(words[i]);
        }

        free(words);

        printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int read_line(char str[], const int n)
{
  int ch, i = 0;

  while ((ch = getchar())!= '\n' && ch != EOF) {
    if (i < n-1)
      str[i++] = ch;
  }
  str[i] = '\0';
  str[n-1] = '\0';

  return i;
}
//---------------------------------------------------------------------------
int compare_words(const void *n1, const void *n2)
{
        return (strcmp(*(char **)n1, *(char **)n2));
}
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch17proj06.c, C Version: 199901, Date: Mar 30 2021, Time: 10:30:40

Enter word: foo
Enter word: bar
Enter word: sit
Enter word: hot
Enter word: kit
Enter word: act
Enter word:

In Unsorted order: foo  bar  sit  hot  kit  act
In sorted order: act  bar  foo  hot  kit  sit
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------
