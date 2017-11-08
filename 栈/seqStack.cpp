#include "stdafx.h"
#include"seqStack.h";

seqStack::seqStack()
{
	top = -1;
}

void seqStack::Push(int x)
{
	if (top >= MAX_SIZE - 1)
		throw"�����";
	top++;
	data[top] = x;
}

int seqStack::Pop()
{
	if (top <= -1)
		throw"ջ�գ�";
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
	cout << "ջ������Ϊ��" << endl;
	if (top == -1)
		cout << "ջ��";
	else
	{
		for (int i = 0; i <= top; i++)
		{
			cout << data[i] << " ";
		}
	}
	cout << endl;
}
