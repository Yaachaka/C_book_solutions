/*
@@@@ PROGRAM NAME: knkcch05proj09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that prompts the user to enter two 
dates and then indicates which date comes earlier on the calendar:
	Enter first date (mm/dd/yy): 3/6/08
	Enter second date (mm/dd/yy): 5/17/07
	5/17/07 is earlier than 3/6/08
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int mm1,mm2,dd1,dd2,yy1,yy2;
	
	//Getting dates from the user.
	printf("Enter first date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d",&mm1,&dd1,&yy1);
	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d",&mm2,&dd2,&yy2);
	
	//Finding the earlier date among and displaying the same.
	if(yy1<yy2 || (yy1==yy2 && mm1<mm2) || (yy1==yy2 && mm1==mm2 && dd1<dd2))
		printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d",mm1,dd1,yy1,mm2,dd2,yy2);
	else if(yy1==yy2 && mm1==mm2 && dd1==dd2)
		printf("Both the dates are same.");
	else 
		printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d",mm2,dd2,yy2,mm1,dd1,yy1);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first date (mm/dd/yyyy): 12/23/2014
Enter second date (mm/dd/yyyy): 10/24/1996
10/24/1996 is earlier than 12/23/2014
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first date (mm/dd/yyyy): 10/24/1996
Enter second date (mm/dd/yyyy): 12/23/2014
10/24/1996 is earlier than 12/23/2014
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first date (mm/dd/yyyy): 12/23/2014
Enter second date (mm/dd/yyyy): 12/23/2014
Both the dates are same.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------