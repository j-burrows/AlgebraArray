/*
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Filename:	algebra_array.h
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Purpose:	Provide functions that do basic algebra to arrays.
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Author:		Jonathan Burrows
 *	Date:		November 30th 2012
 === === === === === === === === === === === === === === === === === === === === === === ===
 */
#ifndef ALGEBRA_ARRAY
#define ALGEBRA_ARRAY 1

#include <string.h>

/*
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Function:	sum_array
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Purpose:	Adds and returns the sum of all elements in an array.
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	@param:		array,			The array whos elements will be added together.
 *				array_len,		The size of the array whos elements are being added.
 *	@return:	sum,			The sum of all elements in the array.
 === === === === === === === === === === === === === === === === === === === === === === ===
 */
extern int sum_array(int* array, size_t array_len);

/*
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Function:	product_array
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Purpose:	Multiplies all the elements in an array with eachother and returns the
 *				product.
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	@param:		array,			The array whos elements will be multiplied together.
 *				array_len,		The size of the array whos elements being multiplied.
 *	@return:	product,		The product of all elements in the array.
 === === === === === === === === === === === === === === === === === === === === === === ===
 */
extern int product_array(int* array, size_t array_len);

#endif
