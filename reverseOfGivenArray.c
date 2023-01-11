//Write C program to find reverse of the given array.

#include <stdio.h>

int main() 
{   
	int i;
	int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    
	for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    
	printf("\n");

    for (i = 0; i < size / 2; i++) 
	{
        int temp = arr[i];
        
		arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("Reversed array: ");
    
	for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    
	printf("\n");

    return 0;
}

