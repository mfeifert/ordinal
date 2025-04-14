#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if ((a % 100) >= 11 && (a % 100) <= 19)
		printf("%dth\n", a);
	else if (a % 10 == 1)
		printf("%dst\n", a);
	else if (a % 10 == 2)
		printf("%dnd\n", a);
	else if (a % 10 == 3)
		printf("%drd\n", a);
	else
		printf("%dth\n", a);

	return 0;
}
