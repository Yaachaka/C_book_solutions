/*
@@@@ PROGRAM NAME: knkcch07proj11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that takes a first name and last 
name entered by the user and displays the last name, a comma, and the first 
initial, followed by a period:
	Enter a first and Last name: Lloyd Fosdick
	Fosdick, L.
The user's input may contain extra spaces before the first name, between the 
first and last names, and after the last name.
*/
#include<stdio.h>
#include<ctype.h>  //toupper();
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char fn0,fn1,fn2,fn3,fn4,fn5,fn6,fn7,fn8,fn9, ln0,ln1,ln2,ln3,ln4,ln5,ln6,ln7,ln8,ln9,ch;
	
	printf("Enter a first and Last name: ");
	//First name
	while((fn0=getchar())==' ')
	;
		if((fn1=getchar())!=' ')
			if((fn2=getchar())!=' ')
				if((fn3=getchar())!=' ')
					if((fn4=getchar())!=' ')
						if((fn5=getchar())!=' ')
							if((fn6=getchar())!=' ')
								if((fn7=getchar())!=' ')
									if((fn8=getchar())!=' ')
										if((fn9=getchar())!=' ')
										;
	//Last name
	while((ln0=getchar())==' ' && ln0!='\n')
	;
		if((ln1=getchar())!=' ' && ln1!='\n')
			if((ln2=getchar())!=' ' && ln2!='\n')
				if((ln3=getchar())!=' ' && ln3!='\n')
					if((ln4=getchar())!=' ' && ln4!='\n')
						if((ln5=getchar())!=' ' && ln5!='\n')
							if((ln6=getchar())!=' ' && ln6!='\n')
								if((ln7=getchar())!=' ' && ln7!='\n')
									if((ln8=getchar())!=' ' && ln8!='\n')
										if((ln9=getchar())!=' ' && ln9!='\n')
										;
					
	//Displaying Full name.
	if(ln0!=' ' && ln0!='\n')
	{
		printf("%c",ln0);
		if(ln1!=' ' && ln1!='\n')
		{
			printf("%c",ln1);
			if(ln2!=' ' && ln2!='\n')
			{
				printf("%c",ln2);
				if(ln3!=' ' && ln3!='\n')
				{
					printf("%c",ln3);
					if(ln4!=' ' && ln4!='\n')
					{
						printf("%c",ln4);
						if(ln5!=' ' && ln5!='\n')
						{
							printf("%c",ln5);
							if(ln6!=' ' && ln6!='\n')
							{
								printf("%c",ln6);
								if(ln7!=' ' && ln7!='\n')
								{
									printf("%c",ln7);
									if(ln8!=' ' && ln8!='\n')
									{
										printf("%c",ln8);
										if(ln9!=' ' && ln9!='\n')
										{
											printf("%c",ln9);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf(", %c",toupper(fn0));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name: Lloyd Fosdick
Fosdick, L
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name:     Lloyd Fosdick
Fosdick, L
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name: Lloyd   Fosdick  hertz
Fosdick, L
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------