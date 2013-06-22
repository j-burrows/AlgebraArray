/*
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Filename:	algebra_array.c
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Purpose:	Provide functions that do basic algebra to arrays.
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Author:		Jonathan Burrows
 *	Date:		November 30th 2012
 === === === === === === === === === === === === === === === === === === === === === === ===
 *	Dependancy:	string.h
 === === === === === === === === === === === === === === === === === === === === === === ===
 */
#include "algebra_array.h"

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
int sum_array(int* array, size_t array_len){
	int sum = 0;							/*Return value.*/				
	int i;									/*Loop control.*/
	
	/*	Goes through every element in the array and adds its value to sum.*/
	for(i=0; i < array_len; i++){
		sum += array[i];
	}
	
	return sum;
}

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
 *	Notes:		If the array is empty, a special case must occur where the size is zero.
 *				Otherwise, the product is set to one before multiplying all the values.
 === === === === === === === === === === === === === === === === === === === === === === ===
 */
int product_array(int* array, size_t array_len){
	int product = 0;						/*Return value.*/
	int i;									/*Loop control.*/
	
	/*Checks if the array is empty.*/
	if(array_len == 0){						/*Product of an empty array must be zero.*/
		product = 0;
	}
	else{									/*Not empty, can proceed to get the product.*/
		product = 1;
		/*	Goes through every element in the array, and multiplies it with product.*/
		for(i=0; i<array_len; i++){
			product *= array[i];
		}
	}
	
	return product;
}
