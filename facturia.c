//Recursion program to calculate the factoria of a number
#include <stdio.h>
int main(void)
{
	int n; char ch;
	printf("Enter a number whose factoria you wish to know: ");
	while((scanf("%d", &n))!=1)
	{
		puts("Invalid integer: ");
		while(ch=getchar()!='\n')
			putchar(ch);//flushes the buffer
	}
	int factoria(int n_test)
	{
		if(n_test!=1)
		{
			//printf("now: %d ",n_test*factoria(n_test-1));
			return n_test*factoria(n_test-1);
		}
	}
	printf("The factoria of %d is: %d \n",n,factoria(n));
	return 0;
}