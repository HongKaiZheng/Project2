//#include<iostream>
//using namespace std;
//
////����ģ��ע������
//template<typename T>			//typename�����滻Ϊclass
//
////1.�Զ������Ƶ�,�����Ƶ���һ�µ���������T�ſ���ʹ��
//void MySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	MySwap(a, b);
//	
//	//�����Ƶ���һ�µ���������
//	//MySwap(a, c);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
////2.ģ�����ȷ����T����������,�ſ���ʹ��
//template<typename T>
//void func() {
//	cout << "func�����ĵ���" << endl;
//}
//
//void test02() {
//	//func();		//����ʾ��,û��ָ���������������,������ʹ��
//	func<int>();   //����ָ��func����������,�ſ���ʹ��,�����޷�����ʹ��<int>
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}