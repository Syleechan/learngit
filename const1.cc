/* -->Work Hard!<-- */
 /// @File->    const1.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 04:22:27
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

#define MAX 100
//发生在预编译（预处理），简单执行字符的替换，没有类型检查
//const 常量发生在编译，有类型检查
//

int main()
{
	int a=1;
	const int b=10;
	//const定义的常量初始化赋值后不可更改
	
	cout << a*MAX << endl;
	cout << "const b =" << b << endl;

	return 0;
}
