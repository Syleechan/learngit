/* -->Work Hard!<-- */
 /// @File->    Point3.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 05:31:32
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point()
	: _ix(0)
	, _iy(0)
	{
	//	_ix = 0;
	//	_iy = 0;
		cout << "Point()" << endl;
	}

	Point(int ix,int iy = 0)
	: _ix(ix)
	, _iy(iy)
	{
		cout << "Point(int,int)" << endl;
		//_ix = ix;
		//_iy = iy;
	}
	
#if 1
	Point(const Point &rhs)
	: _ix(rhs._ix)
	, _iy(rhs._iy)
	{
		cout << "Point(const Point&)" << endl;
	}
#endif

	void print()
	{
		cout << "(" << _ix << "," << _iy << ")" << endl;
	}

	~Point()
	{
		cout << "~Point()" << endl;
	}

private:

	int _ix;
	int _iy;

};

int test_0()
{
	int a(1);
	cout << "a = " << a << endl;
	Point pt1(1, 2);
	pt1.print();

	Point pt2;
	pt2.print();

	Point pt3(3);
	pt3.print();

	return 0;

}

void test_1()
{
	int a = 1;
	int b = a;
	cout << "b = " << b << endl;

	Point p1(1, 2);
	cout << "p1 = ";
	p1.print();
	Point p2 = p1;
	cout << "p2 = ";
	p2.print();

}

int main()
{
	test_1();
	return 0;

}

