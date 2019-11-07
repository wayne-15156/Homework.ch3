#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char alpha;

	printf("請輸入一個字母: ");
	scanf_s("%c", &alpha);

	while (alpha != -1)
	{
		if ((alpha <= 'Z') & (alpha >= 'A'))
			printf("轉換結果:%c\n", alpha + 32);
		if ((alpha <= 'z') & (alpha >= 'a'))
			printf("轉換結果:%c\n", alpha - 32);

		printf("請輸入一個字母: ");
		scanf_s("%c", &alpha);
	}

	system("pause");
	return 0;
}