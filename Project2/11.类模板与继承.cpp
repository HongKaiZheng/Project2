//#include<iostream>
//using namespace std;
//
////类模板与继承
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son : public Base		//错误,必须要知道父类中T的类型,才能继承给子类
//class Son : public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////如果想灵活的指定父类中T的类型,那么子类也需要变为类模板
//template<class T1,class T2>
//class Son02 : public Base<T1>
//{
//public:
//	T2 obj;
//};
//void test02()
//{
//	Son02<int, string>s2;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}