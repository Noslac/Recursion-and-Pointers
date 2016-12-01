//showing that arrays are simply a manipulation of pointers
#include <stdio.h>
#define SIZE 3
int main(void)
{
	int my_array[SIZE],i;
	printf("Enter all the elements in the array: \n");
	for(i=1; i<=4; i++)
	{
		printf("element %d: ", i);
		scanf("%d", &*(my_array+i));//scanf("%d", &my_array[i]) or even without the &* it still works
		//the method above will never for scalar variables (always require use of &)
	}

	printf("\nThe element in the fourth position is: %d", *(my_array+4));//the last arguement is equal to my_array[4]
	//this is because an array is simply a manipulation of the pointer. 

	return 0;
}