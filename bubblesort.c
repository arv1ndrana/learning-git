#include <stdio.h>

int main()
{
	int list[] = {100, 99, 21, 37, 42, 11};
	int listLength = sizeof(list)/sizeof(list[0]);

	for (int i = 0; i < listLength; i++)
	{
		for (int j = 0; j < listLength - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < listLength; i++)
	{
		printf("%d\t", list[i]);
	}
	printf("\n");
}
