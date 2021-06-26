// genericType.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
using namespace std;

/*类模板*/



/*函数模板*/
template <class T>
class A
{
public:
	template <class T2>
	void Func(T2 t) { cout << t; }  //成员函数模板

	template <class T2>

	void Func2(T2 t) { cout << t; }  //成员函数模板
};
int main()
{
	A<int> a;
	a.Func('K');  //成员函数模板Func被实例化
	a.Func("hello");



	system("pause");
}

