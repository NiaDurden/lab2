#include <stdio.h>
#include <math.h>

int diskr(float a, float b, float c)
{
	float d;
	d = b * b - 4 * a * c;
	if (d < 0)
		printf ("no roots");
	else
	{
		if (d == 0)
			printf ("x = %g ", - b / (2 * a));
		else
			printf ("x1 = %g, x2 = %g", (- b + sqrt(d)) / (2 * a), (- b - sqrt(d))/(2 * a));
	}
	return 0;
}

int main()
{
	float a, b, c;
		printf ("Enter a, b, c: ");
		scanf ("%f %f %f", &a, &b, &c);
		
		if (a == 0)
		{
			if (b == 0)
			{
				if (c == 0)
					printf ("x - whatever");
				else 
					printf ("no roots");
			}
			else 
				printf ("x = %g", - c / b);
		}
		else
		   diskr (a, b, c);

	return 0;
}					 	 						