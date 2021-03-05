/*
@@@@ PROGRAM NAME: knkcch14e13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
(a) Show what the following program will look like after preprocessing. You may ignore
any lines added to the program as a result of including the <stdio.h> header.

	#include <stdio.h>
	
	#define N 100
	
	void f(void);
	
	int main(void)
	{
		f();
		#ifdef N
		#undef N
		#endif
		
		return 0;
	}
	
	void f(void)
	{
		#if defined(N)
			printf("N is %d\n", N);
		#else
			printf("N is undefined\n") ;
		#endif		
	}

(b) What will be the output of this program?
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define N 100
//---------------------------------------------------------------------------
void f(void);
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	f();
	#ifdef N
	#undef N
	#endif
	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void f(void)
{
	#if defined(N)
		printf("N is %d\n", N);
	#else
		printf("N is undefined\n") ;
	#endif		
}
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
N is undefined

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