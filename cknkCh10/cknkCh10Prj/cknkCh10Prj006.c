/********************************************************************************
 * File: cknkCh10Prj006.c
 * Author: Yaachaka
 * Purpose: RPN (Reverse Polish Notation), Stack
 ********************************************************************************/
/* START: Header inclusions*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define STACK_SIZE 10
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
int operation(int operand1, int operand2, char operator);
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
    char ch;

    make_empty();

    printf("Enter an RPN expression: ");
    while (1)
    {
        scanf(" %c", &ch);
        if(ch == 'q')
        {
            break;    // Break out of while loop
        }	// if condition: input to quit
        if(ch >= '0' && ch <= '9')
        {
            push(ch - '0');
        }	// if condition: operands
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            push(operation(pop(), pop(), ch));
        }	// else-if condition: closing parentheses/braces
        else if(ch == '=')
        {
            printf("Value of expression: %d\n\n", pop());
            if(top > 0)
            {
                printf("NOTE: Not enough operators. Discarding the remaining operands from stack!!!\n\n");
            }
            make_empty();
            printf("Enter an RPN expression: ");
        }
    }    // while statement: get the characters to the stack
    
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
    printf("Stack Overflow: Expression is too complex!!!\n");
    exit(EXIT_FAILURE);
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
    printf("Stack Underflow: Not enough operands in expression!!!\n");
    exit(EXIT_FAILURE);
}	// FUNCTION END: stack_underflow

/**
 * Function name: operation
 * Return type: int
 * Return value description: 
 * Parameters: int operand1, int operand2, char operator
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Perform arithmetic operation on the provided operands
 */
int operation(int operand1, int operand2, char operator)
{
    int i_result;
    switch(operator)
    {
        case '+':
            i_result = operand1 + operand2;
            break;
        case '-':
            i_result = operand1 - operand2;
            break;
        case '*':
            i_result = operand1 * operand2;
            break;
        case '/':
            if(operand2 == 0)
            {
                printf("Denominator is 0 for division operation. Exiting...\n");
                exit(EXIT_FAILURE);
            }	// if condition: denominator is 0
            i_result = operand1 / operand2;
            break;
    }	// switch statement: arithmetic operations
    return i_result;
}	// FUNCTION END: operation