		      Abstract Queue										FIFO PRINCIPLE OF QUEUE:

	An Abstract Queue (Queue ADT) is an abstract					* A Queue is like a line waiting to purchase tickets, where the first 
     data type that emphasizes specific operations:					person in line is the first person served. (i.e. First come first serve).

	* Uses an explicit linear ordering						* Position of the entry in a queue ready to be served, that is, the first 
	* Insertions and removals are performed individually				entry that will be removed from the queue, is called the front  of the queue,
	* There are no restrictions on objects inserted into				similarly, the position of the last entry in the queue, that is, the one most
	(pushed onto) the queue — that object is designated				 recently added, is called the rear (or the tail) of the queue.
	the back of the queue
	* The object designated as the front of the queue is
	the object which was in the queue the longest								CHARACTERISTIC OF QUEUE:
	* The remove operation (popping from the queue)
	removes the current front of the queue						* Queue can handle multiple data.			
											* We can access both ends.
											* They are fast and flexible. 
	A queue is defined as a linear data structure that is open 
     at both ends and the operations are performed in First In First							
     Out (FIFO) order.												QUEUE REPRESENTATION
											* Queue: the name of the array storing queue elements.
	We define a queue to be a list in which all additions to the 			* Front: the index where the first element is stored in the array representing 
     list are made at one end, and all deletions from the list are made 			the queue.
     at the other end.  The element which is first pushed into the order,		* Rear: the index where the last element is stored in an array representing 
      the operation is first performed on that.							the queue.
      
      Types of queues:
      	[1]. Circular Queue
      	[2]. Linear Queue
      	
    	[0] Back     [9] QUIT
      
