#include <stdio.h>
#include <stdlib.h>


int lcm(int x,int y);
int a, b;

int main(void)
{
	printf("叫块ㄢ俱计:");
	scanf_s("%d %d", &a, &b);
	printf("ㄢ计程そ计:%d\n", lcm(a, b));

	system("pause");
	return 0;
}



int lcm(int x, int y)
{
	int i;

		for (i = x; i <= x * y; i = i + x)
		{
			if ((i % x == 0) & (i % y == 0))
			{
					return i;
					break;
			}
		}

}