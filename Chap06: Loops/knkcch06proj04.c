/*
@@@@ PROGRAM NAME: knkcch06proj04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Add a loop to the broker.c program of Section 5.2 
so that the user can enter more than one trade and the program will calculate 
the commission on each. The program should terminate when the user enters 0 as 
the trade value:
	Enter value of trade: 30000
	Commission: $166.00
	
	Enter value of trade: 20000
	Commission: $144.00
	
	Enter value of trade: 0
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float commission, value;

	for(;;)
	{
		printf("Enter value of trade: ");
		scanf("%f", &value);
		if(value>0)
		{
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
		
			printf("Commission: $%.2f\n\n", commission);
		}
		else break;
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter value of trade: 4000
Commission: $82.40

Enter value of trade: 350
Commission: $39.00

Enter value of trade: 20000
Commission: $144.00

Enter value of trade: 0

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------