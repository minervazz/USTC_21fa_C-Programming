#include<stdio.h>
#include<math.h>
int main()
{
	double x,x1,f,f1;
	int n=1;
	scanf ("%lf", &x) ;

	do
	{
		x1=x;
		f=2*pow(x1,3.0)-4.0*pow (x1,2.0)+3.0*x1-6;
		f1=6.0*pow (x1,2.0) -8.0*x1+3.0;
		x=x1-f/f1;
		printf("n=%d x1=%-12.7f x=%-12.7f\n",n++,x1,x) ;
	}	
	while (fabs (x-x1)>=1e-6) ;
	printf ("root=%-12.7f\n",x) ;
}


