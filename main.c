#include <stdio.h>
int square(int number);
int main()
{
	int N;
	printf("Enter a number: ");
	scanf("%d", &N);

	int N_square = square(N);
	printf("The square of %d is %d.\n", N, N_square);
	return 0;
}

int square(int number)
{
	return number * number;
}
