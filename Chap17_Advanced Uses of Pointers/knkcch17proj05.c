/*
@@@@ PROGRAM NAME: knkcch17proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write a program that sorts a series of words 
entered by the user:

	Enter word: foo
	Enter word: bar
	Enter word: baz
	Enter word: quux
	Enter word:
	
	In sorted order: bar baz foo quux

Assume that each word is no more than 20 characters long. Stop reading when the 
user enters an empty word (i.e., presses Enter without entering a word). Store 
each word in a dynamically allocated string, using an array of pointers to keep 
track of the strings, as in the remind2.c program (Section 17.2). After all 
words have been read, sort the array (using any sorting technique) and then use 
a loop to print the words in sorted order. Hint: Use the read_line function to 
read each word, as in remind2.c.
*/

//Using singly linked list

#include <stdio.h>
#include <string.h>  //strcpy()
#include <stdlib.h>  //malloc(), free(), NULL, EXIT_FAILURE
#include <ctype.h>  //isspace()
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
struct node
{
	char word[10];
	struct node *next;
} *list = NULL;
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int read_line(char str[], int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %ld, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);

	struct node **p_list = &list, *new_word;
	//Get words from user
	while(1)
	{
		printf("Enter word: ");
		//Allocate memory of size about struct node + 10 bytes
		if((new_word = (struct node *)malloc(sizeof(struct node))) == NULL)
		{
			printf("Error: malloc failed.");
			exit(EXIT_FAILURE);
		}
		//Read word
		(read_line(new_word->word, 10));
		if(!strlen(new_word->word))  //If '\n' is detected without reading character.
		{
			free(new_word);
			break;
		}
		new_word->next = NULL;

		//Load the node to list
		*p_list = new_word;
		p_list = &(*p_list)->next;
	}
	
	//Print words in the order they entered
	printf("\nIn Unsorted order: ");
	new_word = list;
	while(new_word)
	{
		printf("%s  ", new_word->word);
		new_word = new_word->next;
		
	}
	
	//Sorting
	struct node *temp, *node1 = list, *node2 = NULL, *prev1 = NULL, *prev2 = NULL;

   while(node1->next != NULL)  //Start [[WHILE1]]
   {
      node2 = node1->next;
      while(node2 != NULL)  //start [[WHILE2]]
      {
         if(strcmp(node1->word, node2->word) > 0)  //Start [[IF1]]
         {
            //Update the node connections
        	temp = node2->next;
            node2->next = node1;
            if(prev2)
            	prev2->next = temp;
            else
            	node1->next = temp;

            //Swap the nodes
            temp = node1;
            node1 = node2;
            node2 = temp;

            if(prev1)
               prev1->next = node1;
            else
               list = node1;

         }  //End [[IF1]]
         prev2 = node2;
         node2 = node2->next;

      }  //End [[WHILE2]]
	  prev2 = NULL;
      prev1 = node1;
      node1 = node1->next;

   }  //End [[WHILE1]]

	printf("\nIn sorted order: ");
	new_word = list;
	while(list)
	{
		//print the word
		printf("%s  ", list->word);
		//prepare to free the allocated memory
		new_word = list;
		list = list->next;
		//free the memory.
		free(new_word);
	}
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar())!= '\n' && ch != EOF) {
    if (i < n-1)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}
//---------------------------------------------------------------------------
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
File: knkcch17proj05.c, C Version: 199901, Date: Mar 29 2021, Time: 15:31:44

Enter word: foo
Enter word: bar
Enter word: cat
Enter word: act
Enter word: man
Enter word: dog
Enter word:

In Unsorted order: foo  bar  cat  act  man  dog
In sorted order: act  bar  cat  dog  foo  man
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch17proj05.c, C Version: 199901, Date: Mar 29 2021, Time: 15:31:44

Enter word: foo
Enter word: bar
Enter word:

In Unsorted order: foo  bar
In sorted order: bar  foo
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch17proj05.c, C Version: 199901, Date: Mar 29 2021, Time: 15:31:44

Enter word: foo
Enter word: bar
Enter word: act
Enter word: cat
Enter word: man
Enter word: dog
Enter word: add
Enter word:

In Unsorted order: foo  bar  act  cat  man  dog  add
In sorted order: act  add  bar  cat  dog  foo  man
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch17proj05.c, C Version: 199901, Date: Mar 29 2021, Time: 15:31:44

Enter word: foo
Enter word: bar
Enter word: baz
Enter word: quux
Enter word:

In Unsorted order: foo  bar  baz  quux
In sorted order: bar  baz  foo  quux
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------