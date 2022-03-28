#include<iostream>
using namespace std;

void  fun(double dFValue, double& dCValue) {
	//[C = 5 / 9(F - 32)]
	double temp = (5.0 / 9.0) * (dFValue - 32);

	dCValue = temp;
}

void run1() {
	double temp = 1;

	cout << "用户输入一个华氏温度，调用函数转换后，主函数输出相应的摄氏温度\n";
	cin >> temp;

	fun(temp, temp);

	cout << "转换后的值" << temp;
}

/*
* 定义一个函数，判断一个整数是否为素数，使用如下函数头：
bool Is_prime(int num) ，如果num是素数函数返回true，否则返回false。

*/

bool Is_prime(int num) {
	if (num < 2)return false;
	for (int i = 2; i < num; i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}

	return true;
}

/*
* 
定义另一个函数Print，函数有一个参数n，类型为整形，打印小于等于n的所有素数，
当用户没有指定n的值时，默认打印100以内的所有素数。
*/
void Print(int num = 100) {
	for (int i = 2; i < num; i++)
	{
		if (Is_prime(i))
		{
			cout << i << "是素数" << endl;
		}
	}
}

/*
*主函数中，提示用户输入一个整数n，当用户输入n大于0时，
先调用Print，然后继续提示用户输入一个整数n；
直到用户输入0时，退出程序。
*/

void run2() {

	int temp = 0;

	while (true)
	{
		cout << "输入你喜欢的数字" << endl;
		
		cin >> temp;
		if (temp == 0)
		{
			return;

		}

		if (temp>0)
		{
			Print(temp);
		}
		else {
			cout << "你输入不合法，你需要输入个整数！";
		}

	}
}


int main01() {

	// run1();

	/*
	for (int i = 0; i < 100; i++)
	{
		cout << "数字：" << i << "是否是" << Is_prime(i) << endl;
	}*/
	
	//run2();

	string  s, t;



	return 0;
}