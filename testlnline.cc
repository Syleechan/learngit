/* -->Work Hard!<-- */
 /// @File->    testlnline.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 07:42:37
/* -->Work Hard!<-- */

#include "inline.h"

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int a = 3, b = 4;

	cout << "a + b = " << func(a,b) << endl;
	cout << "a和b较大的值是：" << Max(a, b) << endl;
	cout << Max(a + b, b) << endl;
	cout << getValue(a + b, b) << endl;
	cout << func(a + b, b) << endl;

	return 0;
}


