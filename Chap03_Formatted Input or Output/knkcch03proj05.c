/*
--PROGRAM NAME: knkcch03proj05.c
--PROGRAM STATEMENT: Write a program that asks user to enter the 
numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 
arrangement, followed by the sums of the rows, columns and diagonals:
	Enter the numbers from 1 to 16 in any order:
	16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
	16   3   2  13
	 5  10  11   8
	 9   6   7  12
	 4  15  14   1
	Row sums: 34 34 34 34
	Colummn sums: 34 34 34 34
	Diagonal sums: 34 34
If the row, column, and diagonal sums are all the same (as they are in this 
example), the numbers are said to form a magic square. The magic square shown 
here appears in 1514 engraving by artist and Mathematician Abbrecht Dürer. 
(Note that the middle numbers in the last row give the date of the engraving.))
*/
#include<stdio.h>
//--------------------------START OF MAIN()-----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
	int r1,r2,r3,r4,c1,c2,c3,c4,d1,d2;
	
	//Getting user input
	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
	&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);
	
	//Displaying 4x4 matrix
	printf("\n%5d%5d%5d%5d",n1,n2,n3,n4);
	printf("\n%5d%5d%5d%5d",n5,n6,n7,n8);
	printf("\n%5d%5d%5d%5d",n9,n10,n11,n12);
	printf("\n%5d%5d%5d%5d",n13,n14,n15,n16);
	
	//Calculating sums
	//Calculating rows' sums
	r1=n1+n2+n3+n4;
	r2=n5+n6+n7+n8;
	r3=n9+n10+n11+n12;
	r4=n13+n14+n15+n16;
	//Calculating columns' sums
	c1=n1+n5+n9+n13;
	c2=n2+n6+n10+n14;
	c3=n3+n7+n11+n15;
	c4=n4+n8+n12+n16;
	//Calculating diagonals' sums
	d1=n1+n6+n11+n16;
	d2=n4+n7+n10+n13;
	
	//Displaying Sums
	printf("\nRow sums: %5d%5d%5d%5d",r1,r2,r3,r4);
	printf("\nColummn sums: %5d%5d%5d%5d",c1,c2,c3,c4);
	printf("\nDiagonal sums: %5d%5d",d1,d2);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//--------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the numbers from 1 to 16 in any order:
1 5 7 2 8 3 4 13 15 16 6 9 10 12 11 14

    1    5    7    2
    8    3    4   13
   15   16    6    9
   10   12   11   14
Row sums:    15   28   46   47
Colummn sums:    34   36   28   38
Diagonal sums:    24   32
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//----------------------------------------------------------------------------