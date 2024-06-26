//#include<iostream>
//using namespace std;
//
////模板的局限性
////模板并不是万能的,,有些特定的数据类型,需要用具体化方式做特殊处理
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
////对比两个数据是否相等
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
//		cout << "a和b是相等的" << endl;
//	}
//	else {
//		cout << "a和b是不相等的" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1, p2);
//	if (ret) {
//		cout << "p1和p2是同一个人" << endl;
//	}
//	else {
//		cout << "p1和p2不是同个人" << endl;
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