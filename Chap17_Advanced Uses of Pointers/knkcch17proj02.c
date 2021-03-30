/*
@@@@ PROGRAM NAME: knkcch17proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the inventory.c program of Section 16.3 
so that the p (print) command calls qsort to sort the inventory array before it 
prints the parts.
*/
#include <stdio.h>
#include <stdlib.h>  //NULL, exit(), EXIT_FAILURE, free(), qsort()
#include <ctype.h>  //isspace()
//-----------------------------------------------------------------------------
#define NAME_LEN 25
//-----------------------------------------------------------------------------
struct part
{
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} *inventory;
//-----------------------------------------------------------------------------
int num_parts = 0;   /* number of parts currently stored */
int max_parts = 3; //Initially 10 maximum locations
//-----------------------------------------------------------------------------
int readline(char str[], int n);
int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
int compare_parts(const void *p, const void *q);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);
	
	char code;
	if(!(inventory = malloc(max_parts * sizeof(struct part))))
	{
		printf("Eror: malloc failed.");
		exit(EXIT_FAILURE);
	}

	for (;;) 
	{
		printf("Enter operation code (i-insert, s-search, u-update, p-print, q-exit): ");
		scanf(" %c", &code);
		while (getchar() != '\n')   /* skips to end of line */
			;
		switch (code)
		{
			case 'i': insert();
					break;
			case 's': search();
					break;
			case 'u': update();
					break;
			case 'p': print();
					break;
			case 'q': 
				free(inventory);
				printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
				return 0;
			default:  printf("Illegal code\n");
		}
		printf("\n");
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    ;
  while (ch != '\n' && ch != EOF) {
    if (i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}
//---------------------------------------------------------------------------
int compare_parts(const void *p, const void *q)
{
	return ((struct part *)p)->number - ((struct part *)q)->number;
}
//---------------------------------------------------------------------------
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

	if (num_parts == max_parts)
		if(!(inventory = realloc(inventory, sizeof(struct part) * (max_parts *= 2))))
		{
			printf("Error: realloc failure.");
			exit(EXIT_FAILURE);
		}
	
	printf("Enter part number: ");
	scanf("%d", &part_number);
	if (find_part(part_number) >= 0)
	{
		printf("Part already exists.\n");
		return;
	}

	inventory[num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);
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
	if (i >= 0)
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
void update(void)
{
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0)
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
void print(void)
{
	int i;

	qsort(inventory, num_parts, sizeof(struct part), compare_parts);
	printf("Part Number   Part Name                  Quantity on Hand\n");
	printf("---------------------------------------------------------\n");
	for (i = 0; i < num_parts; i++)
		printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
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
File: knkcch17proj02.c, C Version: 199901, Date: Mar 17 2021, Time: 19:35:15

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 4
Enter part name: engine
Enter quantity on hand:
343

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 2
Enter part name: lights
Enter quantity on hand: 675

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 6
Enter part name: wipers
Enter quantity on hand: 3223

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 1
Enter part name: windshield
Enter quantity on hand: 456

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      1       windshield                       456
      2       lights                           675
      4       engine                           343
      6       wipers                          3223

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): q

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