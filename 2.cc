/* -->Work Hard!<-- */
/// @File->    1.cc
/// @Author->  Sy_leechan(lcxtzx2010@163.com)
/// @Date->    2018-04-09 19:28:26
/* -->Work Hard!<-- */

#include <iostream>


namespace A
{

	int a = 100;

	void displayA()
	{
		std::cout << "A::displayA()" <<std:: endl;
		std::cout << "a="<< a << std::endl;
	}


	namespace C
	{
		void displayC()
		{
			std::cout << "C::displayC()" <<std::endl;
		}
	}

}

namespace B
{
	void displayB()
	{
		int a = 10;
		std::cout << "B::a=" << a << std::endl;
	}
}

void cout()
{
	std::cout << "HelloWorld!" << std::endl;
}

int main()
{
	A::displayA();
	A::C::displayC();
	B::displayB();
	cout();
	return 0;
}
