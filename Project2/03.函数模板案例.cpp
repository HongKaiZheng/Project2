//#include<iostream>
//using namespace std;
//
////���ú���ģ���װһ������ĺ���,���ԶԲ�ͬ�������������������
////�������Ӵ�С,�����㷨Ϊѡ������
////�ֱ���<��char�����int������в���
//
////�����㷨
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template<typename T>
//void Sort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		//�϶���һ��Ϊ��Сֵ
//		int min = i;
//		for (int j = i+1; j < len; j++) {
//			//�϶�����Сֵ�ȱ���������Ҫ��,����˵��j������Сֵ,�����滻
//			if (arr[min] > arr[j]) {
//				min = j;
//			}
//		}
//		if (min != i) {
//			//���н���
//			Swap(arr[min], arr[i]);
//		}
//	}
//}
//
//template<typename T>
//void PrintArr(T arr[],int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i]<<"";
//	}
//}
//
//
//void test01()
//{
//	//����char����
//	char charArr[] = "acedbf";
//	//�������鳤��
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//
//	//��������ģ��
//	Sort(charArr, num);
//	PrintArr(charArr, num);
//	cout << endl;
//
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 7,9,3,4,2,1,5,6 };
//	//�������鳤��
//	int num = sizeof(intArr) / sizeof(intArr[0]);
//	//��������ģ��
//	Sort(intArr, num);
//	//������ӡģ��
//	PrintArr(intArr, num);
//	cout << endl;
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}