//#include<iostream>
//using namespace std;
//
////利用函数模板封装一个排序的函数,可以对不同数据类型数组进行排序
////排序规则从大到小,排序算法为选择排序
////分别利<用char数组和int数组进行测试
//
////交换算法
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<typename T>
//void Sort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		//认定第一个为最小值
//		int min = i;
//		for (int j = i+1; j < len; j++) {
//			//认定的最小值比遍历出来的要大,声明说明j才是最小值,进行替换
//			if (arr[min] > arr[j]) {
//				min = j;
//			}
//		}
//		if (min != i) {
//			//进行交换
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
//	//测试char数组
//	char charArr[] = "acedbf";
//	//计算数组长度
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//
//	//传进排序模板
//	Sort(charArr, num);
//	PrintArr(charArr, num);
//	cout << endl;
//
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 7,9,3,4,2,1,5,6 };
//	//计算数组长度
//	int num = sizeof(intArr) / sizeof(intArr[0]);
//	//传进排序模板
//	Sort(intArr, num);
//	//传进打印模板
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