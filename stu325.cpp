#include<iostream>
#include<string>
using namespace std;
/*
* 1����������������int iNum1=10��int iNum2=20������дһ������������������������ֵ�����������������������������
2�����������У���ʾ����n����д������1+2+3+��+n��ֵ��
3�����������У���ʾ��������������д���������������� ����������������� ���������������
 
*/

/*
* ��������
*/
void swap(int &a, int & b) {
	int temp = a;
	a = b;
	b = temp;
}

/*
* �ۼ�
*/
void add(int n) {
	int temp = 0;
	for (int i = 1; i < n+1; i++)
	{
		temp += i;
	}
	cout << "�ۼӵ�ֵΪ" << temp << endl;
}

/*
* ������
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
* ��ӡ��������
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

	cout << "��������Ҫ�ۼӵ�����" << endl;
	cin >> a;
	add(a);

	//int arr[] = { 1,2,9,0,5,6,81,-8 };

	/*sort(arr, 8);
	priArr(arr, 8);*/

	int arr[3];
	cout << "����������" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	sort(arr, 3);
	cout << "������Ϊ��" << arr[2] << endl;


	return 0;
}