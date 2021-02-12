/*
@@@@ PROGRAM NAME: knkcch07proj15.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that computes the factorial of a 
positive integer:
	Enter a positive integer: 6
	Factorial of 6: 720
(a) Use a short variable to store the value of the factorial. What is the 
largest value of n for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using long long variable instead (if your compiler supports 
the long long type).
(e) Repeat part (a), using a float variable instead.
(f) Repeat part (a), using a double variable instead.
(g) Repeat part (a), using a long double variable instead.
In cases (e)-(g), the program will display a close approximation of the 
factorial, not necessarily the exact value.
*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short sh=1,sh2;
	int i=1,i2,num;
	long l=1,l2;
	long long ll=1,ll2;
	float f=1,f2;
	double d=1,d2;
	long double ld=1,ld2;
	_Bool fsh,fi,fl,fll,ff,fd,fld;
	fsh=fi=fl=fll=ff=fd=fld=1;

	printf("Enter a positive integer: ");
	scanf("%d",&num);

	for(int j=1;j<=num;j++)
		ld*=j;

	printf("Facorial of %d: %Lf",num,ld);

	printf("\nThe largest value of n for which the program correctly prints the factorial of n inside different variables is as follows: ");
	for(int j=1;j<2000;j++)
	{
		if(fsh)
		{
			sh2=sh;
			sh*=j;
			if(sh<sh2 || sh>SHRT_MAX)
			{
				fsh=0;
				printf("\nshort(size: %d bytes) \t\t: %d",sizeof(short),j-1);
				
			}
		}
		if(fi)
		{
			i2=i;
			i*=j;
			if(i<i2 || i>INT_MAX)
			{
				fi=0;
				printf("\nint(size: %d bytes) \t\t: %d",sizeof(int),j-1);
				
			}
		}
		if(fl)
		{
			l2=l;
			l*=j;
			if(l<l2 || l>LONG_MAX)
			{
				fl=0;
				printf("\nlong(size: %d bytes) \t\t: %d",sizeof(long),j-1);
				
			}
		}
		if(fll)
		{
			ll2=ll;
			ll*=j;
			if(ll<ll2 || ll>LLONG_MAX)
			{
				fll=0;
				printf("\nlong long(size: %d bytes) \t\t: %d",sizeof(long long),j-1);
				
			}
		}
		if(ff)
		{
			f2=f;
			f*=j;
			if(f<f2 || f>FLT_MAX)
			{
				ff=0;
				printf("\nfloat(size: %d bytes) \t\t: %d",sizeof(float),j-1);
				
			}
		}
		if(fd)
		{
			d2=d;
			d*=j;
			if(d<d2 || d>DBL_MAX)
			{
				fd=0;
				printf("\ndouble(size: %d bytes) \t\t: %d",sizeof(double),j-1);
				
			}
		}
		if(fld)
		{
			ld2=ld;
			ld*=j;
			if(ld<ld2 || ld>LDBL_MAX)
			{
				fld=0;
				printf("\nlong double(size: %d bytes) \t\t: %d",sizeof(long double),j-1);
				
			}
		}
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive integer: 2
Facorial of 2: 2.000000
The largest value of n for which the program correctly prints the factorial of n inside different variables is as follows:
short(size: 2 bytes)            : 7
int(size: 4 bytes)              : 13
long(size: 8 bytes)             : 20
long long(size: 8 bytes)                : 20
float(size: 4 bytes)            : 34
double(size: 8 bytes)           : 170
long double(size: 16 bytes)             : 1754
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive integer: 6
Facorial of 6: 720.000000
The largest value of n for which the program correctly prints the factorial of n inside different variables is as follows:
short(size: 2 bytes)            : 7
int(size: 4 bytes)              : 13
long(size: 8 bytes)             : 20
long long(size: 8 bytes)                : 20
float(size: 4 bytes)            : 34
double(size: 8 bytes)           : 170
long double(size: 16 bytes)             : 1753
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive integer: 20
Facorial of 20: 2432902008176640000.000000
The largest value of n for which the program correctly prints the factorial of n inside different variables is as follows:
short(size: 2 bytes)            : 7
int(size: 4 bytes)              : 13
long(size: 8 bytes)             : 20
long long(size: 8 bytes)                : 20
float(size: 4 bytes)            : 34
double(size: 8 bytes)           : 170
long double(size: 16 bytes)             : 1748
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive integer: 20
Facorial of 20: 2432902008176640000.000000
The largest value of n for which the program correctly prints the factorial of n inside different variables is as follows:
short(size: 2 bytes)            : 7
int(size: 4 bytes)              : 13
long(size: 8 bytes)             : 20
long long(size: 8 bytes)                : 20
float(size: 4 bytes)            : 34
double(size: 8 bytes)           : 170
long double(size: 16 bytes)             : 1748
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive integer: 5
Facorial of 5: 120.000000
The largest value of n for which the program correctly prints the factorial of n inside different variables is as follows:
short(size: 2 bytes)            : 7
int(size: 4 bytes)              : 13
long(size: 8 bytes)             : 20
long long(size: 8 bytes)                : 20
float(size: 4 bytes)            : 34
double(size: 8 bytes)           : 170
long double(size: 16 bytes)             : 1753
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------