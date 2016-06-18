#include <stdio.h>
#include <math.h>

int diskr(int a, int b, int c)
{
        int d;
        d = b * b - 4 * a * c;
        if (d < 0)
                printf ("no roots");
        else
        {
                if (d == 0)
                        printf ("x = %d ", - b / (2 * a));
                else
                        printf ("x1 = %d, x2 = %d", (- b + sqrt(d)) / (2 * a), (- b - sqrt(d))/(2 * a));
	}
        return 0;
}

