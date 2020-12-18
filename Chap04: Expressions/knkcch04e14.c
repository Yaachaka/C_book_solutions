/*
--PROGRAM NAME: knkcch04e14.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Supply parentheses to show how a C compiler would interpret 
each of the following expressions.
(a) a*b-c*d+e
(b) a/b%c/d
(c) -a-b+c-+d
(d) a*-b/c-d
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int a=2,b=3,c=4,d=5,e=3;
	
	//Section (a)
	printf("(a):\ta*b-c*d+e=\t%d",a*b-c*d+e);
	printf("\n\t(a*b)-(c*d)+e=\t%d",(a*b)-(c*d)+e);
	//Section (b)
	printf("\n(b):\ta/b%%c/d=\t%d",a/b%c/d);
	printf("\n\t((a/b)%%c)/d=\t%d",((a/b)%c)/d);
	//Section (c)
	printf("\n(c):\t-a-b+c-+d=\t%d",-a-b+c-+d);
	printf("\n\t(-a)-b+c-(+d)=\t%d",(-a)-b+c-(+d));
	//Section (d)
	printf("\n(d):\ta*-b/c-d=\t%d",a*-b/c-d);
	printf("\n\t(a*(-b)/c)-d=\t%d",(a*(-b)/c)-d);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a):    a*b-c*d+e=      -11
        (a*b)-(c*d)+e=  -11
(b):    a/b%c/d=        0
        ((a/b)%c)/d=    0
(c):    -a-b+c-+d=      -6
        (-a)-b+c-(+d)=  -6
(d):    a*-b/c-d=       -6
        (a*(-b)/c)-d=   -6
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------