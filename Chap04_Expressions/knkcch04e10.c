/*
--PROGRAM NAME: knkcch04e10.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Show the output produced by each of the following program 
fragments. Assume that i and j are int variables.
(a) i=6;
	j=i+=i;
	printf("%d %d",i,j);
(b) i=5;
	j=(i-=2)+1;
	printf("%d %d",i,j);
(c) i=7;
	j=6+(i=2.5);
	printf("%d %d",i,j);
(d) i=2;j=8;
	j=(i=6)+(j=3);
	printf("%d %d",i,j);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j;
	
	//Option (a)
	i=6;
	j=i+=i;
	printf("(a): %d %d",i,j);
	//Option (b)
	i=5;
	j=(i-=2)+1;
	printf("\n(b): %d %d",i,j);
	//Option (c)
	i=7;
	j=6+(i=2.5);
	printf("\n(c): %d %d",i,j);
	//Option (d)
	i=2;j=8;
	j=(i=6)+(j=3);
	printf("\n(d): %d %d",i,j);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
knkcch04e10.c:37:9: warning: implicit conversion from 'double' to 'int' changes value from
      2.5 to 2 [-Wliteral-conversion]
        j=6+(i=2.5);
              ~^~~
knkcch04e10.c:41:12: warning: multiple unsequenced modifications to 'j' [-Wunsequenced]
        j=(i=6)+(j=3);
         ~        ^
2 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a): 12 12
(b): 3 4
(c): 2 8
(d): 6 9
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------