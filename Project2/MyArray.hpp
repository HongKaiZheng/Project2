#pragma once

#include<iostream>
using namespace std;


template<class T>
class MyArray
{
public:
	//提供有参构造函数
	MyArray(int capacity) {
		//cout << "有参构造函数调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造函数调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];

		//将原来arr中的数据都拷贝过来
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=调用" << endl;
		//先判断原来堆区是否有数据,如果有先释放干净
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}


	//尾插法
	void Push_Back(const T& val)
	{
		//判断容量大小是否相等,如果相等了,就插不进去了
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;	//在数组末尾插入数据
		this->m_Size++;	//更新数组大小
	}

	//尾删法
	void Pop_Back()
	{
		//让用户访问不到最后一个元素,即为尾插,逻辑删除
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//通过下标方式访问数组中的元素
	//首先要重载[]符号
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "析构函数调用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;	//指针指向堆区开辟的真实数组

	int m_Capacity;		//数组容量

	int m_Size;			//数组大小
};