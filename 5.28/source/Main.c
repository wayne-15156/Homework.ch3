#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char alpha;

	printf("�п�J�@�Ӧr��: ");
	scanf_s("%c", &alpha);

	while (alpha != -1)
	{
		if ((alpha <= 'Z') & (alpha >= 'A'))
			printf("�ഫ���G:%c\n", alpha + 32);
		if ((alpha <= 'z') & (alpha >= 'a'))
			printf("�ഫ���G:%c\n", alpha - 32);

		printf("�п�J�@�Ӧr��: ");
		scanf_s("%c", &alpha);
	}

	system("pause");
	return 0;
}