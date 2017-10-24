#include <stdio.h>
#include <stdlib.h>

long int recursive_factorial(int p);

int main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("\n\t求排列組合C(m,n)\n");
	printf("\tm=");
	scanf_s("%d", &m);
	printf("\tn=");
	scanf_s("%d", &n);

	a = recursive_factorial(m);
	b = recursive_factorial(n);
	c = recursive_factorial(m - n);

	ans = a / (b*c);
	printf("\n\tC(%d,%d)=%d\n\n", m, n, ans);

	system("pause");
}


long int recursive_factorial(int p)
{
	if (p > 1)
	{
		long int result = p*recursive_factorial(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}