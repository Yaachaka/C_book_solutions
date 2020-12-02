/*
--PROGRAM NAME: knkcch02proj08.c
--PROGRAM STATEMENT: Write a program that calculates the remaining 
balance on a loan after the first, second, and third monthly payments:
	Enter amount of loan: 20000.00
	Enter interest rate: 6.0
	Enter monthly payment: 386.66
	Balance remaining after first payment: $19713.34
	Balancing remaining after second payment: $19425.25
	Balance remaining after third payment: $19135.71
Displaying each balance with two digits after the decimal point. Hint: Each 
month, the balance is decreased by the amount of the payment, but increased by 
the balance times the monthly interest rate. To find the monthly interest rate, 
convert the interest rate entered by the user to a percentage and divide it by 
12.
*/
#include<stdio.h>
//-----------------START OF MAIN()-----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float amt,iratey,iratem,mpay,balance;
	//amt-amount, iratey-interest per year, iratem-interest per month, mpay-monthly payment

	//Getting data from user
	printf("Enter amount of loan: ");
	scanf("%f",&amt);
	printf("Enter interest rate (yearly): ");
	scanf("%f",&iratey);
	iratem=iratey/12;
	printf("  That is equal to %.4f%% per month.\n",iratem);  //To print a % character type-in two % characters. 
		//OR we can write printf("%c",37);, where 37 is ASCII code for % character.
	printf("Enter monthly payment: ");
	scanf("%f",&mpay);
	
	//Displaying details 
	balance=amt+iratem*amt/100-mpay;
	printf("\nBalance remaining after first payment: $%.4f",balance);
	balance=balance+iratem*balance/100-mpay;
	printf("\nBalance remaining after second payment: $%.4f",balance);
	balance=balance+iratem*balance/100-mpay;
	printf("\nBalance remaining after third payment: $%.4f",balance);
	
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------END OF MAIN()-----------------------------------
/*
OUTPUT:
--Trial 1:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter amount of loan: 20000
Enter interest rate (yearly): 6
  That is equal to 0.5000% per month.
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.3398
Balance remaining after second payment: $19425.2461
Balance remaining after third payment: $19135.7129
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

--Trial 2:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter amount of loan: 15667
Enter interest rate (yearly): 9.8
  That is equal to 0.8167% per month.
Enter monthly payment: 415.25

Balance remaining after first payment: $15379.6973
Balance remaining after second payment: $15090.0479
Balance remaining after third payment: $14798.0332
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//-------------------------------------------------------------------
