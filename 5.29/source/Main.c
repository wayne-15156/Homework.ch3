#include <stdio.h>
#include <stdlib.h>


int lcm(int x,int y);
int a, b;

int main(void)
{
	printf("�п�J��Ӿ��:");
	scanf_s("%d %d", &a, &b);
	printf("��ƪ��̤p�����Ƭ�:%d\n", lcm(a, b));

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