#include<iostream>
using namespace std;
#include"MyArray.hpp"

//�����Զ�������
class Person
{
public:
	Person(){};
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void PrintPerson(MyArray<Person>&arr)
{
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "����:" << arr[i].m_Name << "����:" << arr[i].m_Age << endl;
	}
}

void test01()
{
	MyArray<Person>arr(5);
	Person p1("Tom", 21);
	Person p2("Mike", 22);
	Person p3("Sala", 23);
	Person p4("Yifan", 24);
	Person p5("����", 25);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	PrintPerson(arr);

	//�������
	cout << "arr����Ϊ: " << arr.getCapacity() << endl;

	//�����С
	cout << "arr��СΪ:" << arr.getSize() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}