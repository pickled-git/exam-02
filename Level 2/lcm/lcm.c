#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

/*int main()
{
    unsigned int a = 15;
    unsigned int b = 20;
    printf("LCM of %u and %u is %u\n", a, b, lcm(a, b));  // 60

    a = 0;
    b = 5;
    printf("LCM of %u and %u is %u\n", a, b, lcm(a, b));  // 0

    a = 21;
    b = 6;
    printf("LCM of %u and %u is %u\n", a, b, lcm(a, b));  // 42

    return 0;
}*/