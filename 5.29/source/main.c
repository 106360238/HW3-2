#include <stdio.h> 
#include <stdlib.h> 

int main(void) {
	int m, n, s, r;

	printf("¿é¤J¨â¼Æ¡G");
	scanf_s("%d %d", &m, &n);
	s = m * n;

	while (n != 0) 
	{
		r = m % n;
		m = n;
		n = r;
	}

	printf("LCM¡G%d\n", s / m);
	system("pause");
	return 0;
}