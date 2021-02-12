Chap19: Program Design
========================================================================
EXERCISES

--Exercise 1 (Section 19.1): knkcch19e01: A queue is similar to a stack, except 
that items are added at one end but removed from the other in a FIFO (first-in, 
first-out) fashion. Operations on a queue might include:

	Inserting an item at the end of the queue
	Removing un item from the beginning of the queue
	Returning the first item in the queue (without changing the queue)
	Returning the last item in the queue (without changing the queue)
	Testing whether the queue is empty

Write an interface for a queue module in the form of a header file named queue.h.

--Exercise 2 (Section 19.2): knkcch19e02: Modify the stack2.c file to use the 
PUBLIC and PRIVATE macros.

--Exercise 3 (Section 19.2): knkcch19e03: (a) Write an array based 
implementation of the qucue module described in Exercise 1. Use three integers 
to keep track of the queue’s status, with one integer storing the position of 
the first empty slot in the array (used when an item is inserted), the second 
storing the position of the next item to be removed, and the third storing the 
number of items in the queue. An insertion or removal that would cause either of 
the first two integers to be incremented past the end of the array should 
instead reset the variable to zero, thus causing it to “wrap around” to the 
beginning of the array.

(b) Write a linked-list implementation of the queue module described in 
Exercise 1. Use two pointers, one pointing to the first node in the list and the 
other pointing to the last node. When an item is inserted into the queue, add 
it to the end of the list. When an item is removed from the queue, delete the 
first node in the list.

--Exercise 4 (Section 19.3): knkcch19e04: (a) Write an implementation of the 
Stack type, assuming that Stack is a structure containing a fixed-length array.
(b) Redo the Stack type, this time using a linked-list representation instead of 
an array. (Show both stack.h and stack.c.)

--Exercise 5 (Section 19.3): knkcch19e05: Modify the queue.h header of Exercise 
1 so that it defines a Queue type, where Queue is a Structure containing a 
fixed-length array (see Exercise 3(a)). Modify the functions in queue.h to take 
a Queue * parameter.

--Exercise 6 (Section 19.4): knkcch19e06: (a) Add a peek function to stackADT.c. 
This function will have a parameter of type Stack. When called, it returns the 
top item on the stack but doesn’t modify the stack.
(b) Repeat part (a), modifying stackADT2.c this time.
(c) Repeat part (a), modifying stackADT3.c this time.

--Exercise 7 (Section 19.4): knkcch19e07: Modify stackADT2.c so that a stack 
automatically doubles in size when it becomes full. Have the push function 
dynamically allocate a new array that’s twice as large as the old one and then 
copy the stack contents from the old array to the new one. Be sure to have push 
deallocate the old array once the data has been copied.
========================================================================
PROGRAMMING PROJECTS

-- Project 1: knkcch19proj01: Modify Programming Project 1 from Chapter 10 so 
that it uses the stack ADT described in section 19.4. You may use any of the 
implementations of the ADT described in that section.

-- Project 2: knkcch19proj02: Modify Programming Project 6 from Chapter 10 so 
that it uses the stack ADT described in Section 19.4, You may use any of the 
implementations of the ADT described in that section.

-- Project 3: knkcch19proj03: Modify the stackADT3.c file of Section 19.4 by 
adding an int member named len to the stack_type structure. This member will 
keep track of how many items are currently stored in a stack. Add a new function 
named length that has a Stack parameter and returns the value of the len member. 
(Some of the existing functions in stackADT3.c will need to be modified as well.) 
Modify stackclient.c so that it calls the length function (and displays the 
value that it returns) after each operation that modifies a stack.

-- Project 4: knkcch19proj04: Modify the stackADT.h and stackADT3.c files of 
Section 19.4 so that a stack stores values of type void *, as described in 
Section 19.5; the Item type will no longer be used. Modify stackclient.c so that 
it stores pointers to strings in the s1 and s2 stacks.

-- Project 5: knkcch19proj05: Starting from the queue.h header of Exercise 1, 
create a file named queueADT.h that defines the following Queue type:

	typedef struct queue_type *Queue;

queue_type is an incomplete structure type. Create a file named queueADT.c 
that contains the full definition of queue_type as well as definitions for all 
the functions in queue.h. Use a fixed-length array to store the items in a queue 
(see Exercise 3(a)). Create a file named queueclient.c (similar to the 
stackclient.c file of Section 19.4) that creates two queues and performs 
operations on them. Be sure to provide create and destroy functions for your ADT.

-- Project 6: knkcch19proj06: Modify Programming Project 5 so that the items in 
a queue are stored in a dynamically allocated array whose length is passed to 
the create function.

-- Project 7: knkcch19proj07: Modify Programming Project 5 so that the items in 
a queue are stored in a linked list (see Exercise 3(b)).
========================================================================