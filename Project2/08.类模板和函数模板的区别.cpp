//#include<iostream>
//using namespace std;
//
////类模板和函数模板区别
//
////类模板
//template<class NameType ,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name,AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "姓名: " << this->m_Name << endl;
//		cout << "年龄: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.类模板没有自动推导类型
//void test01()
//{
//	//Person p1("Tom", 80);//报错,无法推导出类型
//
//	Person<string, int>p1("Tom", 24);	//只能用显示指定类型
//	p1.ShowPerson();
//}
//
////2.类模板在模板参数列表中可以有默认参数,也就是在第七行 :class AgeType = int 
//void test02() {
//	Person<string>p2("Mike", 25);	//在此处声明对象时可以省略掉年龄的int指定类型
//	p2.ShowPerson();
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}