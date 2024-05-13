//#include<iostream>
//using namespace std;
//
////函数模板注意事项
//template<typename T>			//typename可以替换为class
//
////1.自动类型推导,必须推导出一致的数据类型T才可以使用
//void MySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	MySwap(a, b);
//	
//	//不能推导出一致的数据类型
//	//MySwap(a, c);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
////2.模板必须确定出T的数据类型,才可以使用
//template<typename T>
//void func() {
//	cout << "func函数的调用" << endl;
//}
//
//void test02() {
//	//func();		//错误示范,没有指定具体的数据类型,不可以使用
//	func<int>();   //必须指定func的数据类型,才可以使用,否则无法正常使用<int>
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}