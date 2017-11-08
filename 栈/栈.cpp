// 栈.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"seqStack.h"
using namespace std;

int main()
{
	seqStack myStack;
	int flag = 1,input,number,choice;
	cout << "请输入数据的个数" <<endl ;
	cin >> number;
	cout << "请输入一组数据" << endl;
	for(int i=0;i<number;i++)
	{
		cin >>input;
		myStack.Push(input);
	}
	while (flag)
	{
		cout << "请选择要进行的操作：1.入栈 2.出栈 3.读取栈顶元素 4.置空 5.退出" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "请输入要入栈的数据:";
			cin >> input;
			cout << endl;
			myStack.Push(input);
			cout << "入栈成功！" << endl;
			myStack.Print();
		}
		break;
		case 2:
		{
			cout << "出栈成功！出栈的数据为：" <<myStack.Pop()<< endl;
			myStack.Print();
		}
		break;
		case 3:
		{
			cout << "栈顶元素为：" << myStack.getTop() << endl;
		}
		break;
		case 4:
		{
			myStack.Empty();
			cout << "置空成功！" << endl;
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

