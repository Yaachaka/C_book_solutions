/*
@@@@ PROGRAM NAME: knkcch16proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write a program that asks the user to enter an international dialing code and then looks 
it up in the country_codes array (see Section 16.3). If it finds the code, the program 
should display the name of the corresponding country: if not, the program should print 
an error message.
*/
#include <stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
struct dialing_code
{
	char *country;
	int code;
};
//-----------------------------------------------------------------------------
const struct dialing_code country_codes[32] =
{
	{"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55}, {"Burma (Mayanmar)", 95}, 
	{"China", 86}, {"Colombia", 57}, {"Congo, Dem. Rep. of", 243}, {"Egypt", 20}, 
	{"Ethiopia", 251}, {"France", 33}, {"Germany", 49}, {"India", 91}, 
	{"Indonesia", 62}, {"Iran", 98}, {"Italy", 39}, {"Japan", 81}, 
	{"Mexico", 52}, {"Nigeria", 234}, {"Pakistan", 92}, {"Philippines", 63}, 
	{"Poland", 48}, {"Russia", 7}, {"South Africa", 27}, {"South Korea", 82}, 
	{"Spain", 34}, {"Sudan", 249}, {"Thailand", 66}, {"Turkey", 90}, 
	{"Ukraine", 380}, {"United Kingdom", 44}, {"United States", 1}, {"Vietnam", 84}
};
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s (Date: %s, Time: %s)\n", __FILE__, __DATE__, __TIME__);
	
	int code;

	printf("Enter dialing code to know corresponding country: ");
	scanf("%d", &code);

	short i;

	for(i=0; i<32; i++)
	{
		if(code == country_codes[i].code)
		{
			printf("Country: %s", country_codes[i].country);
			break;
		}
	}
	if(i == 32)
		printf("Dialing code not found.");

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj01.c (Date: Mar 13 2021, Time: 19:01:33)
Enter dialing code to know corresponding country: 91
Country: India
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj01.c (Date: Mar 13 2021, Time: 19:01:33)
Enter dialing code to know corresponding country: 02
Dialing code not found.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj01.c (Date: Mar 13 2021, Time: 19:01:33)
Enter dialing code to know corresponding country: 45
Dialing code not found.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj01.c (Date: Mar 13 2021, Time: 19:01:33)
Enter dialing code to know corresponding country: 01
Country: United States
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------