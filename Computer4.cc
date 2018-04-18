/* -->Work Hard!<-- */
 /// @File->    Computer4.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 06:11:18
/* -->Work Hard!<-- */
#include<string.h>
#include<string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Computer
{
public:
	Computer(const char* brand, float price)
	: _brand(new char[strlen(brand)+1]())
	, _price(price)
	{
		strcpy(_brand, brand);
		cout << "Computer(const char*, float)" << endl;
	}

#if 0
	Computer(const Computer &rhs)
	: _brand(rhs._brand)
	, _price(rhs._price)
	{
		cout << "Computer(const Computer&)" << endl;
		_brand = rhs._brand;
	}
#endif
	//复制构造函数的形参不能去掉引用符号：会导致无穷递归
	//复制构造函数的形参不能去掉const：如果去掉之后，非const引用不能
	//绑定到临时对象

#if 1
	Computer(const Computer &rhs)
	: _brand(new char[strlen(rhs._brand) + 1]())
	, _price(rhs._price)
	{
		cout << "Computer(const Computer&)" << endl;
		strcpy(_brand, rhs._brand);

	}
#endif

	void setBrand(const char* brand);
	void setPrice(float price);//提供接口

	void print()
	{
		cout << "品牌：" << _brand << endl
			 << "价格：" << _price << endl;
	}

	~Computer()//对象被销毁时自动调用
	{
		delete[] _brand;
		cout << "~Computer()" << endl;
	}

private:
	char* _brand;
	float _price;

};

//作用域限定
void Computer::setBrand(const char* brand)
{
	::strcpy(_brand, brand);
}

void Computer::setPrice(float price)
{
	_price = price;
}

void func1(Computer c1)
{
	c1.print();
}

Computer func2()
{
	cout << "func2()" << endl;
	Computer com("MSI",6000);
	com.print();
	return com;
}

int main()
{
	cout << "sizeof(Computer) = " << sizeof(Computer) << endl;
	Computer com1("Dell",5555);
	Computer com2 = com1;
	cout << "com1 = ";
	com1.print();
	cout << "com2 = ";
	com2.print();
	cout << endl;

	func1(com1);
	cout << endl;

	func2();//返回的时非持久对象，临时对象，匿名对象
	Computer com3 = func2();

	const int& ref = 10;
	cout << "ref = " << ref << endl;

	return 0;

}




































	
