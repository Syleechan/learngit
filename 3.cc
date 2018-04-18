/* -->Work Hard!<-- */
/// @File->    1.cc
/// @Author->  Sy_leechan(lcxtzx2010@163.com)
/// @Date->    2018-04-09 19:28:26
/* -->Work Hard!<-- */

#include <iostream>

using std::cout;
using std::endl;


namespace B
{
	void displayB();//声明
}


namespace A
{

	int a = 100;

	void displayA()
	{
		cout << "A::displayA()" << endl;
		cout << "a="<< a << endl;
		B::displayB();
	}


	namespace C
	{
		void displayC()
		{
			cout << "C::displayC()" << endl;
		}
	}

}

namespace B
{
	int a=10;
	void displayB()
	{
		cout << "B::displayB()" << endl;
		A::C::displayC();
	}
}

#if 0
void cout()
{
	std::cout << "HelloWorld!" << std::endl;
}
#endif


int main()
{
	A::displayA();
	//A::C::displayC();
	//B::displayB();
	//cout();
	cout << "A::a = " << A::a << endl;
	cout << "B::a = " << B::a << endl;
	return 0;
}
