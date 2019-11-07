#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int power(int x, int y);


int main(void)
{
	int base, exponent;

	printf("Enter base,exponent :");
	scanf_s("%d %d", &base, &exponent);

	
	
		printf("Power(%d,%d)= %d\n", base, exponent, power(base, exponent));
	
	
	system("pause");
	return 0;
}

int power(int x, int y)
{
	int i,ans;
	ans = 1;

	
	
		for (i = 1; i <= y; i++)
		{
			ans = ans * x;
		}

		return ans;
	
}