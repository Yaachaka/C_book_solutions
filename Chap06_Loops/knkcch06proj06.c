/*
@@@@ PROGRAM NAME: knkcch06proj06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that prompts the user to enter a 
number n, then prints all even squares between 1 and n. For example, if the user 
enters 100, the program should print the following:
	4
	16
	36
	64
	100
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n,i=1;
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	while(i*i<=n)
		printf("%d  ",i*i++);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
knkcch06proj06.c:25:20: warning: unsequenced modification and access to 'i'
      [-Wunsequenced]
                printf("%d  ",i*i++);
                              ~  ^
1 warning generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 100
1  4  9  16  25  36  49  64  81  100
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 135
1  4  9  16  25  36  49  64  81  100  121
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer: 999
1  4  9  16  25  36  49  64  81  100  121  144  169  196  225  256  289  324  361  400  441  484  529  576  625  676  729  784  841  900  961
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------