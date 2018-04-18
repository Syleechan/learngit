/* -->Work Hard!<-- */
 /// @File->    static_cast.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 06:41:04
/* -->Work Hard!<-- */
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

int test_0()
{
	double d1 = 5.55;
	int a = (int)d1;
	int b = int(d1);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

void test_1()
{
	double d1 = 5.55;
	int a = static_cast<int>(d1);
	cout << "a = " << a << endl;

	int* p1 = static_cast<int*>(malloc(sizeof(int)));
	*p1 = 10;

	free(p1);
}

int main()
{
	test_0();
	test_1();

	return 0;
}
