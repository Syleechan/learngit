/* -->Work Hard!<-- */
 /// @File->    String.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 07:45:24
/* -->Work Hard!<-- */
#include<string.h>
#include<string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class String
{
public:
	String()
	: _pstr(new char[1]())
	{
		_pstr[0]='\0';
		cout << "String() -> _pstr = " << _pstr << endl;
	}

	String(const char* pstr)
	: _pstr(new char[strlen(pstr)+1]())
	{
		strcpy(_pstr, pstr);
		cout << "String(const char* pstr)" << endl;
	}
	String(const String &rhs)
	: _pstr(new char[strlen(rhs._pstr) + 1]())
	{
		strcpy(_pstr, rhs._pstr);
		cout << "String(String(const String &rhs))" << endl;
	}

	String &operator = (const String &rhs)
	{
		//char *_pstr=new char[strlen(rhs._pstr)+1]();
		strcpy(_pstr, rhs._pstr);
		cout << "String &operator = (const String &rhs)" << endl;
		return (*this);
	}

	~String()
	{
		delete[] _pstr;
		cout << "~String()" << endl;
	}

	void print()
	{
		cout << "_pstr = " << _pstr << endl;
	}

private:
	char* _pstr;
};


int main()
{
	String str1;
	str1.print();

	String str2 = "HelloWorld!";
	String str3("王道");

	str2.print();
	str3.print();

	String str4 = str3;
	str4.print();

	str4 = str2;
	str4.print();

	return 0;

}
