#include<iostream>
#include<string>
using namespace std;
/*
* 1、设有两个变量（int iNum1=10；int iNum2=20），编写一个函数，交换这两个变量的值。并在主函数中输出这两个变量。
2、在主函数中，提示输入n，编写函数求1+2+3+…+n的值。
3、在主函数中，提示输入三个数，编写函数求这三个数的 最大数，并在主函数 中输出这个最大数。
 
*/

/*
* 交换函数
*/
void swap(int &a, int & b) {
	int temp = a;
	a = b;
	b = temp;
}

/*
* 累加
*/
void add(int n) {
	int temp = 0;
	for (int i = 1; i < n+1; i++)
	{
		temp += i;
	}
	cout << "累加的值为" << temp << endl;
}

/*
* 排序函数
*/
void sort(int arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

/*
* 打印数组内容
*/
void priArr(int arr[],int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "\t";
	}
	cout <<endl;
}


int main() {

	int a = 10;
	int b = 20;
	swap(a, b);

	cout << b<<" " << a << endl;

	cout << "输入你想要累加到的数" << endl;
	cin >> a;
	add(a);

	//int arr[] = { 1,2,9,0,5,6,81,-8 };

	/*sort(arr, 8);
	priArr(arr, 8);*/

	int arr[3];
	cout << "输入三个数" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	sort(arr, 3);
	cout << "最大的数为：" << arr[2] << endl;


	return 0;
}