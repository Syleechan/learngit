/* -->Work Hard!<-- */
 /// @File->    memory2.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 04:39:10
/* -->Work Hard!<-- */
#include <stdio.h> 
#include <iostream>
using std::cout;
using std::endl;

int a = 10;
const int b = 1;

int main()
{
	int c = 100;
	const int d = 11;
	const char* p1 = "hello";

	printf("&a = %p\n", &a);
	printf("&b = %p\n", &b);
	printf("&c = %p\n", &c);
	printf("&d = %p\n", &d);
	printf("p1 = %p\n", p1);
	printf("&p1 = %p\n", &p1);

	return 0;
}

