//#include<iostream>
//using namespace std;
//
////ģ��ľ�����
////ģ�岢�������ܵ�,,��Щ�ض�����������,��Ҫ�þ��廯��ʽ�����⴦��
//
//class Person
//{
//public:
//	Person(string name,int age) {
//		m_Name = name;
//		m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////�Ա����������Ƿ����
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 10;
//
//	bool ret = myCompare(a, b);
//	if (ret) {
//		cout << "a��b����ȵ�" << endl;
//	}
//	else {
//		cout << "a��b�ǲ���ȵ�" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1, p2);
//	if (ret) {
//		cout << "p1��p2��ͬһ����" << endl;
//	}
//	else {
//		cout << "p1��p2����ͬ����" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}