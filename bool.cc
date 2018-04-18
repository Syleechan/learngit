/* -->Work Hard!<-- */
 /// @File->    bool.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 08:00:16
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

//bool型非0即1
int main()
{
	bool b1 = 0;
	bool b2 = 1;
	bool b3 = 100;
	bool b4 = -1;
	bool b5 = true;
	bool b6 = false;

	cout << "b1 = " << b1 << endl
		 << "b2 = " << b2 << endl
		 << "b3 = " << b3 << endl
		 << "b4 = " << b4 << endl
		 << "b5 = " << b5 << endl
		 << "b6 = " << b6 << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << endl;

	return 0;
}

