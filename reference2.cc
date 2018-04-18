/* -->Work Hard!<-- */
 /// @File->    reference2.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 05:43:45
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

//地址传递
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

//引用传递
void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 3, b = 4;
	cout << "a = " << a << endl
		 << "b = " << b << endl;
		 
	swap(a, b);
	
	cout << "be exchanged: " << endl;
	cout << "a = " << a << endl
		 << "b = " << b << endl;

	return 0;
}
