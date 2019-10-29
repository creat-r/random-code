#include <stdio.h>

/*
 *Insertion sort inserts the correct number for a place
 */

void print_array(int*, int);
void print_bin(int);
int main()
{
	int i = 0, j = 0, temp = 0;
	int a[5] = {1, 9, 9, 5, 2};
	int size = sizeof(a)/sizeof(*a);
/*
 *size - 1:Iterate to last but one element so that comparison
 *	   can be made between array[last second] and array[last].
 *	   Find the correct number for place i
 */
	for(i = 0; i < size - 1; i++)   
	{
		/*
		 *Iterate to the last place and see if there is a smaller
		 *number then a[i], if so swap
		 */
		for(j = i; j < size; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] =temp;
			}
		}
	}

	print_array(a,size);

}

void print_array(int* a, int size)
{
	int i;
	for(i < 0; i < size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
