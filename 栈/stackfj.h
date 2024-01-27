template<typename T> Stack<T>::Stack(T first)
{
	maxlength=4;
	length=1;
	start=new T[maxlength];
	*start=first;
}
template<typename T> Stack<T>::Stack()
{
	maxlength=4;
	length=0;
	start=new T[maxlength];
}
template<typename T> Stack<T>::~Stack()
{
	delete[] start;
}
template<typename T> long long Stack<T>::mlong() const{
	return maxlength;
}
template<typename T> Stack<T>& Stack<T>::operator=(const Stack& b)
{
	
	maxlength=b.mlong();
	length=b.getl();//
	delete[] start;
	start=new T[maxlength];
	for(int i=length-1;i>=0;i--)
	{
		*(start+i)=*(b.start+i);
	}
	return (*this);
}
template<typename T> T Stack<T>::pop()
{
	T t=*(start+length-1);//1
	length--;
	*(start+length) =NULL;

	if(ifm())  mlength();
	return  t;
}
template<typename T> void Stack<T>::push(T t)
{	*(start+length) =t;
	length++;	//1
	if(ifp())  plength();
}
template<typename T>bool Stack<T>::ifp()
{
	if(length>=maxlength/2)	return 1;
	return 0;
}
template<typename T>bool Stack<T>::ifm()
{
	if(length<=maxlength/4&&length>=32)	return 1;
	return 0;
}
template<typename T>void Stack<T>::plength()
{
	maxlength*=2;
	T* t=new T[maxlength];
	for(int i=0;i<length;i++)
	{
		*(t+i)=*(start+i);
	}
	delete(start);
	start =t;
//	cout<<'l'; 
	return ;
}
template<typename T>void Stack<T>::mlength()
{
	maxlength/=2;
	T* t=new T[maxlength];
	for(int i=0;i<length;i++)
	{
		*(t+i)=*(start+i);
	}
	delete(start);
	start =t;
//	cout<<'p';
	return;
}
template<typename T>long long Stack<T>::getl() const
{
	return length;
}
template<typename T>void Stack<T>::test()
{
	//push(3);
	push('a');
	push('p');
	/*cout<<pop()<<' '<<pop()<<' ';*/
	char a=pop();
	char b=pop();
//	cout<<a<<' '<<b<<' ';
//	cout<<a<<' ';
//	cout<<b<<' ';
	for(int i=1;i<10000;i++)
	{
		push(char('a'));
	 } 
	for(int i=1;i<10000;i++)
	{
		pop();
	 } 
	pop();
//	cout<<'a';
	cout<<getl();
	return;
}
