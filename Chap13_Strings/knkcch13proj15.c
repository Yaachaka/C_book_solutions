/*
@@@@ PROGRAM NAME: knkcch13proj15.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 6 from Chapter 10 so that it includes the following function:

	int evaluate_RPN_expression(const char *expression);

The function returns the value of the RPN expression pointed to by expression.
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
int evaluate_RPN_expression(const char *expression);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char ch, expression[30];
	bool digit_or_sign=true;
	
	make_empty();  //Clear the stack.

	printf("Enter an RPN expression (q to exit): ");
	gets(expression);
	if(*expression=='q')
			digit_or_sign=false;
	
	while(digit_or_sign)  //Start of [[WHILE1]]
	{
		
		printf("Value of expression: %d",evaluate_RPN_expression(expression));

		digit_or_sign=true;
		
		make_empty();  //Clear stack before taking another expression.
		printf("\nEnter an RPN expression (q to exit): ");
		gets(expression);
		if(*expression=='q')
			digit_or_sign=false;
		
	}  //End of [[WHILE1]]
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
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
//-----------------------------------------------------------------------------
int evaluate_RPN_expression(const char *expression)
{
	char ch;
	int num1;
	
	while(ch=*expression++)
		if(ch>='0' && ch<='9')
			push((int)(ch-'0'));
		else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=')  //Start of [[ELSEIF1]]
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
						return 0;
					}
					
					break;
				case '=':
					if(top-1)
					{
						printf("Too many operands/operators");
						return 0;
					}
					else
						return pop();
			}  //End of [[SWITCH1]]
		}  //End of [[ELSEIF1]]
	
		
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an RPN expression (q to exit): 2 3 4 - + =
Value of expression: 1
Enter an RPN expression (q to exit): 2 3 4 - + 0 / =
Divide by zero!!!Value of expression: 0
Enter an RPN expression (q to exit): 2 3 4 - + 0 =
Too many operands/operatorsValue of expression: 0
Enter an RPN expression (q to exit): 2 3 4 - + / =
Not enough operands in expression.
make: *** [makefile:18: knkc] Error 1

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