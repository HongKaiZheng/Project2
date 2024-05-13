#include<iostream>
using namespace std;
#include"MyArray.hpp"

//测试自定义类型
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
		cout << "姓名:" << arr[i].m_Name << "年龄:" << arr[i].m_Age << endl;
	}
}

void test01()
{
	MyArray<Person>arr(5);
	Person p1("Tom", 21);
	Person p2("Mike", 22);
	Person p3("Sala", 23);
	Person p4("Yifan", 24);
	Person p5("张三", 25);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	PrintPerson(arr);

	//输出容量
	cout << "arr容量为: " << arr.getCapacity() << endl;

	//输出大小
	cout << "arr大小为:" << arr.getSize() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}