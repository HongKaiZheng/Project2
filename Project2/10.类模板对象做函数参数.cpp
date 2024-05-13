//#include<iostream>
//using namespace std;
//
////类模板对象做函数参数
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "姓名: " << this->m_Name << endl;
//		cout << "年龄: " << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
////1.传入指定类型
//
//void PringPerson01(Person<string,int>&p)
//{
//	p.ShowPerson();
//}
//
//void test01()
//{
//	Person<string, int>p1("Tom", 30);
//	PringPerson01(p1);
//}
//
////2.参数模板化
//template<class T1,class T2>
//void PrintPerson02(Person<T1,T2>&p)
//{
//	p.ShowPerson();
//
//	//如何查看模板中推导出来的类型:
//	cout << "T1的类型为:" << typeid(T1).name() << endl;
//	cout << "T2的类型为:" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p2("Mike", 31);
//	PrintPerson02(p2);
//}
//
////3.整个类模板化
//template<class T>
//void PrintPerson03(T& p)
//{
//	p.ShowPerson();
//
//	cout << "T的数据类型: " << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p3("Sala", 19);
//	PrintPerson03(p3);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}