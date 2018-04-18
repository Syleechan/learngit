/* -->Work Hard!<-- */
 /// @File->    4.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 04:17:19
/* -->Work Hard!<-- */

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

void func(void)
{
	cout << "func()" << endl;
}

int main()
{
	::printf("hello,world!\n");
	::func();

	return 0;
}
