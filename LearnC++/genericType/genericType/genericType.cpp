// genericType.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;

/*��ģ��*/



/*����ģ��*/
template <class T>
class A
{
public:
	template <class T2>
	void Func(T2 t) { cout << t; }  //��Ա����ģ��

	template <class T2>

	void Func2(T2 t) { cout << t; }  //��Ա����ģ��
};
int main()
{
	A<int> a;
	a.Func('K');  //��Ա����ģ��Func��ʵ����
	a.Func("hello");



	system("pause");
}

