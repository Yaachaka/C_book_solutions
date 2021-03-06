/*
--PROGRAM NAME: knkcch05e08.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: The following if statement is unnecessarily complicated. 
Simplify it as much as possible. (Hint: The entire statement can be replaced 
by a single assignment.)
	if(age > 13)
		if(age <= 19)
			teenager=true;
		else
			teenager=false;
	else if(age < 13)
		teenager=false;
*/
#include<stdio.h>
#include<stdbool.h>  //bool, true, false
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int age;
	bool teenager;
	
	//User input
	printf("Enter age (between 1 and 125): ");
	scanf("%3d",&age);
	
	//Given if statement
	if(age > 13)
		if(age <= 19)
			teenager=true;
		else
			teenager=false;
	else if(age < 13)
		teenager=false;
	printf("The output of the given if statement: %d",teenager);
	//Rewritten if statement.
	teenager=(age>13 && age<=19)?true:false;
	//teenager=age>13?(age<=19?true:false):false;
	printf("\nThe output of the rewritten if statement: %d",teenager);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter age (between 1 and 125): 32
The output of the given if statement: 0
The output of the rewritten if statement: 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter age (between 1 and 125): 16
The output of the given if statement: 1
The output of the rewritten if statement: 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter age (between 1 and 125): 8
The output of the given if statement: 0
The output of the rewritten if statement: 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------