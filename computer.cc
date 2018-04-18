/* -->Work Hard!<-- */
 /// @File->    computer.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 04:47:36
/* -->Work Hard!<-- */
 
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

class Computer//默认访问权限时private，这是与struct的区别
{
public://类对外提供的服务或者接口
	   //类内部实现的函数都是inline函数，提高效率

	void setBrand(const char* brand)
	{
		::strcpy(_brand, brand);//C的库函数都在匿名空间
		cout << "brand = " << _brand << endl;
	}

	void setPrice(float price)
	{
		_price = price;
		cout << "price = " << _price << endl;
	}

private://class的封装性,不可在类之外访问，Public可以，protected也不行
	char _brand[20];
	float _price;

};

int main()
{
	Computer com;
	com.setBrand("MSI");
	com.setPrice(6000);

	return 0;
}
