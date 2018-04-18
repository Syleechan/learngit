/* -->Work Hard!<-- */
 /// @File->    default.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 07:11:13
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

//C++里定义的函数可以设置默认值（缺省参数）
//
//默认参数的设置顺序时从右到左的
//

int add(int x = 0, int y = 0)
{
	return x + y;
}

//设置默认值可能会导致二义性，不要使用如下方式
//int add(int x, int y, int z = 0 ) 会与上面的add()
//产生歧义

int add(int x, int y,int z)
{
	return x + y + z;
}

int main()
{
	int a = 3,b = 4, c = 5;
	//add(,b);不可行
	
	//cout << "add() = " << add() << endl;
	//cout << "add(a) = " << add(a) << endl;
	//
	cout << "add(a, b) = " << add(a, b) << endl;
	cout << "add(a, b, c) = " << add(a, b, c) << endl;

	return 0;
}
