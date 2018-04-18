/* -->Work Hard!<-- */
 /// @File->    reference.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 05:37:29
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int number = 100;
	int ival = 1;
	int &ref = number;
	//引用不能单独存在，必须
	//依附实体，即要初始化
	
	cout << "number = " << number << endl;
	cout << "ref = " << ref << endl;

	ref = 20;
	cout << "be modified:" << endl;
	cout << "number = " << number << endl;
	cout << "ref = " << ref << endl;

	ref = ival;
	cout << "number = " << number << endl;
	cout << "ref = " << ref << endl;
	cout << "ival = " << ival << endl;

	return 0;
}
