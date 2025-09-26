/* probleam description:
 * A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,
 * a2 + b2 = c2
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main(void)
{
    for (int a = 0; a < 1000; a++)
        for (int b = 0; b < 1000; b++)
            for (int c = 0; c < 1000; c++)
            {
                if (!(a < b) || !(b < c))
                    continue;

                if (((a*a + b*b) == (c*c)) && ((a + b + c) == 1000))
                {
                    printf("found pythagorean triplet: a=%d; b=%d; c=%d\n",
                        a, b, c);
        
                    printf("product is %d\n", a*b*c);
                }
            }
}
