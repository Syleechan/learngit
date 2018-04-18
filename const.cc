/* -->Work Hard!<-- */
 /// @File->    const.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 07:56:13
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;


#define MAX 100


int main()
{
	int a = 1;
	const int b = 10;//整型常量

	const int &c = a;

	cout << a*MAX << endl;
	cout << c << endl;
	cout << "const b = " << b << endl;

	return 0;
}

