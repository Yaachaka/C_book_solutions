/*
@@@@ PROGRAM NAME: knkcch09proj07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The power function of Section 9.6 can be made faster by 
having it calculate xⁿ in a different way. We first notice that if n is a power of 2, 
then xⁿ can be computed by squaring. For example, x⁴ is the square of x^2, so x⁴ can be 
computed using only two multiplications instead of three. As it happens, this technique 
can be used even when n is not a power of 2. If n is even, we use the formula xⁿ=(x^(n/2))^2. 
If n is odd, then xⁿ=x×xⁿ⁻¹. Write a recursive function that computes xⁿ. (The recursion 
ends when n = 0, in which case the function returns 1.) To test your function, write a 
program that asks the user to enter values for x and n, calls power to compute xⁿ, and 
then displays the value returned by the function.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
int power(int x, int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int x,n;

	printf("Enter values of x and its power n: ");
	scanf("%d %d",&x,&n);

	printf("%d raised to power %d is %d",x,n,power(x,n));

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int power(int x, int n)
{
	if(!n)
		return 1;
	else if(n==1)
		return x;
	else if(n==2)
		return x*x;
	else if(n%2)  //n is odd
		return x*power(x,n-1);
	else  //n is even
		return power(power(x,n/2),2);
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter values of x and its power n: 4 3
4 raised to power 3 is 64
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter values of x and its power n: 3 9
3 raised to power 9 is 19683
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------