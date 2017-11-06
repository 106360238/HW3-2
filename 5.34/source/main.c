#include<stdio.h>
#include<stdlib.h>

int i, m, n, o;
int integerPower(m, n);
main()
{
	printf("¿é¤Jm:");
	scanf_s("%d",&m);
	printf("¿é¤Jn:");
	scanf_s("%d",&n);
	o = integerPower(m,n);
	printf("%d",o);
	system("pause");
	return 0;
}
int integerPower(m, n)
{
	if (n ==1)
	{
		return m;
	}
	else
	{
		return (m*integerPower(m, n - 1));
	}
}