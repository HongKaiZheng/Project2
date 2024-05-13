//#include<iostream>
//using namespace std;
//
////类模板中成员函数创建时机
//
////类模板成员函数在调用时才会调用
//
//class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "show Person1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "show Person2" << endl;
//	}
//};
//
//template<class T>
//class Myclass
//{
//public:
//	T obj;
//	void func1()
//	{
//		obj.ShowPerson1();
//	}
//	void func2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//void test01()
//{
//	Myclass<Person1>m;
//	m.func1();//类模板中的成员函数只有你去调用的时候才会创建
//
//	//m.func2();//报错,说明类模板中成员函数调用时才会创建
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}