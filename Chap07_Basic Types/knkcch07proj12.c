/*
@@@@ PROGRAM NAME: knkcch07proj12.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that evaluates an expression:
	Enter an expression: 1+2.5*3
	Value of expression: 10.5
The operands in the expression are floating-point numbers; the operators are +, 
-, *, and /. The expression is evaluated from left to right (no operator takes 
precedence over any other operator).
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float fn1,fn2;
	char ch;
	_Bool flag=1;
	
	printf("Enter an expression: ");
	scanf("%f",&fn1);
	scanf("%c",&ch);
	do
	{
		scanf("%f",&fn2);
		
		switch(ch)
		{
			case '+': fn1+=fn2; break;
			case '-': fn1-=fn2; break;
			case '*': fn1*=fn2; break;
			case '/': if(fn2){fn1/=fn2;}else{flag=0;}
			
		}
	}while((ch=getchar())!='\n');
	
	printf("Value of expression: ∞");
	if(flag)
		printf("\b%.2f",fn1);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an expression: 1+20*54/12-60
Value of expression: 34.50
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an expression: 1+20*54/0-60
Value of expression: ∞
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------
