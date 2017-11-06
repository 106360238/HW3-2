#include<stdio.h>
#include <stdlib.h>

void hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("�`�@���h�ֶ�L�n�h?\n");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);
	system("pause");
	return 0;
}

void hanoi(int i, int begin, int mid, int dest)
{
	if (i == 1) /* ���j�פ���� */
		printf("%d-->%d\n",begin, dest);
	else
	{
		hanoi(i - 1, begin, dest, mid);
		printf("%d-->%d\n",begin, dest);
		hanoi(i - 1, mid, begin, dest);
	}
}