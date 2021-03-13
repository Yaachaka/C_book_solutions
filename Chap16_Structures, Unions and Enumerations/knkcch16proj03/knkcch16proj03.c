/*
@@@@ PROGRAM NAME: knkcch16proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the inventory.c program of Section 16.3 by making inventory and
num_parts local to the main function.
*/
#include <stdio.h>
#include "readline.h"
//-----------------------------------------------------------------------------
#define NAME_LEN 25
#define MAX_PARTS 100
//-----------------------------------------------------------------------------
struct part
{
  int number;
  char name[NAME_LEN+1];
  int on_hand;
};
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int find_part(const struct part inventory[], int number, const int num_parts);
void insert(struct part inventory[], int *num_parts);
void search(const struct part inventory[], int *num_parts);
void update(struct part inventory[], int *num_parts);
void print(const struct part inventory[], int *num_parts);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s (Date: %s, Time: %s)\n", __FILE__, __DATE__, __TIME__);
	
	struct part inventory[MAX_PARTS];
	int num_parts = 0;   /* number of parts currently stored */
	char code;

	for(;;)
	{
		printf("Enter operation code (i - insert, s - search, u - update, p - print, q - exit): ");
		scanf(" %c", &code);
		while(getchar() != '\n')   /* skips to end of line */
		;
		switch(code)
		{
			case 'i': insert(inventory, &num_parts);
				break;
			case 's': search(inventory, &num_parts);
				break;
			case 'u': update(inventory, &num_parts);
				break;
			case 'p': print(inventory, &num_parts);
				break;
			case 'q': printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
				return 0;
			default:  printf("Illegal code\n");
			printf("\n");
  		}
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
/**********************************************************
 * find_part: Looks up a part number in the inventory     *
 *            array. Returns the array index if the part  *
 *            number is found; otherwise, returns -1.     *
 **********************************************************/
int find_part(const struct part inventory[], int number, const int num_parts)
{
	int i;

	for (i = 0; i < num_parts; i++)
		if (inventory[i].number == number)
	return i;
	return -1;
}

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the        *
 *         database. Prints an error message and returns  *
 *         prematurely if the part already exists or the  *
 *         database is full.                              *
 **********************************************************/
void insert(struct part inventory[], int *num_parts)
{
	int part_number;

	if(*num_parts == MAX_PARTS)
	{
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);
	if(find_part(inventory, part_number, *num_parts) >= 0)
	{
		printf("Part already exists.\n");
		return;
	}

	inventory[*num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[*num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[*num_parts].on_hand);
	
	//Sorting by part number
	for(short i=0;i<*num_parts;i++)
	{
		if(inventory[*num_parts].number < inventory[i].number)
		{
			struct part temp = inventory[*num_parts];
			inventory[*num_parts] = inventory[i];
			inventory[i] = temp;
		}
	}
	
	(*num_parts)++;
	
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(const struct part inventory[], int *num_parts)
{
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(inventory, number, *num_parts);
	if(i >= 0)
	{
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}
	else
		printf("Part not found.\n");
}

/**********************************************************
 * update: Prompts the user to enter a part number.       *
 *         Prints an error message if the part doesn't    *
 *         exist; otherwise, prompts the user to enter    *
 *         change in quantity on hand and updates the     *
 *         database.                                      *
 **********************************************************/
void update(struct part inventory[], int *num_parts)
{
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(inventory, number, *num_parts);
	if(i >= 0)
	{
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	}
	else
		printf("Part not found.\n");
}

/**********************************************************
 * print: Prints a listing of all parts in the database,  *
 *        showing the part number, part name, and         *
 *        quantity on hand. Parts are printed in the      *
 *        order in which they were entered into the       *
 *        database.                                       *
 **********************************************************/
void print(const struct part inventory[], int *num_parts)
{
	int i;

	printf("Part Number   Part Name                  Quantity on Hand\n");
	printf("---------------------------------------------------------\n");
	for (i = 0; i < *num_parts; i++)
		printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
	printf("---------------------------------------------------------\n");
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj03.c (Date: Mar 13 2021, Time: 21:15:48)
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): i
Enter part number: 3
Enter part name: Wheel
Enter quantity on hand: 5
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): i
Enter part number: 1
Enter part name: engine
Enter quantity on hand: 4
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      1       engine                             4
      3       Wheel                              5
---------------------------------------------------------
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): u
Enter part number: 2
Part not found.
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): u
Enter part number: 3
Enter change in quantity on hand: 495
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      1       engine                             4
      3       Wheel                            500
---------------------------------------------------------
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): s
Enter part number: 5
Part not found.
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): s
Enter part number: 1
Part name: engine
Quantity on hand: 4
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): i
Enter part number: 4
Enter part name: headlight
Enter quantity on hand: 200
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): i
Enter part number: 2
Enter part name: wipers
Enter quantity on hand: 1000
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      1       engine                             4
      2       wipers                          1000
      3       Wheel                            500
      4       headlight                        200
---------------------------------------------------------
Enter operation code (i - insert, s - search, u - update, p - print, q -
exit): q

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------