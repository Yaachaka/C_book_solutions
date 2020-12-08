/*
--PROGRAM NAME: knkcch03proj04.c
--PROGRAM STATEMENT: Write a program that prompts the user to enter a 
telephone number in the form (xxx) xxx-xxxx and then displays the number in the 
form xxx.xxx.xxxx:
	Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
	You enetered 404.817.6900
*/
#include<stdio.h>
//--------------------------START OF MAIN()-----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int areacode,nump1,nump2;
	
	//Getting user input
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d",&areacode,&nump1,&nump2);
	
	//Displaying data
	printf("You enetered %d.%d.%d",areacode,nump1,nump2);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//--------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number [(xxx) xxx-xxxx]: (404) 409-2345
You enetered 404.409.2345
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//----------------------------------------------------------------------------