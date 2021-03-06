/* -->Work Hard!<-- */
 /// @File->    overload.c
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 06:55:51
/* -->Work Hard!<-- */
 
#include <stdio.h>

#ifdef __cplusplus
extern "C"//在其内部的函数都会按照C的方式进行调用，不会进行名字改编
{
#endif
int add(int x, int y)
{
	return x + y;
}

#ifdef __cplusplus
}
#endif


int add(int x, double y)
{
	return x + y;
}


int add(int x, int y,int z)
{
	return x + y + z;
}


int main()
{
	int a = 3, b = 4, c = 5;

	printf("a + b = %d\n",add(a, b));
	printf("a + b + c = %d\n", add(a, b, c));
	return 0;
}

//C++支持函数重载
//原理：名字改编（name mangling）
