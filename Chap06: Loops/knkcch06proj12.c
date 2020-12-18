/*
@@@@ PROGRAM NAME: knkcch06proj12.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 11 so that the program 
continues adding terms until the current term becomes less than ε, where 
ε is a small (floating-point) number entered by the user.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float epsilon,e=1.00f;
	int facto,nIters=0;
	
	printf("Let us find the value of e (a mathematical constant) within our limits.\n");
	printf("Enter value of ε: ");
	scanf("%f",&epsilon);  //Limiting n value to 2 digits.
	
	//Calculating the value of e.
	for(int i=1;;i++)
	{
		nIters++;
		facto=1;
		for(int j=1;j<=i;j++)  //Finding the factorial.
			facto*=j;
		if(1.00f/facto<epsilon)
			break;
		e+=1.00f/facto;
	}
	
	printf("The value of e is %.4f",e);
	printf("\nNumber of iterations (when it crosses ε): %d",nIters);
	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of ε: 0.001
The value of e is 2.7181
Number of iterations (when it crosses ε): 7
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of ε: 0.0005
The value of e is 2.7181
Number of iterations (when it crosses ε): 7
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of ε: 0.0002
The value of e is 2.7181
Number of iterations (when it crosses ε): 7
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of ε: 0.0001
The value of e is 2.7183
Number of iterations (when it crosses ε): 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of ε: 0.01
The value of e is 2.7083
Number of iterations (when it crosses ε): 5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------