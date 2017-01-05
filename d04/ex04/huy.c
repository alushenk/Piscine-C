//
// Created by user on 10-Nov-16.
//

#include <unistd.h>
#include <stdio.h>



int fact(int n, int result)
{
	if (n == 0)
		return result;
	fact(n - 1, n * result);
}

int factorial(int n)
{
	return fact(n, 1);
}

int main(void)
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);

	printf("%d terms of Fibonacci series are :-\n",n);
	for (int i = 0; i < n; i++)
	{
		printf("factorial of %d == %ld\n", i, factorial(i));
	}
	return (0);
}
