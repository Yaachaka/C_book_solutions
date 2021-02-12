/*
@@@@ PROGRAM NAME: knkcch07proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the square2.c program of Section 6.3 so that 
it pauses after every 24 squares and displays the following message:
	Press Enter to continue...
After displaying the message, the program should use getchar to read a character. 
getchar won't allow the program to continue until the user presses the Enter key.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i, n;
	char c;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);
		if(i%24==0)
		{
			printf("Press Enter to continue...");
			c=getchar();
		}
	 }
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program prints a table of squares.
Enter number of entries in table: 56
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100
        11       121
        12       144
        13       169
        14       196
        15       225
        16       256
        17       289
        18       324
        19       361
        20       400
        21       441
        22       484
        23       529                                                                              24       576
Press Enter to continue...        25       625
        26       676
        27       729
        28       784
        29       841
        30       900
        31       961
        32      1024
        33      1089
        34      1156
        35      1225
        36      1296
        37      1369
        38      1444
        39      1521
        40      1600
        41      1681
        42      1764
        43      1849
        44      1936
        45      2025
        46      2116                                                                              47      2209
        48      2304
Press Enter to continue...
        49      2401
        50      2500
        51      2601
        52      2704
        53      2809
        54      2916
        55      3025
        56      3136
        
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------
/*
@@@@ OBSERVATION:
@@@@ The first ask of program to press Enter did not allow user to press Enter but 
skipped and continued printing next values since there was an enter character in the 
input stream-the one after entering the number of entries.
@@@@ The solution would be to clear the stream before the point where program asks us 
to press enter.
*/
//---------------------------------------------------------------------------