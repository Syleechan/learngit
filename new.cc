/* -->Work Hard!<-- */
 /// @File->    new.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 05:06:02
/* -->Work Hard!<-- */
#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

void test_0()
{
	int* p1 = (int*) malloc (10 * sizeof(int));
	*p1 = 100;
	cout << "*p1 = " << *p1 << endl;

	int* p2 = (int*) malloc (10 * sizeof(int));
	memset(p2,0,10 * sizeof(int));

	for(int idx = 0; idx < 10; ++idx)
	{
		p2[idx] = idx;
	}

	for(int idx = 0; idx < 10; ++idx)
	{
		cout << "p2[" << idx <<"] = " << p2[idx] << endl;
	}

	free(p1);
	free(p2);
}

void test_1()
{
	int* p1 = new int(10);
	cout << "*p1 = " << *p1 << endl;

	int* p2 = new int[10]();
	for(int idx = 0; idx < 10; ++idx)
	{
		p2[idx] = idx;
	}
	for(int idx = 0; idx < 10 ;++idx)
	{
		cout << "p2[" << idx << "] = " << p2[idx] << endl;
	}
	delete p1;
	delete[] p2;//delete[]对应new int[];
}

int main()
{
	test_0();
	test_1();

	return 0;
}

































