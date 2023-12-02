		
		
		Linked List is a linear data structure. The elements are not stored at a contiguous location; the elements are linked using pointers. 
	They include a series of connected nodes. Here, each node stores the data and the address of the next node.
		
		A linked list is represented by a pointer to the first node of the linked list. The first node is called the head of the linked list. 
	If the linked list is empty, then the value of the head points to NULL. 
	
	Complexity Analysis:

		Time complexity: O(1), since prev_node is already given as argument in a method, no need to iterate over list to find prev_node.
		
		Auxiliary Space: O(1) since using constant space to modify pointers.