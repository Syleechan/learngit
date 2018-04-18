/* -->Work Hard!<-- */
 /// @File->    testlnline.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 07:20:04
/* -->Work Hard!<-- */
#include<stdlib.h>
#include<string.h>
#include<string>
#include <iostream>
using std::cout;
using std::endl;

void test_0()
{
	char str[] = "hello";
	const char* pstr = "world";
	//*pstr = "X";//常量指针，不可修改值
	cout << "str = " << str << endl;
	cout << "pstr = " << pstr << endl;
	cout << "sizeof(pstr) = " << sizeof(str) << endl;
	
	//str = 0x010;//数组名是常量，不可更改

	char* p1=(char*)malloc(sizeof(str) + strlen(pstr));
	strcpy(p1,str);
	strcat(p1,pstr);

	cout << "p1 = " << p1 << endl;

	for(int idx = 0; idx != sizeof(str); ++idx)
	{
		cout << str[idx] << "";
	}
	cout << endl;

	free(p1);

}


void test_1()
{
	using std::string;
	cout << "C++风格字符串" << endl;

	string s1 = "hello";
	string s2 = "world";
	string s3 = s1 + s2;
	string s4;
	s4.append(s1).append(s2);

	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;

	cout << "s4.size() = " << s4.size() << endl;
	cout << "s3.length() = " << s3.length() << endl;

	for(size_t idx = 0; idx != s4.size(); ++idx)
	{
		cout << s4[idx] << " ";
	}
	cout << endl;

	//截取字符串长度
	string s5 = s4.substr(5,3);
	cout << "s5 = " << s5 << endl;
	cout << endl;

	//字符串的比较，比较的时内容
	string s6 = s5;
	cout << "s6 = " << s6 << endl;
	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;
	cout << (s5 == s6) << endl;

	const char* p1 = s6.c_str();//常量指针，不可修改值
	const char* p2 = s6.data();
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
}

int main()
{

	test_0();

	return 0;
}




