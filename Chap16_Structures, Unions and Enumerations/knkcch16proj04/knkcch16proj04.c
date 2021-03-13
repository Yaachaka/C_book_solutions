/*
@@@@ PROGRAM NAME: knkcch16proj04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the inventory.c program of Section 16.3 by adding a price member to the
part structure. The insert function should ask the user for the price of a new item. The
search and print functions should display the price. Add a new command that allows
the user to change the price of a part.
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
  int price;
}inventory[MAX_PARTS];;
//-----------------------------------------------------------------------------
int num_parts = 0;   /* number of parts currently stored */
//-----------------------------------------------------------------------------
int find_part();
void insert();
void search();
void update();
void print();
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s (Date: %s, Time: %s)\n", __FILE__, __DATE__, __TIME__);
	
	char code;

	for(;;)
	{
		printf("Enter operation code (i - insert, s - search, u - update, p - print, q - exit): ");
		scanf(" %c", &code);
		while(getchar() != '\n')   /* skips to end of line */
		;
		switch(code)
		{
			case 'i': insert();
				break;
			case 's': search();
				break;
			case 'u': update();
				break;
			case 'p': print();
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
int find_part(int number)
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
void insert(void)
{
	int part_number;

	if(num_parts == MAX_PARTS)
	{
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);
	if(find_part(part_number) >= 0)
	{
		printf("Part already exists.\n");
		return;
	}

	inventory[num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);
	printf("Enter price of the part: ");
	scanf("%d", &inventory[num_parts].price);
	
	//Sorting by part number
	for(short i=0;i<num_parts;i++)
	{
		if(inventory[num_parts].number < inventory[i].number)
		{
			struct part temp = inventory[num_parts];
			inventory[num_parts] = inventory[i];
			inventory[i] = temp;
		}
	}
	
	num_parts++;
	
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(void)
{
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if(i >= 0)
	{
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
		printf("Price of the part: %d\n", inventory[i].price);
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
void update(void)
{
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if(i >= 0)
	{
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
		printf("Enter new price of the part: ");
		scanf("%d", &inventory[i].price);
	
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
void print(void)
{
	int i;

	printf("Part Number   Part Name                  Quantity on Hand    Price per part\n");
	printf("---------------------------------------------------------------------------\n");
	for (i = 0; i < num_parts; i++)
		printf("%7d       %-25s%11d%24d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand, inventory[i].price);
	printf("---------------------------------------------------------------------------\n");
	
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
File: knkcch16proj04.c (Date: Mar 13 2021, Time: 21:51:25)
Enter operation code (i - insert, s - search, u - update, p - print, q - exit): i
Enter part number: 3
Enter part name: wheels
Enter quantity on hand: 5
Enter price of the part: 54
Enter operation code (i - insert, s - search, u - update, p - print, q - exit): s
Enter part number: 3
Part name: wheels
Quantity on hand: 5
Price of the part: 54
Enter operation code (i - insert, s - search, u - update, p - print, q - exit): u
Enter part number: 3
Enter change in quantity on hand: 20
Enter new price of the part: 56
Enter operation code (i - insert, s - search, u - update, p - print, q - exit): p
Part Number   Part Name                  Quantity on Hand    Price per part
---------------------------------------------------------------------------
      3       wheels                            25                      56
---------------------------------------------------------------------------
Enter operation code (i - insert, s - search, u - update, p - print, q - exit): q

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