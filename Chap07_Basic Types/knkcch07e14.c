/*
@@@@ PROGRAM NAME: knkcch07e14.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Does the following statement always 
compute the fractional part of f correctly (assuming that f and frac_part are 
float variables)?
	frac_part=f-(int)f;
If not, what's the problem?

*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float f=35.738f, frac_part;
	
	frac_part=f-(int)f;
	
	printf("For f=%.4f in frac_part=f-(int)f, frac_part=%.4f",f,frac_part);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
For f=5.73 in frac_part=f-(int)f, frac_part=0.73
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
For f=35.7380 in frac_part=f-(int)f, frac_part=0.7380
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------