/*
@@@@ PROGRAM NAME: knkcch07proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The square2.c program of Section 6.3 will fail 
(usually by printing strange answers) if i*i exceeds the maximum int value. Run 
the program and determine the smallest value of n that causes failure. Try 
changing the type of i to short and running the program again. (Don't forget to 
update the conversion specifications in the call of printf !) Then try long. 
From these experiments, what can you conclude about the number of bits used to 
store integer types on your machine?
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short s;
	int i,n;
	long l;
	
	//Implementation on short variable.
	n=1;
	printf("Implementation on short variable s (Size of s= %d bytes): ",sizeof(short));
	while(1)
	{
		s=n*n;
		if(s<=0)
		{
			printf("\nAt n=%d, n*n exceeds the maximum short value and s= %hd",n,s);
			n--;
			s=n*n;
			printf("\nMaximum value of n*n that can be stored in short "
			"variable s is %hd at n= %d",s,n);
			break;
		}
		else
			n++;
	}
	
	//Implementation on int variable.
	n=1;
	printf("\n\nImplementation on int variable i (Size of i= %d bytes): ",sizeof(int));
	while(1)
	{
		i=n*n;
		if(i<=0)
		{
			printf("\nAt n=%d, n*n exceeds the maximum int value and i= %d",n,i);
			n--;
			i=n*n;
			printf("\nMaximum value of n*n that can be stored in int "
			"variable i is %d at n= %d",i,n);
			break;
		}
		else
			n++;
	}
	
	//Implementation on long variable.
	n=1;
	printf("\n\nImplementation on long variable l (Size of l= %d bytes): ",sizeof(long));
	while(1)
	{
		l=n*n;
		if(l<=0)
		{
			printf("\nAt n=%d, n*n exceeds the maximum long value and l= %ld",n,l);
			n--;
			l=n*n;
			printf("\nMaximum value of n*n that can be stored in long "
			"variable l is %ld at n= %d",l,n);
			break;
		}
		else
			n++;
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
@@@@ CONCLUSION: 
@@@@ For short, the size is 2 bytes = 16 bits = 1 sign bit and 15 data bit.
@@@@ For int, the size is 4 bytes = 32 bits = 1 sign bit and 31 data bit.
@@@@ For long, the size is 4 bytes = 32 bits = 1 sign bit and 31 data bit.
*/
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Implementation on short variable s (Size of s= 2 bytes):
At n=182, n*n exceeds the maximum short value and s= -32412
Maximum value of n*n that can be stored in short variable s is 32761 at n= 181

Implementation on int variable i (Size of i= 4 bytes):
At n=46341, n*n exceeds the maximum int value and i= -2147479015
Maximum value of n*n that can be stored in int variable i is 2147395600 at n= 46340

Implementation on long variable l (Size of l= 4 bytes):
At n=46341, n*n exceeds the maximum long value and l= -2147479015
Maximum value of n*n that can be stored in long variable l is 2147395600 at n= 46340
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------