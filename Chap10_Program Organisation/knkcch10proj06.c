/*
@@@@ PROGRAM NAME: knkcch10proj06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Some calculators (notably those from Hewlett-Packard) use 
a system of writing matheimatical expressions known as Reverse Polish Notation (RPN). 
In this notation, operators are placed after their operands instead of between their 
operands. For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 
1 2 3 * +. RPN expressions can easily be evaluated using a stack. The algorithm involves 
reading the operators and operands in an expression from left to right, performing the 
following actions:

	When an operand is encountered, push it onto the stack.
	When an operator is encountered, pop its operands from the stack, perform the operation 
	on those operands, and then push the result onto the stack.

Write a program that evaluates RPN expressions. The operands will be single-digit integers.
The operators are +, —, *, /, and =. The = operator causes the top stack item to be 
displayed; afterwards, the stack is cleared and the user is prompted to enter another 
expression. The process continues until the user enters a character that is not an 
operator or operand:

	Enter an RPN expression: 1 2 3 * + =
	Value of expression: 7
	Enter an RPN expression: 5 8 * 4 9 - / =
	Value of expression: -8
	Enter an RPN expression: q

If the stack overflows, the program will display the message Expression is too complex 
and terminate. If the stack underflows (because of an expression such as 1 2 + +), the 
program will display the message Not enough operands in expression and terminate. 
Hints: Incorporate the stack code from Section 10.2 into your program. Use 
scanf(" %c", &ch) to read the operators and operands.
*/
#include<stdio.h>
#include<stdlib.h>  //exit(), EXIT_FAILURE
#include<stdbool.h>  //bool, true, false.
//-----------------------------------------------------------------------------
#define STACK_SIZE 10

int contents[STACK_SIZE];
int top = 0;
//-----------------------------------------------------------------------------
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int c);
int pop(void);

//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char ch;
	int num1;
	bool divide_by_zero=false;
	
	make_empty();  //Clear the stack.

	printf("Enter an RPN expression: ");
	scanf(" %c", &ch);
	do  //Start of [[DOWHILE1]]
	{
		if(ch>='0' && ch<='9')
			push((int)(ch-'0'));
		else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')  //Start of [[ELSEIF1]]
		{
			switch(ch)  //Start of [[SWITCH1]]
			{
				case '+':
					num1=pop();
					num1+=pop();
					push(num1);
					break;
				case '-':
					num1=pop();
					num1=pop()-num1;
					push(num1);
					break;
				case '*':
					num1=pop();
					num1*=pop();
					push(num1);
					break;
				case '/':
					num1=pop();
					if(num1)
					{
						num1=(pop())/num1;
						push(num1);
						
					}
					else
					{
						printf("Divide by zero!!!");
						divide_by_zero=true;
					}
					
					break;
			}  //End of [[SWITCH1]]
		}  //End of [[ELSEIF1]]
		else if(ch=='=' || divide_by_zero)
		{
			if(divide_by_zero)
			{
				divide_by_zero=false;  //Clear divide by zero flag.
				make_empty();  //Clear stack before taking another expression.
			
			}
			else if(top-1)
				printf("Too many operands/operators");
			else
				printf("Value of expression: %d",pop());
			make_empty();  //Clear stack before taking another expression.
			printf("\nEnter an RPN expression: ");
		}
		else
			break;
		
		scanf(" %c", &ch);
	}while(ch!='\n');  //End of [[DOWHILE1]]
	

	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;  //exit(0) or exit(EXIT_SUCCESS) can be used.
}
//-------------------------END OF MAIN()---------------------------------------
void make_empty(void)
{
	top = 0;
}
//---------------------------------------------------------------------------
bool is_empty(void)
{
	return top == 0;
}
//---------------------------------------------------------------------------
bool is_full(void)
{
	return top == STACK_SIZE;
}
//---------------------------------------------------------------------------
void push(int c)
{
	if (is_full())
	{
		printf("Expression is too complex.\n");
		exit(EXIT_FAILURE);
	}
	contents[top++] = c;
	//printf("Pushing %d\n",contents[top-1]);
}
//---------------------------------------------------------------------------
int pop(void)
{
	if (is_empty())
	{
		printf("Not enough operands in expression.\n");
		exit(EXIT_FAILURE);
	}
	//printf("Popping %d\n",contents[top-1]);
	return contents[--top];
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an RPN expression: 5 8 8 4 9 - / =
Too many operands/operators
Enter an RPN expression: 1 2 3 * + =
Value of expression: 7
Enter an RPN expression: 5 8 * 4 9 - / =
Value of expression: -8
Enter an RPN expression: 5 8 * 4 4 - / =
Divide by zero!!!
Enter an RPN expression: 1 2 + +
Not enough operands in expression.
make: *** [makefile:18: knkc] Error 1

@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an RPN expression: 1 2 3 4 5 6 7 8 2 3 4 + - * / + - + - + *
Expression is too complex.
make: *** [makefile:18: knkc] Error 1

@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------