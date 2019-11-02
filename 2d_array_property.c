#include <stdio.h>

int main()
{
		int array[2][3]={{10, 11, 12},{20,21,22}};
		int (*p)[3] = array; /*2d array is nothing but a constant pointer to an array*/


	printf( "array = %p\n"
		"array + 1 = %p\n"
		"array[0] = %p\n"
		"array[0] + 1 = %p\n"
		"array[0][0]  = %d\n" /*gives value of first element*/
		"array[0][0] + 1  = %d\n"/*gives value of first element + 1*/
		/*
		 * array ++
		 * array[0]++ causes error
		 */
		"&array  = %p\n"
		"&array + 1  = %p\n"
		"&array[0]  = %p\n"
		"&array[0] + 1  = %p\n"
		"array  = %p\n"
		"*array  = %p\n"
		"**array  = %d\n" /*gives value of first element*/
		"array[1]  = %p\n\n",
		/*array[1] == *(array + 1)*/
		array ,
		array + 1,
		array[0],
		array[0] + 1,
		array[0][0],
		array[0][0] + 1,
		&array,
		&array + 1,
		&array[0],
		&array[0] + 1,
		array,
		*array,
		**array,
		array[1]);


	printf( "p = %p\n"
		"p + 1 = %p\n"
		"p[0] = %p\n"
		"p[0] + 1 = %p\n"
		"p[0][0]  = %d\n" /*gives value of first element*/
		"p[0][0] + 1  = %d\n"/*gives value of first element + 1*/
		"--p = %p\n" 
		"++p = %p\n"
		"p[0]+1 %p\n" /*p++ fails because p[0] reduces it to a address/rvalue*/
		"&p  = %p\n"
		"&p + 1  = %p\n"
		"&p[0]  = %p\n"
		"&p[0] + 1  = %p\n"
		"p  = %p\n"
		"*p  = %p\n"
		"**p  = %d\n" /*gives value of first element*/
		"p[1]  = %p\n",
		/*p[1] == *(p + 1)*/
		p,
		p + 1,
		p[0],
		p[0] + 1,
		p[0][0],
		p[0][0] + 1,
		--p,/*loses original value of p if not done, since evaulation is done from right ti left*/
		++p,
		p[0]+1,
		&p,
		&p + 1,
		&p[0],
		&p[0] + 1,
		p,
		*p,
		**p,
		p[1]);
}
