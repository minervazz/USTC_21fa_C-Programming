#include <math.h>
#include <stdio.h> 
main()
{double a,b,c, disc, twoa, term1 , term2,x1,x2; 
printf("enter a,b.c: ");
scanf("%lf%lf%lf",&a,&b,&c);
if(a==0)
	if(b==0)
	printf("no answer due to input error\n");
	else
	printf("the single root is %f\n",-c/b);
else {disc=b*b-4*a* c;
	twoa=2*a;
	term1 =-b/twoa;
	term2 =sqrt(fabs(disc))/twoa;

 x1= term1 + term2;
 x2=c/(a*x1); 


if(disc<0)
	printf("complex roots\nreal part=%fimag part=%f\n",term1, term2);
else
	{if(fabs(x1)>fabs(x2))
		printf("real root\nroot1=%f root2=%f\n",x1,x2); 
	else printf("real root\nroot1=%f root2=%f\n",x2,x1); 
	 	}
	}
}

