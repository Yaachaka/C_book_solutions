/*
--PROGRAM NAME: knkcch05e03.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: --Exercise 3 (Section 5.1): knkcch05e03: The following program fragments 
illustrate the short-circuit behaviour of logical expression. Show the output 
produced by each, assuming that i, j, and k are int variables.
(a) i=8;j=4;k=5;
    printf("%d ",i < j || ++j < k);
    printf("%d %d %d",i,j,k);
(b) i=7;j=8;k=9;
    printf("%d ",i-7 && j++ < k));
    printf("%d %d %d",i,j,k);
(c) i=7;j=8;k=9;
    printf("%d ",(i=j) || (j=k));
    printf("%d %d %d",i,j,k);
(d) i=1;j=1;k=1;
    printf("%d ",++i || ++j && ++k);
    printf("%d %d %d",i,j,k);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j,k;
	
	//Option (a)
	i=8;j=4;k=5;
	printf("(a):\t%d ",i < j || ++j < k);
	printf("\n\t%d %d %d",i,j,k);
	//Option (b)
	i=7;j=8;k=9;
	printf("\n(b):\t%d ",i-7 && j++ < k);
	printf("\n\t%d %d %d",i,j,k);
	//Option (c)
	i=7;j=8;k=9;
	printf("\n(c):\t%d ",(i=j) || (j=k));
	printf("\n\t%d %d %d",i,j,k);
	//Option (d)
	i=1;j=1;k=1;
	printf("\n(d):\t%d ",++i || ++j && ++k);
	printf("\n\t%d %d %d",i,j,k);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch05e03.c:42:34: warning: '&&' within '||' [-Wlogical-op-parentheses]
        printf("\n(d):\t%d ",++i || ++j && ++k);
                                 ~~ ~~~~^~~~~~
knkcch05e03.c:42:34: note: place parentheses around the '&&' expression to silence this
      warning
        printf("\n(d):\t%d ",++i || ++j && ++k);
                                        ^
                                    (         )
1 warning generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a):    0
        8 5 5
(b):    0
        7 8 9
(c):    1
        8 8 9
(d):    1
        2 1 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------