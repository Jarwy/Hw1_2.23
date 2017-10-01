#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("Enter three intergers,I will display the Max and the min:");
	scanf_s("%d %d %d",&a, &b, &c);

	if (a > b )
	{
		if (a > c )
		{
			if (b > c )
			{
				printf("Max:%d,min:%d\n", a, c);
			}
			else
			{
				printf("Max:%d,min:%d\n", a, b);
			}
			
		}
		else
		{
			printf("Max:%d,min:%d\n", c, b);
		}
	}
	else
	{
		if (b > c )
		{
			if (a > c )
			{
				printf("Max:%d,min:%d\n", b, c);
			}
			else
			{
				printf("Max:%d,min:%d\n", b, a);
			}
		}
		else
		{
			printf("Max:%d,min:%d\n", c, a);
		}
	}

	system("pause");
	return 0;
}