/*
@@@@ PROGRAM NAME: knkcch06proj09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Programming Project 8 in Chapter 2 asked you to 
write a program that calculate the reamaining balance on a loan after the first, 
second, and third monthly payments. Modify the program so that it also asks the 
user to enter the number of payments and then displays the balance remaining 
after each of these payments.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float amt,iratey,iratem,mpay,balance;
	//amt-amount, iratey-interest per year, iratem-interest per month, mpay-monthly payment
	int nPays;

	//Getting data from user
	printf("Enter amount of loan: $");
	scanf("%f",&amt);
	printf("Enter interest rate (yearly): ");
	scanf("%f",&iratey);
	iratem=iratey/12;
	printf("  That is equal to %.2f%% per month.\n",iratem);  //To print a % character type-in two % characters. 
		//OR we can write printf("%c",37);, where 37 is ASCII code for % character.
	printf("Enter monthly payment: ");
	scanf("%f",&mpay);
	printf("Enter no. of payments: ");
	scanf("%d",&nPays);
	
	balance=amt+iratem*amt/100;
	
	for(int i=0;i<nPays;i++)
	{
		balance=balance+iratem*balance/100-mpay;
		printf("\nBalance remaining after payment %d: $%.2f",i+1,balance);
		if(balance<0)
		{
			printf("\nAlert!!! negative balance. Please check your inputs.");
			break;
		}
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter amount of loan: $2398
Enter interest rate (yearly): 4.2
  That is equal to 0.35% per month.
Enter monthly payment: 234.3
Enter no. of payments: 6

Balance remaining after payment 1: $2180.52
Balance remaining after payment 2: $1953.85
Balance remaining after payment 3: $1726.39
Balance remaining after payment 4: $1498.13
Balance remaining after payment 5: $1269.07
Balance remaining after payment 6: $1039.21
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter amount of loan: $2397
Enter interest rate (yearly): 4.2
  That is equal to 0.35% per month.
Enter monthly payment: 234.3
Enter no. of payments: 12

Balance remaining after payment 1: $2179.51
Balance remaining after payment 2: $1952.84
Balance remaining after payment 3: $1725.37
Balance remaining after payment 4: $1497.11
Balance remaining after payment 5: $1268.05
Balance remaining after payment 6: $1038.19
Balance remaining after payment 7: $807.52
Balance remaining after payment 8: $576.05
Balance remaining after payment 9: $343.76
Balance remaining after payment 10: $110.67
Balance remaining after payment 11: $-123.25
Alert!!! negative balance. Please check your inputs.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------