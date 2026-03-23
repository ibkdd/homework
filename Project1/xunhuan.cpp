#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	printf("input an intergal,tap 114514 to exit\n");
	int a = 999;
	while (a == 999)

	{
		
		scanf("%d", &a);
		if (a == 114514)
		{
			break;
		}
		a >>= 1;
		printf("%d\n", a);
		int a = 999;
	}
	return 0;
}