#include <stdio.h>
#include <stdlib.h>

long int factorial(int p);

int main(void)
{
	int m, n;
	long int ans;
	long int a,b,c;

	printf("\n\t求排列組合C(m,n)\n");
	printf("\tm=");
	scanf_s("%d", &m);
	printf("\tn=");
	scanf_s("%d", &n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m-n);
	
	ans = a / (b*c);
	printf("\n\tC(%d,%d)=%d\n\n", m, n, ans);

	system("pause");
}


long int factorial(int p)
{
	int count;
	long int result = 1;
	for (count = 1; count <= p; count++)
	{
		result = result*count;
	}
	return result;
}