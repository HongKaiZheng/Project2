//#include<iostream>
//using namespace std;
//
//
//
////普通办法,实现两个整数型交换
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////实现两个浮点型交换
//void swapDouble(double& c, double& d) {
//	double temp = c;
//	c = d;
//	d = temp;
//}
//
////使用模板
//template<typename T>//声明一个模板,告诉编译器后面代码紧跟着的T不要报错,T是一个通用的数据类型
//void MySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//	//利用函数模板交换
//	//两种交换使用函数模板
//	//1,自动类型推导
//	MySwap(a, b);
//
//	//2.显示指定类型
//	MySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}