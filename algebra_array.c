/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	algebra_array.c
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 */
#include "algebra_array.h"

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	sum_array
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
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

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	product_array
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
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
