#include <stdio.h>
#include <math.h>

int main()
{
	// Variables
	int k = 1;
	double t0, t1,y0, y1, f, inc;
	printf("Enter initial value t0: ");
	scanf("%lf", &t0);
	printf("Enter initial result y0: ");
	scanf("%lf", &y0);
	int i;
	printf("How many itierations? ");
	scanf("%d", &i);
	printf("Time incremented by:  ");
	scanf("%lf", &inc);
	printf("f(t,y) =  f = -2 * y0 + 2 - exp(-4*t0)\n");
	printf("---------------------------------------------------------------\n");
	printf("     k	    |	    t	        |	  y	    |     f(t,y)	\n");
	printf("---------------------------------------------------------------\n");
	for (k = 0; k < i + 1; k++)
	{	
	    // function 
	    f = -2 * y0 + 2 - exp(-4.0*t0);
	    y1 = y0 + f * inc;
	    printf(" %d	    |	%f	|   %f	    |	%f    \n", k, t0, y0, f);
	    t1 = t0 + inc;
	    t0 = t1;
	    y0 = y1;
	}
	return 0 ;
}

