//#include<iostream>
//using namespace std;
//
///*
//- 普通函数调用时可以发生自动类型转换(隐式类型转换)
//- 函数模板调用时,可以利用自动类型推导,不会发生隐式类型转换
//- 如果利用显示指定类型的方式,可以发生隐式类型转换*/
//
//
////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd01(a, b) << endl;
//	cout << myAdd01(a, c) << endl;	//即使把字符串类型传进去,还是可以进行相加,因为普通函数
//									//可以进行隐式类型转换,把字符串转为Ascll码进行相加
//	
//	//自动类型推导
//	cout << myAdd02(a, b) << endl;
//	//cout << myAdd02(a, c) << endl;  //报错,因为使用函数模板自动推导类型的时候,必须保持一致的数据类型
//	
//	//显示指定类型
//	cout << myAdd02<int>(a, c) << endl; //使用显示指定类型转换,可以发生隐式转换
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}