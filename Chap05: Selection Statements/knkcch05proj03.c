/*
--PROGRAM NAME: knkcch05proj03.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Modify the broker.c program of Section 5.2 by making both 
of the following changes:
(a) Ask the user to enter the number of shares and the price per share, instead 
of the value of the trade.
(b) Add statement that compute the commission charged by a rival broker ($33 
plus 3¢ per share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 
shares or more). Display the rival's commission as well as the commission 
charged by the original broker.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float commission, value, price_per_share;
	int no_shares;
	
	//User input
	printf("Enter the number of shares: ");
	scanf("%d", &no_shares);
	printf("Enter price per share $: ");
	scanf("%f", &price_per_share);
	
	value=no_shares*price_per_share;
	printf("The value is $%.2f",value);
	
	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("\n\nCommission of original broker: $%.2f", commission);
	
	//Calculations for rival broker.
	if(no_shares<2000)
		commission=33.0f+0.03f*no_shares;
	else
		commission=33.0f+0.02f*no_shares;
	
	if (commission < 39.00f)
		commission = 39.00f;

	printf("\nCommission of rival broker: $%.2f", commission);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the number of shares: 500
Enter price per share $: 7
The value is $3500.00

Commission of original broker: $79.10
Commission of rival broker: $48.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the number of shares: 2500
Enter price per share $: 23
The value is $57500.00

Commission of original broker: $218.25
Commission of rival broker: $83.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the number of shares: 2500
Enter price per share $: 4
The value is $10000.00

Commission of original broker: $110.00
Commission of rival broker: $83.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------