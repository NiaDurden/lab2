#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
		printf ("Enter a, b, c: ");
		scanf ("%d %d %d", &a, &b, &c);

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
				printf ("x = %d", - c / b);
		}
		else
			diskr (a, b, c);

	return 0;
}

