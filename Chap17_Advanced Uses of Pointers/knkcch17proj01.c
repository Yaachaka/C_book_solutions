/*
@@@@ PROGRAM NAME: knkcch17proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the inventory.c program of Section 16.3 
so that the inventory array is allocated dynamically and later reallocated when 
it fills up. Use malloc initially to allocate enough space for an array of 10 
part structures. When the array has no more room for new parts, use realloc to 
double its size. Repeat the doubling step each time the array becomes full.
*/
#include <stdio.h>
#include <stdlib.h>  //NULL, exit(), EXIT_FAILURE, free()
#include <ctype.h>
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

	printf("Part Number   Part Name                  Quantity on Hand\n");
	printf("---------------------------------------------------------\n");
	for (i = 0; i < num_parts; i++)
		printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
}
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
File: knkcch17proj01.c, C Version: 199901, Date: Mar 17 2021, Time: 17:44:48

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 3
Enter part name: engine
Enter quantity on hand: 34

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 4
Enter part name: mirror
Enter quantity on hand: 56

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 9
Enter part name: oil
Enter quantity on hand: 56

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): i
Enter part number: 2
Enter part name: wheel
Enter quantity on hand: 76

Enter operation code (i-insert, s-search, u-update, p-print, q-exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      3       engine                            34
      4       mirror                            56
      9       oil                               56
      2       wheel                             76

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