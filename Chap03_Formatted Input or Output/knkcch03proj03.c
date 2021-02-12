/*
--PROGRAM NAME: knkcch03proj03.c
--PROGRAM STATEMENT: Books are identified by an International Standard 
Book Numbers (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, 
arranged in four groups, such as 978-0-393-97950-3. (Older ISBNs use 10 digits). 
The first group (the GS1 prefix) is currently either 978 or 979. The group 
identifier specifies the language or country of origin (for example, 0 and 1 are 
used in English-Speaking countries). The publisher code identifies the publisher 
(393 is the code for W.W. Nortan). The item number is assigned by the publisher 
to identify a specific book (97950 is the code for this book). An ISBN ends with 
a check digit that's used to verify the accuracy of the preceding digits. Write 
a program that breaks down as ISBN entered by the user:
	Enter ISBN: 978-0-393-97950-3
	GS1 prefix: 978
	Group identifier: 0
	Publisher code: 393
	Item number: 97950
	Check digit: 3
Note: The number of digits in each group may vary; you can't assume that groups 
have the lengths shown in this example. Test your program with actual ISBN values 
(usually found on the back cover of a book and on the copyright page).
*/
#include<stdio.h>
//--------------------------START OF MAIN()-----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int gs1pref,groupid,pubcode,itemn,chkdig;
	
	//Getting User input
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&gs1pref,&groupid,&pubcode,&itemn,&chkdig);
	
	//Displaying groups of ISBN-13
	printf("GS1 prefix: %d",gs1pref);
	printf("\nGroup identifier: %d",groupid);
	printf("\nPublisher code: %d",pubcode);
	printf("\nItem number: %d",itemn);
	printf("\nCheck digit: %d",chkdig);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//--------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
--Trial 1:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter ISBN: 987-0-393-97950-3
GS1 prefix: 987
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
--Trial 2:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter ISBN: 978-1-4842-1371-1
GS1 prefix: 978
Group identifier: 1
Publisher code: 4842
Item number: 1371
Check digit: 1
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//----------------------------------------------------------------------------