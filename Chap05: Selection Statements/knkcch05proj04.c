/*
--PROGRAM NAME: knkcch05proj04.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Here's a simplified version of the Beaufort scale, which is 
used to estimate wind force:
Speed(knots)   Description
Less than 1    Calm
1 - 3          Light air
4 - 27         Breeze
28 - 47        Gale
48 - 63        Storm
Above 63       Hurricane
Write a program that asks the user to enter a wind speed (in knots), then 
displays the corresponding description.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int wspeed;
	
	//User input
	printf("Enter a wind speed (in knots): ");
	scanf("%d",&wspeed);
	
	printf("Weather condition: ");
	if(wspeed<1) printf("Calm");
	else if(wspeed<4) printf("Light air");
	else if(wspeed<28) printf("Breeze");
	else if(wspeed<48) printf("Gale");
	else if(wspeed<64) printf("Storm");
	else printf("Hurricane");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a wind speed (in knots): 26
Weather condition: Breeze
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a wind speed (in knots): 1
Weather condition: Light air
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a wind speed (in knots): 0
Weather condition: Calm
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a wind speed (in knots): 76
Weather condition: Hurricane
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------