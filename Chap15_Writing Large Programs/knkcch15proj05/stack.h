#ifndef STACK_H
#define STACK_H
	//-----------------------------------------------------------------------------
	#define STACK_SIZE 10
	//-----------------------------------------------------------------------------
	void make_empty(void);
	bool is_empty(void);
	bool is_full(void);
	void push(int c);
	int pop(void);
	//-----------------------------------------------------------------------------
#endif