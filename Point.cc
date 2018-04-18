/* -->Work Hard!<-- */
 /// @File->    Point.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 05:14:57
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:

	Point()
	{
		_ix = 0;
		_iy = 0;
		cout << "Point()" << endl;
	}

	Point(int ix,int iy = 0)//调用不赋值默认为0，从右到左
	{
		cout << "Point(int,int)" << endl;
		_ix = ix;
		_iy = iy;
	}

	void print()
	{
		cout << "(" << _ix << "," << _iy << ")" << endl;
	}

private:
	int _ix;
	int _iy;

};

int main()
{
	Point ptr_1(1,2);
	ptr_1.print();

	Point ptr_2;
	ptr_2.print();

	Point ptr_3(3);
	ptr_3.print();

	return 0;
}






















