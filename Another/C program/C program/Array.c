
		An array is a data structure, which can store a fixed-size collection of elements of the same data type. An array is used to store a collection	
	of data but it is often more useful to think of an array as a collection of variables of the same type.
		
		All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

		Proper syntax in declaring an array:

			Data_type variable_name [arraySize]

		Example:
			/* Declaring 10 elements of array in calle num of data_type int.
				
				int num[10];

		Initializing an array:

			int num[5] = {10, 20, 30, 40, 50};		/* The number of values between braces {} cannot be larger than the number of elements 
			int num[] = {10, 20, 30, 40, 50};			that we declare for the array between square brackets [].
	
		Accessing an array elements:

			An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets
		after the name of the array.

			index		0	1	2	3	4
			num		10	20	30	40	50

	Example:

		int var = num[3]	 /* The index 3 hava a value of 40 that will be place to variable var. 


