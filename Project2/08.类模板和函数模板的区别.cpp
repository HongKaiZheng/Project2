//#include<iostream>
//using namespace std;
//
////��ģ��ͺ���ģ������
//
////��ģ��
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
//		cout << "����: " << this->m_Name << endl;
//		cout << "����: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.��ģ��û���Զ��Ƶ�����
//void test01()
//{
//	//Person p1("Tom", 80);//����,�޷��Ƶ�������
//
//	Person<string, int>p1("Tom", 24);	//ֻ������ʾָ������
//	p1.ShowPerson();
//}
//
////2.��ģ����ģ������б��п�����Ĭ�ϲ���,Ҳ�����ڵ����� :class AgeType = int 
//void test02() {
//	Person<string>p2("Mike", 25);	//�ڴ˴���������ʱ����ʡ�Ե������intָ������
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