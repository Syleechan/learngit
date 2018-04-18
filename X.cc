/* -->Work Hard!<-- */
 /// @File->    X.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 05:25:52
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class X
{
public:

	X(int iy)
	:_iy(iy)
	,_ix(_iy)//初始化成员顺序与列表顺序无关，只与声明的顺序有关；
	{
	}

	void print()
	{
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

private:
	int _ix;
	int _iy;

};

int main()
{
	X x(2);
	x.print();

	return 0;
}



