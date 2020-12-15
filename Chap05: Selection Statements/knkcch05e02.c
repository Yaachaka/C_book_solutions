/*
--PROGRAM NAME: knkcch05e02.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: The following fragments illustrate the logical operators. 
Show the output produced by it, assuming that i, j, and k are int variables.
(a) i=1;j=5;
    printf("%d",!i<j);
(b) i=2;j=1;
    printf("%d",!!i+!j);
(c) i=5;j=0;k=-5;
    printf("%d",i && j || k);
(d) i=1;j=2;k=3;
    prinrf("%d", i<j||k);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j,k;
	
	//Option (a)
	i=1;j=5;
	printf("(a): %d",!i<j);
	//Option (b)
	i=2;j=1;
	printf("\n(b): %d",!!i+!j);
	//Option (c)
	i=5;j=0;k=-5;
	printf("\n(c): %d",i && j || k);
	//Option (d)
	i=1;j=2;k=3;
	printf("\n(d): %d", i<j||k);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch05e02.c:25:19: warning: logical not is only applied to the left hand side of this
      comparison [-Wlogical-not-parentheses]
        printf("(a): %d",!i<j);
                         ^ ~
knkcch05e02.c:25:19: note: add parentheses after the '!' to evaluate the comparison first
        printf("(a): %d",!i<j);
                         ^
                          (  )
knkcch05e02.c:25:19: note: add parentheses around left hand side expression to silence
      this warning
        printf("(a): %d",!i<j);
                         ^
                         ( )
knkcch05e02.c:31:23: warning: '&&' within '||' [-Wlogical-op-parentheses]
        printf("\n(c): %d",i && j || k);
                           ~~^~~~ ~~
knkcch05e02.c:31:23: note: place parentheses around the '&&' expression to silence this
      warning
        printf("\n(c): %d",i && j || k);
                             ^
                           (     )
2 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a): 1
(b): 1
(c): 1
(d): 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------