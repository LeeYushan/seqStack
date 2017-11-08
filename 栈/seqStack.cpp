#include "stdafx.h"
#include"seqStack.h";

seqStack::seqStack()
{
	top = -1;
}

void seqStack::Push(int x)
{
	if (top >= MAX_SIZE - 1)
		throw"溢出！";
	top++;
	data[top] = x;
}

int seqStack::Pop()
{
	if (top <= -1)
		throw"栈空！";
	int x = data[top--];
	return x;
}

int seqStack::getTop()
{
	return data[top];
}

void seqStack::Empty()
{
	top = -1;
}

void seqStack::Print()
{
	cout << "栈内数据为：" << endl;
	if (top == -1)
		cout << "栈空";
	else
	{
		for (int i = 0; i <= top; i++)
		{
			cout << data[i] << " ";
		}
	}
	cout << endl;
}
