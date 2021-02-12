/*
@@@@ PROGRAM NAME: knkcch07e06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: For each of the following items of data, 
specify which one of the types char, short, int, or long is the smallest one 
guaranteed to be large enough to store the item.
(a) Days in month
(b) Days in a year
(c) Minutes in a day
(d) Seconds in a day
*/
#include<stdio.h>
#include<limits.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("Size of char (bytes): %d",sizeof(char));
	printf("\nSize of short (bytes): %d",sizeof(short));
	printf("\nSize of int (bytes): %d",sizeof(int));
	printf("\nSize of long (bytes): %d",sizeof(long));
	
	//Printing values directly with integer constants.
	printf("\n\nPrinting values without any variables:");
	printf("\nDays in a month= %d",31);
	printf("\nDays in a year= %d",366);
	printf("\nMinutes in a day= %d",1440);
	printf("\nSeconds in a day= %d",86400);
	
	char dmc=31,dyc=366,mdc=1440,sdc=86400;
	//Printing values using char variables.
	printf("\n\nPrinting values using char variables:");
	printf("\nDays in a month= %d",dmc);
	printf("\nDays in a year= %d",dyc);
	printf("\nMinutes in a day= %d",mdc);
	printf("\nSeconds in a day= %d",sdc);
	
	short dms=31,dys=366,mds=1440,sds=86400;
	//Printing values using short variables.
	printf("\n\nPrinting values using short variables:");
	printf("\nDays in a month= %d",dms);
	printf("\nDays in a year= %d",dys);
	printf("\nMinutes in a day= %d",mds);
	printf("\nSeconds in a day= %d",sds);
	
	int dmi=31,dyi=366,mdi=1440,sdi=86400;
	//Printing values using int variables.
	printf("\n\nPrinting values using int variables:");
	printf("\nDays in a month= %d",dmi);
	printf("\nDays in a year= %d",dyi);
	printf("\nMinutes in a day= %d",mdi);
	printf("\nSeconds in a day= %d",sdi);
	
	long dml=31,dyl=366,mdl=1440,sdl=86400;
	//Printing values using long variables.
	printf("\n\nPrinting values using long variables:");
	printf("\nDays in a month= %d",dml);
	printf("\nDays in a year= %d",dyl);
	printf("\nMinutes in a day= %d",mdl);
	printf("\nSeconds in a day= %d",sdl);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch07e06.c:58:33: warning: format specifies type 'int' but the argument has type 'long'
      [-Wformat]
        printf("\nDays in a month= %d",dml);
                                   ~~  ^~~
                                   %ld
knkcch07e06.c:59:32: warning: format specifies type 'int' but the argument has type 'long'
      [-Wformat]
        printf("\nDays in a year= %d",dyl);
                                  ~~  ^~~
                                  %ld
knkcch07e06.c:60:34: warning: format specifies type 'int' but the argument has type 'long'
      [-Wformat]
        printf("\nMinutes in a day= %d",mdl);
                                    ~~  ^~~
                                    %ld
knkcch07e06.c:61:34: warning: format specifies type 'int' but the argument has type 'long'
      [-Wformat]
        printf("\nSeconds in a day= %d",sdl);
                                    ~~  ^~~
                                    %ld
knkcch07e06.c:31:18: warning: implicit conversion from 'int' to 'char' changes value from
      366 to 110 [-Wconstant-conversion]
        char dmc=31,dyc=366,mdc=1440,sdc=86400;
                    ~~~ ^~~
knkcch07e06.c:31:26: warning: implicit conversion from 'int' to 'char' changes value from
      1440 to 160 [-Wconstant-conversion]
        char dmc=31,dyc=366,mdc=1440,sdc=86400;
                            ~~~ ^~~~
knkcch07e06.c:31:35: warning: implicit conversion from 'int' to 'char' changes value from
      86400 to 128 [-Wconstant-conversion]
        char dmc=31,dyc=366,mdc=1440,sdc=86400;
                                     ~~~ ^~~~~
knkcch07e06.c:39:36: warning: implicit conversion from 'int' to 'short' changes value from
      86400 to 20864 [-Wconstant-conversion]
        short dms=31,dys=366,mds=1440,sds=86400;
                                      ~~~ ^~~~~
8 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Size of char (bytes): 1
Size of short (bytes): 2
Size of int (bytes): 4
Size of long (bytes): 4

Printing values without any variables:
Days in a month= 31
Days in a year= 366
Minutes in a day= 1440
Seconds in a day= 86400

Printing values using char variables:
Days in a month= 31
Days in a year= 110
Minutes in a day= 160
Seconds in a day= 128

Printing values using short variables:
Days in a month= 31
Days in a year= 366
Minutes in a day= 1440
Seconds in a day= 20864

Printing values using int variables:
Days in a month= 31
Days in a year= 366
Minutes in a day= 1440
Seconds in a day= 86400

Printing values using long variables:
Days in a month= 31
Days in a year= 366
Minutes in a day= 1440
Seconds in a day= 86400
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------