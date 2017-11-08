
#ifndef SEQSTACK_H
#define SEQSTACK_H

#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
class seqStack
{
public:
	seqStack();
	//~seqStack();
	void seqStack::Push(int x);
	int seqStack::Pop();
	int seqStack::getTop();
	void seqStack::Empty();
	void seqStack::Print();
private:
	int data[MAX_SIZE];
	int top;
};

#endif // !SEQSTACK_H


