//#include<iostream>
//using namespace std;
//
////��ģ����̳�
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son : public Base		//����,����Ҫ֪��������T������,���ܼ̳и�����
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
////���������ָ��������T������,��ô����Ҳ��Ҫ��Ϊ��ģ��
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