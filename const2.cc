/* -->Work Hard!<-- */
 /// @File->    const2.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 04:26:20
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int a = 10;
	int b = 100;
	cout << "a = " << a << endl;

	const int* pa=&a;
	//常量指针（pointer to const）
	//不可通过pa指针修改所指变量的值
	//可以更改所指对象
	pa=&b;

	int const* pb = &a;//常量指针 int与const调换不影响
	//*pb = 20;
	pa = &b;

	int* const pc = &a;//指针常量（const pointer）
	*pc = 20;
	//pc可以修改所指变量的值但
	//不能更改所指对象
	//
	
	cout << "a = " << a << endl //a的值已被修改
		 << "b = " << b << endl
		 << "*pa= " << *pa << endl
		 << "*pb= " << *pb << endl
		 << "*pc= " << *pb << endl;

	//const int* const pd = &a;//指向对象和指向值均不可修改

	return 0;

}
	

