// Overload.cpp : �������̨Ӧ�ó������ڵ㡣
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
	void Func(T4 t) { cout << t; }  //��Ա����ģ��
};
//���� int ������ֵ
//����&a ���� a �ı���������a�Լ�
void Swap(int &a, int &b){

	int temp = a;
	a = b;
	b = temp;
}
//���� float ������ֵ
void Swap(float *a, float *b){
	float temp = *a;
	*a = *b;
	*b = temp;
}
//���� char ������ֵ
void Swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}
//���� bool ������ֵ
void Swap(bool *a, bool *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

//���� bool ������ֵ
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