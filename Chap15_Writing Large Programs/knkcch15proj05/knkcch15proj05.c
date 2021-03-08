/*
@@@@ PROGRAM NAME: knkcch15proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 6 from Chapter 10 so that it has separate stack.h and
stack.c files. as described in Section 15.2.
*/
#include <stdio.h>
#include<stdbool.h>  //bool, true, false.
//-----------------------------------------------------------------------------
#include "stack.h"
//-----------------------------------------------------------------------------
extern int top;
//-----------------------------------------------------------------------------
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
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
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
Enter an RPN expression: 2 3 4 - + =
Value of expression: 1
Enter an RPN expression: 2 3 4 - + 0 / =
Divide by zero!!!
Enter an RPN expression: 2 3 4 - =
Too many operands/operators
Enter an RPN expression: 2 - + =
Not enough operands in expression.
make: *** [Makefile:15: runn] Error 1

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