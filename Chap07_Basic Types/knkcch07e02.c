/*
@@@@ PROGRAM NAME: knkcch07e02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Which of the following are not legal 
constants in C? Classify each legal constant as either integer or floating-point.
(a) 010E2
(b) 32.1E+5
(c) 0790
(d) 100_000
(e) 3.978e-2
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("Printing with decimal conversion specifier");
	printf("\n(a) 010E2 = %d",010E2);  //Generates warning
	printf("\n(b) 32.1E+5 = %d",32.1E+5);  //Generates warning
	//printf("\n(c) 0790 = %d",0790);  //Generates error
	//printf("\n(d) 100_000 = %d",100_000);  //Generates error
	printf("\n(e) 3.978e-2 = %d",3.978e-2);  //Generates warning
	
	printf("\n\nPrinting with decimal conversion specifier");
	printf("\n(a) 010E2 = %f",010E2);
	printf("\n(b) 32.1E+5 = %f",32.1E+5);
	//printf("\n(c) 0790 = %f",0790);  //Generates error
	//printf("\n(d) 100_000 = %f",100_000);  //Generates error
	printf("\n(e) 3.978e-2 = %f",3.978e-2);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
knkcch07e02.c:19:28: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
        printf("\n(a) 010E2 = %d",010E2);
                              ~~  ^~~~~
                              %f
knkcch07e02.c:20:30: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
        printf("\n(b) 32.1E+5 = %d",32.1E+5);
                                ~~  ^~~~~~~
                                %f
knkcch07e02.c:21:29: error: invalid digit '9' in octal constant
        printf("\n(c) 0790 = %d",0790);
                                   ^
knkcch07e02.c:22:33: error: invalid suffix '_000' on integer constant
        printf("\n(d) 100_000 = %d",100_000);
                                       ^
knkcch07e02.c:23:31: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
        printf("\n(e) 3.978e-2 = %d",3.978e-2);
                                 ~~  ^~~~~~~~
                                 %f
knkcch07e02.c:28:29: error: invalid digit '9' in octal constant
        printf("\n(c) 0790 = %f",0790);
                                   ^
knkcch07e02.c:29:33: error: invalid suffix '_000' on integer constant
        printf("\n(d) 100_000 = %f",100_000);
                                       ^
3 warnings and 4 errors generated.

@@@@ Trial 2:  On commenting error generating statements.
knkcch07e02.c:19:28: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
        printf("\n(a) 010E2 = %d",010E2);  //Generates warning
                              ~~  ^~~~~
                              %f
knkcch07e02.c:20:30: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
        printf("\n(b) 32.1E+5 = %d",32.1E+5);  //Generates warning
                                ~~  ^~~~~~~
                                %f
knkcch07e02.c:23:31: warning: format specifies type 'int' but the argument has type
      'double' [-Wformat]
        printf("\n(e) 3.978e-2 = %d",3.978e-2);  //Generates warning
                                 ~~  ^~~~~~~~
                                 %f
3 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Printing with decimal conversion specifier
(a) 010E2 = 0
(b) 32.1E+5 = 0
(e) 3.978e-2 = -1225206314

Printing with decimal conversion specifier
(a) 010E2 = 1000.000000
(b) 32.1E+5 = 3210000.000000
(e) 3.978e-2 = 0.039780
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------