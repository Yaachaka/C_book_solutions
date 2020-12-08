/*
--PROGRAM NAME: knkcch03e03.c
--PROGRAM STATEMENT: For each of the following pairs of scanf format strings, 
indicate whether or not the two strigs are equivalet. If 
they're not, show how they can be distiguished.
(a) "%d"        versus  " %d"
(b) "%d-%d-%d"  versus  "%d -%d -%d"
(c) "%f"        versus  "%f "
(d) "%f,%f"     versus  "%f, %f"
*/
#include<stdio.h>

int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int d1,d2,d3;
	float f1,f2;
	
	//Testing (a)
	printf("Enter an integer for (a) as in case 1:\n");
	scanf("%d",&d1);
	printf("Enter an integer for (a) as in case 2:\n");
	scanf(" %d",&d2);
	printf("(a) Integers: %d\t%d\n",d1,d2);
	
	//Testing (b)
	printf("Enter integers for (b) as in case 1:\n");
	scanf("%d-%d-%d",&d1,&d2,&d3);
	printf("(b) Integers (case 1): %d\t%d\t%d\n",d1,d2,d3);
	printf("Enter integers for (b) as in case 2:\n");
	scanf(" %d -%d -%d",&d1,&d2,&d3);
	printf("(b) Integers (case 2): %d\t%d\t%d\n",d1,d2,d3);
	
	//Testing (c)
	printf("Enter a float for (c) as in case 1:\n");
	scanf("%f",&f1);
	printf("Enter a float for (c) as in case 2:\n");
	scanf(" %f ",&f2);
	printf("(c) Floats: %.2f\t%.2f\n",f1,f2);
	
	//Testing (d)
	printf("Enter floats for (d) as in case 1:\n");
	scanf("%f,%f",&f1,&f2);
	printf("(d) Floats (case 1): %.2f\t%.2f\t\n",f1,f2);
	printf("Enter floats for (b) as in case 2:\n");
	scanf(" %f, %f",&f1,&f2);
	printf("(d) Floats (case 2): %.2f\t%.2f\t\n",f1,f2);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an integer for (a) as in case 1:
34
Enter an integer for (a) as in case 2:
 56
(a) Integers: 34        56
Enter integers for (b) as in case 1:
34-56-78
(b) Integers (case 1): 34       56      78
Enter integers for (b) as in case 2:
34 -56 -78
(b) Integers (case 2): 34       56      78
Enter a float for (c) as in case 1:
23.34
Enter a float for (c) as in case 2:
23.45
56.67,34.54
(c) Floats: 23.34       23.45
Enter floats for (d) as in case 1:
(d) Floats (case 1): 56.67      34.54
Enter floats for (b) as in case 2:
56.67, 34.54
(d) Floats (case 2): 56.67      34.54

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------