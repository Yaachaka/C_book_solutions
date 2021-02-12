/*
--PROGRAM NAME: knkcch03proj02.c
--PROGRAM STATEMENT: Write a program that formats product information
entered by the user. A session with the program should look like this:
	Enter item number: 583
	Enter unit price: 13.5
	Enter purchase date: (mm/dd/yyyy): 10/24/2010
	
	Item    Unit        Purchase
	        Price       Date
	583     $  13.50    10/24/2010
The item number and date should be left justified; the unit price should be right
justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the 
columns.
*/
#include<stdio.h>
//--------------------------START OF MAIN()-----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int itemn,month,day,year;
	float uprice;
	
	//Getting Data from user
	printf("Enter item number: ");
	scanf("%d",&itemn);
	printf("Enter unit price: ");
	scanf("%f",&uprice);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&month,&day,&year);
	
	//Displaying data to the screen.
	printf("Item\t\tUnit\t\tPurchase\nNo.\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%-2.2d/%.2d/%.4d",itemn,uprice,month,day,year);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//--------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter item number: 342
Enter unit price: 456.65
Enter purchase date (mm/dd/yyyy): 12/23/2019
Item            Unit            Purchase
No.             Price           Date
342             $ 456.65        12/23/2019
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//----------------------------------------------------------------------------