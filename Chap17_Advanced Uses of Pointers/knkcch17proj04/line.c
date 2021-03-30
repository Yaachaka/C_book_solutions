/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* line.c (Chapter 15, page 364) */
//------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  //NULL, malloc, EXIT_FAILURE
#include "line.h"
//------------------------------------------------------------------
#define MAX_LINE_LEN 60
//------------------------------------------------------------------
struct node
{
  char word[10];  //char *word; is causing segmentation fault at runtime.
  struct node *next;
}*line = NULL, **p_line = &line;
//------------------------------------------------------------------
int line_len = 0;
int num_words = 0;
//------------------------------------------------------------------
void clear_line(void)
{
  struct node *temp;
  while(line != NULL)
  {
    temp = line;
    line = line->next;
    free(temp);
  }
  p_line = &line;  //Reset second level pointer to beginning of the line.
  line_len = 0;
  num_words = 0;
}
//------------------------------------------------------------------
void add_word(const char *word)
{
  struct node *new_word;
  if((new_word = (struct node *) malloc(sizeof(struct node) + strlen(word) + 1)) == NULL)  //allocating memory for the recieved word.
  {
    printf("Error: malloc failed.");
    exit(EXIT_FAILURE);
  }
  strcpy(new_word->word, word);  //memory is allocated. store the word in node.
  new_word->next = NULL;  // pointer to next node is adjusted.

  *p_line = new_word;  //second level pointer is assigned with the current word's node.
  p_line = &(*p_line)->next;
  /*
    (*p_line)->next is nothing but line->next
    Since p_line is a second level pointer, we need to assign it the address of the next node.
    i.e., &line->next which is &(*p_line)->next.
  */
  
  if(num_words > 0) 
    line_len++;
  line_len += strlen(word);
  num_words++;
}
//------------------------------------------------------------------
int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}
//------------------------------------------------------------------
void write_line(void)
{
  int extra_spaces, spaces_to_insert, j;
  struct node *temp = line;
  extra_spaces = MAX_LINE_LEN - line_len;
  
  while(temp)
  {
    printf("%s", temp->word);  //print the word.
    temp = temp->next;  //ready the pointer to next word.
    if(num_words > 1)
    {
      spaces_to_insert = extra_spaces / (num_words - 1);
      for (j = 1; j <= spaces_to_insert + 1; j++)
        putchar(' ');
      extra_spaces -= spaces_to_insert;
    }
    num_words--;

  }
  putchar('\n');
  
}
//------------------------------------------------------------------
void flush_line(void)
{
  struct node *temp = line;
  if (line_len > 0)
  {
    while(temp)
    {
      printf("%s ", temp->word);
      temp = temp->next;
    }
  }
  clear_line();
}
//------------------------------------------------------------------
