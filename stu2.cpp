#include<iostream>
using namespace std;

void  fun(double dFValue, double& dCValue) {
	//[C = 5 / 9(F - 32)]
	double temp = (5.0 / 9.0) * (dFValue - 32);

	dCValue = temp;
}

void run1() {
	double temp = 1;

	cout << "�û�����һ�������¶ȣ����ú���ת���������������Ӧ�������¶�\n";
	cin >> temp;

	fun(temp, temp);

	cout << "ת�����ֵ" << temp;
}

/*
* ����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool Is_prime(int num) �����num��������������true�����򷵻�false��

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
������һ������Print��������һ������n������Ϊ���Σ���ӡС�ڵ���n������������
���û�û��ָ��n��ֵʱ��Ĭ�ϴ�ӡ100���ڵ�����������
*/
void Print(int num = 100) {
	for (int i = 2; i < num; i++)
	{
		if (Is_prime(i))
		{
			cout << i << "������" << endl;
		}
	}
}

/*
*�������У���ʾ�û�����һ������n�����û�����n����0ʱ��
�ȵ���Print��Ȼ�������ʾ�û�����һ������n��
ֱ���û�����0ʱ���˳�����
*/

void run2() {

	int temp = 0;

	while (true)
	{
		cout << "������ϲ��������" << endl;
		
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
			cout << "�����벻�Ϸ�������Ҫ�����������";
		}

	}
}


int main01() {

	// run1();

	/*
	for (int i = 0; i < 100; i++)
	{
		cout << "���֣�" << i << "�Ƿ���" << Is_prime(i) << endl;
	}*/
	
	//run2();

	string  s, t;



	return 0;
}