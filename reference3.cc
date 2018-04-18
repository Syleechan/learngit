/* -->Work Hard!<-- */
 /// @File->    reference2.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 05:43:45
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

//地址传递
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

//引用传递
void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int test_0()
{
	int a = 3, b = 4;
	cout << "a = " << a << endl
		 << "b = " << b << endl;
		 
	swap(a, b);
	
	cout << "be exchanged: " << endl;
	cout << "a = " << a << endl
		 << "b = " << b << endl;

	return 0;
}

int arr[5]={1,2,3,4,5};//全局

int &getValue(int idx)
{
	return arr[idx];
}//引用作为函数的返回值，return时不会产生值的副本，没有复制数组对象
//引用和指针就是为了提高函数值传递的效率，减少了复制环节
//让需要传递的参数直接参与

int getValue()
{
	int a = 10;
	return a;
}//会复制产生一个临时变量作为函数返回值的副本

int &func()
{
	int a = 10;
	return a;
}//不要返回局部变量的引用，函数执行结束，变量的生命周期已经结束
//若在引用后中间还有其它的操作，返回的值可能会变，因为堆栈空间已
//被收回
//


int *func2()
{
	int a = 10;
	return &a;
}//不可以，尝试返回a的地址，a存在于栈里，调用结束栈被销毁


int &func3()
{
	int* p = new int(12);
	return *p;
}
//不要轻易返回调用函数内部new分配的内存引用
//被返回的引用只作为临时变量出现，而没有被赋予
//一个实际的变量，所new的空间无法释放，造成内存泄漏



void test_1()
{
	int *p1;//未初始化，指针指向位置不确定
	cout << "p1 = " << p1 << endl;
	cout << "arr[0] = " << getValue(0) << endl;

	getValue(0) = 10;
	cout << "arr[0] = " << arr[0] << endl;
}

int main()
{
	int* p;
	cout << "p = " << p << endl;
	test_1();

	//int &ref = func();
	//如果这里执行了其它代码
	//cout << "ref = " << ref << endl;

	int &ref3 = func3();
	cout << "ref3 = " << ref3 << endl;
	delete &ref3;

	int a = 3, b = 4;
	int c = a + func3() + b;//func3内申请的内存空间无法得到释放，造成内存泄漏
	cout << "c = " << c << endl;


	return 0;
}

