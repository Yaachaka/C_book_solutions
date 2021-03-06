/*
@@@@ PROGRAM NAME: knkcch16e19.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Declare a structure with the following members whose tag is pinball_machine:
name — a string of up to 40 characters
year — an integer (representing the year of manufacture)
type — an enumeration with the values EM (electromechanical) and SS (solid state)
players — an integer (representing the maximum number of players)
*/
#include<stdio.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
struct pinball_machine
{
	char name[40];  //Name of the machine
	int year;  //The year of manufacture
	enum {EM, SS} type;  //EM - Electromechanical, SS - Solid state
	int players;  //Maximum number of players
};
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("File: %s (Date: %s, Time: %s)\n", __FILE__, __DATE__, __TIME__);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16e19.c (Date: Mar 13 2021, Time: 16:13:27)

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
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