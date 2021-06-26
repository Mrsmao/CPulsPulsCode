// Overload.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

template <class T4>
class A
{
public:
	template <class T4>
	void Func(T4 t) { cout << t; }  //成员函数模板
};
//交换 int 变量的值
//引用&a 就是 a 的别名，就是a自己
void Swap(int &a, int &b){

	int temp = a;
	a = b;
	b = temp;
}
//交换 float 变量的值
void Swap(float *a, float *b){
	float temp = *a;
	*a = *b;
	*b = temp;
}
//交换 char 变量的值
void Swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}
//交换 bool 变量的值
void Swap(bool *a, bool *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

//交换 bool 变量的值
void Swap1(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 1;
	int b = 2;

	Swap1(a, b);
	cout << b << "\n";
	cout << a << "\n";

	Swap(a, b);
	cout << b << "\n";
	cout << a << "\n";

	A<int> aa;
	aa.Func(111);
	aa.Func("dfdfdf");
	while(1);
}