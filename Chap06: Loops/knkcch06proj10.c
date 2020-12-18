/*
@@@@ PROGRAM NAME: knkcch06proj10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Programming Project 9 in Chapter 5 asked you to 
write a program that determines which of two dates comes earlier on the calendar. 
Generalize the program so that the user may enter any number of dates. The user 
will enter 0/0/0 to indicate that no more dates will be entered:
	Enter a date (mm/dd/yy): 3/6/08
	Enter a date (mm/dd/yy): 5/17/07
	Enter a date (mm/dd/yy): 6/3/07
	Enter a date (mm/dd/yy): 0/0/0
	5/17/07 is the earliest date
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int mm1,mm2,dd1,dd2,yy1,yy2;
	
	//Getting dates from the user.
	printf("Enter date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d",&mm1,&dd1,&yy1);
	if(mm1+dd1+yy1>0)
	{
		for(;;)
		{
			printf("Enter date (mm/dd/yyyy): ");
			scanf("%2d/%2d/%4d",&mm2,&dd2,&yy2);
			if(mm2+dd2+yy2==0)
				break;
			//Finding the earlier date among.
			if(yy1>yy2 || (yy1==yy2 && mm1>mm2) || (yy1==yy2 && mm1==mm2 && dd1>dd2))
			{
				yy1=yy2;mm1=mm2;dd1=dd2;
			}
		}
		
		printf("%.2d/%.2d/%.4d is the earliest date",mm1,dd1,yy1);
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter date (mm/dd/yyyy): 0/0/0

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter date (mm/dd/yyyy): 12/23/1222
Enter date (mm/dd/yyyy): 10/22/03
Enter date (mm/dd/yyyy): 8/02/05
Enter date (mm/dd/yyyy): 6/05/23
Enter date (mm/dd/yyyy): 0/0/0
10/22/0003 is the earliest date
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter date (mm/dd/yyyy): 12/12/2008
Enter date (mm/dd/yyyy): 12/10/2008
Enter date (mm/dd/yyyy): 12/08/2008
Enter date (mm/dd/yyyy): 12/04/2008
Enter date (mm/dd/yyyy): 0/0/0
12/04/2008 is the earliest date
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------