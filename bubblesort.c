#include <stdio.h>

int main()
{
	int list[] = [100, 99, 21, 37, 42, 11];
	int listLength = sizeof(list)/sizeof(list[0]);

	for (int i = 0; i < listLength; i++)
	{
		for (int j = 0; j < listLength; j++)
		{
			if (list[i] > list[i + 1])
			{
				int temp = list[i];
				list[i] = list[i + 1];
				list[i+1] = list[i];
			}
		}
	}
}
