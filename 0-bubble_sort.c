#include <stdio.h>
#include <stdlib.h>
#include "sort.h"                                 /**
 * bubble_sort - function that sort array using
 * by compairing current element with the next     * array: points to the array to be sorted
 * size: points to the size of the array
 */
void bubble_sort(int *array, size_t size)
{
        size_t i,j;
	int temp;

        if (size <= 0)
        {
                return;
        }
        for (i = 0; i < size - 1; i++)
        {
                for (j = 0; j < size - i - 1; j++)
                {
			if (array[j] > array[j + 1])
                        {
                                temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		print_array(array, size);
		}
	}
}
