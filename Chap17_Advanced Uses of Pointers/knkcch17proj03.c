/*
@@@@ PROGRAM NAME: knkcch17proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the inventory2.c program of Section 17.5 
by adding an e (erase) command that allows the user to remove a part from the 
database.
*/
#include <stdio.h>
#include <stdlib.h>  //NULL, malloc(), free()
#include <ctype.h>  //isspace()
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#define NAME_LEN 25
//-----------------------------------------------------------------------------
struct part
{
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  struct part *next;
};
//-----------------------------------------------------------------------------
struct part *inventory = NULL;   /* points to first part */
//-----------------------------------------------------------------------------
struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void erase(void);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);
	
	char code;
	
	for (;;) 
	{
		printf("Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): ");
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
      case 'e': erase();
        break;
			case 'q': 
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
//---------------------------------------------------------------------------
/**********************************************************
 * find_part: Looks up a part number in the inventory     *
 *            list. Returns a pointer to the node         *
 *            containing the part number; if the part     *
 *            number is not found, returns NULL.          *
 **********************************************************/
struct part *find_part(int number)
{
  struct part *p;

  for (p = inventory;
       p != NULL && number > p->number;
       p = p->next)
    ;
  if (p != NULL && number == p->number)
    return p;
  return NULL;
}

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the        *
 *         inventory list; the list remains sorted by     *
 *         part number. Prints an error message and       *
 *         returns prematurely if the part already exists *
 *         or space could not be allocated for the part.  *
 **********************************************************/
void insert(void)
{
  struct part *cur, *prev, *new_node;

  new_node = malloc(sizeof(struct part));
  if (new_node == NULL)
  {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &new_node->number);

  for (cur = inventory, prev = NULL;
       cur != NULL && new_node->number > cur->number;
       prev = cur, cur = cur->next)
    ;
  if (cur != NULL && new_node->number == cur->number)
  {
    printf("Part already exists.\n");
    free(new_node);
    return;
  }

  printf("Enter part name: ");
  read_line(new_node->name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &new_node->on_hand);

  new_node->next = cur;
  if (prev == NULL)
    inventory = new_node;
  else
    prev->next = new_node;
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(void)
{
  int number;
  struct part *p;

  printf("Enter part number: ");
  scanf("%d", &number);
  p = find_part(number);
  if (p != NULL) 
  {
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
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
  int number, change;
  struct part *p;

  printf("Enter part number: ");
  scanf("%d", &number);
  p = find_part(number);
  if (p != NULL)
  {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    p->on_hand += change;
  } 
  else
    printf("Part not found.\n");
}

/**********************************************************
 * print: Prints a listing of all parts in the database,  *
 *        showing the part number, part name, and         *
 *        quantity on hand. Part numbers will appear in   *
 *        ascending order.                                *
 **********************************************************/
void print(void)
{
  struct part *p;

  printf("Part Number   Part Name                  Quantity on Hand\n");
  printf("---------------------------------------------------------\n");
  for (p = inventory; p != NULL; p = p->next)
    printf("%7d       %-25s%11d\n", p->number, p->name,p->on_hand);
}
//-----------------------------------------------------------------------------
void erase(void)
{
  
  int number;
  struct part **p = &inventory, *temp;

  printf("Enter part number: ");
  scanf("%d", &number);
  
  temp = find_part(number);
  if (p != NULL)
  while(*p)
  {
    
    if(*p == temp)
    {
      *p = (*p)->next;
      free(temp);
    }
    p = &(*p)->next;
  }
  else
    printf("Part not found.\n");
    
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch17proj03.c, C Version: 199901, Date: Mar 17 2021, Time: 21:43:23

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): i
Enter part number: 4
Enter part name: hell
Enter quantity on hand: 45

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): i
Enter part number: 7
Enter part name: engine
Enter quantity on hand: 76

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): i
Enter part number: 8
Enter part name: joke
Enter quantity on hand: 897

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      4       hell                              45
      7       engine                            76
      8       joke                             897

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): e
Enter part number: 7

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): p
Part Number   Part Name                  Quantity on Hand
---------------------------------------------------------
      4       hell                              45
      8       joke                             897

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): s
Enter part number: 7
Part not found.

Enter operation code (i-insert, s-search, u-update, p-print, e-erase, q-exit): q

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