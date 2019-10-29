#include <stdio.h>


/*
 *Bubble sort always pushes the biggest number to the last
 *So the greatest number "bubbles up"
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
 *	   can be made between array[last second] and array[last]
 */
	for(i = 0; i < size - 1; i++)   
	{
		/*
		 *Iterate to size - 1 -i because element beyond this
		 *are already sorted
		 */
		for(j = 0; j < size - 1 - i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] =temp;
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


