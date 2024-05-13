//#include<iostream>
//using namespace std;
//
////第一种解决办法,把 #include "13.1.Person.h" 变为: #include "13.1.Person.cpp"即可
////#include "13.1.Person.cpp"
//
////第二种解决办法,将 .h 文件的内容和 .cpp 文件的内容合并在一起写,将后缀改为.hpp
//#include "13.1.Person.hpp"
//
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//	p.ShowPerson();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}