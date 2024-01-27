#ifndef STACK
#define STACK
#include<iostream>
using namespace std;
template<typename T>
class Stack
{
	public:
		T pop(); 
		void push(T);
		Stack(T);
		Stack(); 
		~Stack();
		Stack& operator=(const Stack&);
		void test();
		long long getl() const;
		long long mlong() const;
	private:
		T* start;//储存首地址 
		void plength();
		bool ifp();
		void mlength();
		bool ifm();
		long long maxlength,length;
};//Stack 1.pop 2.push 5.构造 6.析构 7.重载赋值（深拷贝）  private 3.dblength 4.ifdouble 
#include"stackfj.h"
#endif
