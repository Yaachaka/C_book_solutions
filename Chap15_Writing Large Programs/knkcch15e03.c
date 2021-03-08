/*
@@@@ PROGRAM NAME: knkcch15e0.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
We saw that writing #include <file> instead of #include "file" may not work if file is
one that we've written. Would there be any problem with writing #include "file" instead
of #include <file> if file is a system header?
*/
#include<stdio.h>
#include "ctype.h"
#include "math.h"
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("Trying #include \"ctype.h\"");
	printf("\ntoupper(%c) is %c.",'a',toupper('a'));
	printf("\nsqrt(%d) is %d.",10,sqrt(10));

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
@@@@ Trial1: When #include "ctype.h" and #include "math.h" are not included.
knkcch15e03.c: In function ‘main’:
knkcch15e03.c:18:36: warning: implicit declaration of function ‘toupper’ [-Wimplicit-function-declaration]
   18 |  printf("\ntoupper(%c) is %c.",'a',toupper('a'));
      |                                    ^~~~~~~
knkcch15e03.c:19:32: warning: implicit declaration of function ‘sqrt’ [-Wimplicit-function-declaration]
   19 |  printf("\nsqrt(%d) is %d.",10,sqrt(10));
      |                                ^~~~
knkcch15e03.c:19:32: warning: incompatible implicit declaration of built-in function ‘sqrt’
knkcch15e03.c:7:1: note: include ‘<math.h>’ or provide a declaration of ‘sqrt’
    6 | #include<stdio.h>
  +++ |+#include <math.h>
    7 | //#include "ctype.h"
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Trying #include "ctype.h"
toupper(a) is A.
sqrt(10) is 987388755.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2: When #include "ctype.h" and #include "math.h" are included.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Trying #include "ctype.h"
toupper(a) is A.
sqrt(10) is 987388755.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------