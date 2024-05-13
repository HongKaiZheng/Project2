//#include<iostream>
//using namespace std;
//
///*
//普通函数和函数模板的调用规则如下:
//
//1,如果函数模板和普通函数都可以实现,优先使用普通函数
//
//2,可以通过空模板参数列表来强制调用函数模板
//
//3,函数模板也可以发生重载
//
//4,如果函数模板可以产生更好的匹配,优先调用函数模板
//*/
//
////普通函数
//void myPrint(int a, int b)
//{
//	cout << "普通函数的调用" << endl;
//}
//
////函数模板
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "函数模板的调用" << endl;
//}
//
////函数模板发生重载
//template<typename T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用重载的函数模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	myPrint(a, b);	//优先调用了普通函数
//
//	//可以通过空模板参数列表来调用函数模板
//	myPrint<>(a, b);
//
//	//调用重载的函数模板
//	myPrint<>(a, b, 10);
//
//
//	//如果函数模板可以产生更好的匹配,优先调用函数模板
//	char c = 'c';
//	char d = 'd';
//	myPrint(c, d);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}