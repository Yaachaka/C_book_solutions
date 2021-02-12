/*
@@@@ PROGRAM NAME: knkcch06proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Programming Project 1 in Chapter 4 asked you to 
write a program that displays a two-digit number with its digits reversed. 
Generalise the program so that the number can have one, two, three, or more 
digits. Hint: Use a do loop that repeatedly divides the number by 10, stopping 
when it reaches 0.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int a,b,n=0;
	
	printf("Enter an integer: ");
	scanf("%d",&a);
	
	b=a;
	
	while(b/10)
	{
		n+=b%10;
		b/=10;
		n*=10;
	}
	n+=b;
	
	printf("Reversed number: %d",n);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 1483
Reversed number: 3841
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 83
Reversed number: 38
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 189324
Reversed number: 423981
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 3470
Reversed number: 743
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------