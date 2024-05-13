#pragma once

#include<iostream>
using namespace std;


template<class T>
class MyArray
{
public:
	//�ṩ�вι��캯��
	MyArray(int capacity) {
		//cout << "�вι��캯������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "�������캯������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//���
		this->pAddress = new T[arr.m_Capacity];

		//��ԭ��arr�е����ݶ���������
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=����" << endl;
		//���ж�ԭ�������Ƿ�������,��������ͷŸɾ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}


	//β�巨
	void Push_Back(const T& val)
	{
		//�ж�������С�Ƿ����,��������,�Ͳ岻��ȥ��
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;	//������ĩβ��������
		this->m_Size++;	//���������С
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ��,��Ϊβ��,�߼�ɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//ͨ���±귽ʽ���������е�Ԫ��
	//����Ҫ����[]����
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//����
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "������������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;	//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;		//��������

	int m_Size;			//�����С
};