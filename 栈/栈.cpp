// ջ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include"seqStack.h"
using namespace std;

int main()
{
	seqStack myStack;
	int flag = 1,input,number,choice;
	cout << "���������ݵĸ���" <<endl ;
	cin >> number;
	cout << "������һ������" << endl;
	for(int i=0;i<number;i++)
	{
		cin >>input;
		myStack.Push(input);
	}
	while (flag)
	{
		cout << "��ѡ��Ҫ���еĲ�����1.��ջ 2.��ջ 3.��ȡջ��Ԫ�� 4.�ÿ� 5.�˳�" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "������Ҫ��ջ������:";
			cin >> input;
			cout << endl;
			myStack.Push(input);
			cout << "��ջ�ɹ���" << endl;
			myStack.Print();
		}
		break;
		case 2:
		{
			cout << "��ջ�ɹ�����ջ������Ϊ��" <<myStack.Pop()<< endl;
			myStack.Print();
		}
		break;
		case 3:
		{
			cout << "ջ��Ԫ��Ϊ��" << myStack.getTop() << endl;
		}
		break;
		case 4:
		{
			myStack.Empty();
			cout << "�ÿճɹ���" << endl;
			myStack.Print();
		}
		break;
		case 5:
			flag = 0;
		break;
		}
		
	}
    return 0;
}

