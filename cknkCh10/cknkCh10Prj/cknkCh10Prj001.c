/********************************************************************************
 * File: cknkCh10Prj001.c
 * Author: Yaachaka
 * Purpose: NA
 ********************************************************************************/
/* START: Header inclusions*/
#include <stdio.h>
#include <stdbool.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define STACK_SIZE 20
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/
int contents[STACK_SIZE];
int top = 0;
bool b_stack_overflowed = false;
bool b_stack_underflowed = false;
/* END: Variable declarations*/

/* START: Function prototypes*/
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
int main(void)
{
    printf("Enter parentheses and/or braces: ");

    char ch;

    make_empty();

    while ((ch = getchar()) != '\n')
    {
        if(ch == '{' || ch == '(')
        {
            push(ch);
            if (b_stack_overflowed)
            {
                // printf("Stack is full. Breaking out.\n");    // DEBUG_CODE
                break;    // break out of while loop.
            }
            
        }	// if condition: opening parentheses/braces
        else if(ch == '}' || ch == ')')
        {
            (void)pop();
        }	// else-if condition: closing parentheses/braces
    }    // while statement: get the characters to the stack

    if (top)
    {
        printf("Parentheses/braces are not nested properly.\n");
    }    // if condition: stack is empty
    else
    {
        printf("Parentheses/braces are nested properly.\n");
    }	// else condition: stack is not empty 
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: make_empty
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Clears the stack. In fact move the 'top' to first position in the stack.
 */
void make_empty(void)
{
    top = 0;
    b_stack_overflowed = false;
    b_stack_underflowed = false;
}	// FUNCTION END: make_empty

/**
 * Function name: is_empty
 * Return type: bool
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Check if the stack is empty. In fact, check if the top is pointing to first location in the stack.
 */
bool is_empty(void)
{
    // printf("is_empty when top is %d.\n", top);    // DEBUG_CODE
    return top == 0;
}	// FUNCTION END: is_empty

/**
 * Function name: is_full
 * Return type: bool
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Check if the stack is full. In fact, check if the 'top' variable is pointing to the last position in the stack.
 */
bool is_full(void)
{
    // printf("is_full when top is %d.\n", top);    // DEBUG_CODE
    return top == STACK_SIZE;
}	// FUNCTION END: is_full

/**
 * Function name: push
 * Return type: void
 * Return value description: 
 * Parameters: int i
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Push new element to the stack.
 */
void push(int i)
{
    // printf("push function.\n");    //DEBUG_CODE
    if(is_full())
    {
        b_stack_overflowed = true;
        stack_overflow();
    }	// if condition: stack is full
    else
    {
        contents[top++] = i;
    }	// else condition: stack is not full
}	// FUNCTION END: push

/**
 * Function name: pop
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Pop an element from the stack.
 */
int pop(void)
{
    // printf("pop function.\n");    // DEBUG_CODE
    if(is_empty())
    {
        b_stack_underflowed = true;
        stack_underflow();
    }	// if condition: stack is empty
    else
    {
        return contents[--top];
    }	// else condition: stack is not empty.
}	// FUNCTION END: pop

/**
 * Function name: stack_overflow
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Indicate that the stack is full.
 */
void stack_overflow(void)
{
    printf("Stack Overflow: Sorry, the stack is already full!!!\n");
}	// FUNCTION END: stack_overflow

/**
 * Function name: stack_underflow
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Indicate that the stack is empty.
 */
void stack_underflow(void)
{
    printf("Stack Underflow: Sorry, the stack is empty!!!\n");
}	// FUNCTION END: stack_underflow