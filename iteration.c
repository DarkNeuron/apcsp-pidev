#include <stdio.h>

int main()
{

	int x = 1;
	int div = 3;
	while (x < 100)
	{
		int num = (x % div);
		if (num == 0)
		{
			printf("num=%d\n", x);
		}
		x++;
	}




}
