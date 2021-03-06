/*
@@@@ PROGRAM NAME: knkcch14e03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
let DOUBLE be the following macro:
	#define DOUBLE(x) 2*x
(a) What is the value of DOUBLE(1+2) ?
(b) What is the value of 4/DOUBLE(2) ?
(c) Fix the definition of DOUBLE.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define DOUBLE(x) 2*x
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("(a) What is the value of DOUBLE(1+2) ?: %d",DOUBLE(1+2));
	printf("\n(b) What is the value of 4/DOUBLE(2) ?: %d",4/DOUBLE(2));
	printf("\n(c) Fix the definition of DOUBLE.");
	printf("\n\tStep1: #undef DOUBLE");
	printf("\n\tStep2: #define DOUBLE(x) (2*(x))");
	#undef DOUBLE
	#define DOUBLE(x) (2*(x))
	printf("\n\n(a) What is the value of DOUBLE(1+2) ?: %d",DOUBLE(1+2));
	printf("\n(b) What is the value of 4/DOUBLE(2) ?: %d",4/DOUBLE(2));
	
	
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
(a) What is the value of DOUBLE(1+2) ?: 4
(b) What is the value of 4/DOUBLE(2) ?: 4
(c) Fix the definition of DOUBLE.
        Step1: #undef DOUBLE
        Step2: #define DOUBLE(x) (2*(x))

(a) What is the value of DOUBLE(1+2) ?: 6
(b) What is the value of 4/DOUBLE(2) ?: 1
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