/*
--PROGRAM NAME: knkcch05e11.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: The following table shows telephone area codes in the state 
of Georgia along with the largest city in each area:
Area code    Major city
  299        Abany
  404        Atlanta
  470        Atlanta
  478        Macon
  678        Atlanta
  706        Columbus
  762        Columbus
  770        Atlanta
  912        Savannah
Write a switch statement whose controlling expression is the variable area-code. 
If the vlaue of area-code is in the table, the switch statement will print the 
corresponding city name. Otherwise, the switch statement will display the message 
"Area code not recognized.". Use the technique discussed in Section 5.3 to make 
the switch statement as simple as possible.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int area_code;
	
	printf("Enter telephone area code: ");
	scanf("%d",&area_code);
	
	printf("City/Area: ");
	switch(area_code)
	{
		case 299:printf("Abany");break;
		case 404:printf("Atlanta");break;
		case 470:printf("Atlanta");break;
		case 478:printf("Macon");break;
		case 678:printf("Atlanta");break;
		case 706:printf("Columbus");break;
		case 762:printf("Columbus");break;
		case 770:printf("Atlanta");break;
		case 912:printf("Savannah");break;
		//default: printf("\b\b\b\b\b\b\b\b\b\b\bArea code not recognized.");
		default: printf("\rArea code not recognized.");
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter telephone area code: 912
City/Area: Savannah
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter telephone area code: 761
Area code not recognized.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter telephone area code: 678
City/Area: Atlanta
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------