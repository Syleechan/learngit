/* -->Work Hard!<-- */
 /// @File->    inline.h
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-10 07:45:49
/* -->Work Hard!<-- */
 
#ifndef __INLINE_H__
#define __INLINE_H__

#define Max(x,y) ((x) > (y) ? (x) : (y))
#define getValue(x, y) ((x) * (y))
//define 定义宏也只是简单的字符串替换，如上不加括号
//传入（a+b,a）,getValue 会变为 a+b*b与预期的结果不一致
//
//而inline函数，功能与带参数的宏定义类似
//它会把函数体中的语句直接替换掉
//
inline
int func(int x, int y)
{
	return x * y;
}

#endif
