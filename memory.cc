/* -->Work Hard!<-- */
 /// @File->    memory.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 23:19:53
/* -->Work Hard!<-- */
 
#include<stdio.h>
//只读段 -> 读写段 -> 堆空间（malloc创建）-> 栈空间 
//地址由低到高

int a = 0;
char* p1;//全局变量自动初始化，不会进行压栈，在读写段

int main()
{
	int b;
	char s[] = "123456";//定义局部变量，栈空间，高地址
	char * p2;
	const char* p3 = "654321";//常量指针，文字常量区，低地址，（只读段）
	static int c = 0;//局部静态变量与全局变量相似，函数退栈后
					//仍具有生命周期，且只能被定义的函数所访问
					//只初始化一次
	p1 = new char[10];
	p2 = new char[5];//开辟的空间（堆空间）

	printf("&a = %p\n", &a);
	printf("p1 = %p\n", p1);
	printf("&p1 = %p\n", &p1);
	printf("&b = %p\n",&b);
	printf("&s = %p\n", &s);
	printf("p2 = %p\n", p2);
	printf("&p2 = %p\n", &p2);
	printf("p3 = %p\n", p3);
	printf("&p3 = %p\n", &p3);
	printf("&c = %p\n", &c);
	printf("&main = %p\n",main);

	return 0;

}
