//#include<iostream>
//using namespace std;
//
////ͨ��ȫ�ֺ���,��ӡPerson��Ϣ
//
////��ǰ�ñ�����֪��Person�����
//template<class T1,class T2>
//class Person;
//
////����ʵ��
//template<class T1, class T2>
//void PrintPerson02(Person<T1, T2> p)
//{
//
//	cout << "����ʵ�ֵ�����:" << p.m_Name << "����:" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ���,����ʵ��
//	friend void PrintPerson(Person<T1,T2> p)
//	{
//		cout << "����:" << p.m_Name << "����:" << p.m_Age << endl;
//	}
//
//	//ȫ�ֺ���,����ʵ��
//	//�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ��,��Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void PrintPerson02<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
////ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p1("Tom", 20);
//	PrintPerson(p1);
//}
//
////ȫ�ֺ���������ʵ��
//void test02()
//{
//	Person<string, int>p2("Mike", 21);
//	PrintPerson02(p2);
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}