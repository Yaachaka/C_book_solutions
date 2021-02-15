/*
@@@@ PROGRAM NAME: knkcch08e05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The Fibonacci numbers are 0, 1, 1, 2, 3, 
5, 8, 13, ..., where each number is the sum of the two preceding numbers. Write a program 
fragment that declares an array named fib_numbers of length 40 and fills the array with 
the first 40 Fibonacci numbers. Hint: Fill in the first two numbers individually, then use 
a loop to compute the remaining numbers.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int fib_numbers[40]={0,1};

	for(int i=2;i<40;i++)
		fib_numbers[i]=fib_numbers[i-1]+fib_numbers[i-2];
	
	printf("Fibonacci series upto first 40 elemets: ");
	for(int i=0;i<40;i++)
		printf("%d   ",fib_numbers[i]);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Fibonacci series upto first 40 elemets: 0   1   1   2   3   5   8   13   21   34   55   89   144   233   377   610   987
 1597   2584   4181   6765   10946   17711   28657   46368
75025   121393   196418   317811   514229   832040   1346269
  2178309   3524578   5702887   9227465   14930352   24157817   39088169   63245986
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------