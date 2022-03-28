#include <iostream>
#include<string>
using namespace std;

void swap(int *arr,int t1,int t2) {
	int temp = arr[t1];
	arr[t1] = arr[t2];
	arr[t2] = temp;
}


/*
* 冒泡排序法
*/
void mySort(int arr[],int size) {

	//思路  挨个比较 交换
	// 因为是第一个和第二个比较 所以外层的从头开始遍历到倒数第二个
	for (int i = 0; i < size-1; i++)
	{
		// 内层的每一次的交换将最大或者最小的一位移动到最后一位 长度在外层的基础上减一
		for (int j =0; j <size-i-1; j++)
		{
			// 如果符合条件 交换
			if (arr[j]<arr[j+1])
			{
				swap(arr, j, j+1);
			}
		}
	}
	
}

void test1() {
	// 姓名
	string sName;
	//  年龄
	int sAge;

	cout << "请输入你的年龄" << endl;
	cin >> sAge;

	cout << "请输入你的姓名" << endl;
	cin >> sName;

	cout << "\n你的年龄为" << sAge << ",你的名字为" + sName
		<< "\n你的明年的年龄为" << (sAge + 1)<<endl;

}

void test2() {
	// 定义变量
	int num1;
	int num2;

	// 获取输入
	cout << "输入第一个你喜欢的数字" << endl;
	cin >> num1;

	cout << "输入第二个你喜欢的数字" << endl;
	cin >> num2;

	//打印

	cout << "第一个数减去第二个数的差为" << num1 - num2 << endl;
	cout << "第二个数减去第一个数的差为" << (num1 - num2)*-1 << endl;
}

void test3() {
	// 定义常量 长度
	 int const  size = 3;
	  

	int arr[size];
	cout << "请依次输入三个整数 并且按下回车键\n";
	int index = 0;
	while (index<size)
	{
		cin >> arr[index];
		index++;
	}
	//  使用冒泡排序法
	mySort(arr, size);
	// 取出最大值
	cout << "最大值为：：" << arr[0];
}

void test4() {
	int cc;
	cout << "输入你的成绩" << endl;
	cin >> cc;

	if (cc>=90)
	{
		cout << "你的成绩为： 优秀" << endl;
	}else if (cc >=70)
	{
		cout << "你的成绩为： 良好" << endl;
	}
	else if (cc >=60)
	{
		cout << "你的成绩为： 及格" << endl;
	}
	else if (cc >=0)
	{
		cout << "你的成绩为： 不及格" << endl;
	}
	
}

void omain()
{
   
	//test1();
	//test2();

	/*int arr[8] = { 1,2,3,8,9,1,452,0 };
	mysort(arr,8);

	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << endl;
	}*/

	//test3();
	
	test4();

}
