/* -->Work Hard!<-- */
 /// @File->    Computer3.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 05:41:40
/* -->Work Hard!<-- */
#include <string.h>
#include <iostream>
#include <string>
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

	void setBrand(const char* brand);
	void setPrice(float price);

	void print()
	{
		cout << "品牌：" << _brand << endl
			 << "价格：" << _price << endl;
	}

	~Computer()
	{
		delete[] _brand;
		cout << "~Computer()" << endl;
	}

private:
	char* _brand;
	float _price;

};


void Computer::setBrand(const char* brand)
{
	::strcpy(_brand,brand);
}

void Computer::setPrice(float price)
{
	_price = price;
}

Computer com2("MacBook",9999);
static Computer com3("Thinkpad", 8888);

int main()
{
	Computer com("MSI",6000);
	com.print();

	int* p = new int(1);

	Computer* pc = new Computer("Dell", 5555);
	pc->print();

	delete pc;
	delete p;

	return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

