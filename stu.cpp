#include <iostream>
using namespace  std;

/**
  1. ʹ��C++�����е�Ԥ������������cin��cout�����ʵ�ִӼ�����������£����㲢�������ĸ��·ݹ��ж����졣
2.�ú������طֱ�ʵ�����͡������͡�˫���������ݵĶ��η��ļ��㡣
 */


 /**
  * ��������ж϶���
  * @param year
  * @return
  */
int yyyy(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))return  29;
    else return  28;
}

int dayNum(int year, int mon) {
    int day31[] = { 1,3,5,7,8,10,12 };

    // �ж��Ƿ��Ƕ���
    if (mon == 2) {
        return yyyy(year);
    }

    // �ж�31���
    for (int i : day31) {
        if (mon == i)return 31;
        //�������30���
        else return 30;
    }

}

template<typename T>
void myTemp(T t) {
    cout << (t * t) << endl;
}


int main0() {
    //ʹ��C++�����е�Ԥ������������cin��cout�����ʵ�ִӼ�����������£����㲢�������ĸ��·ݹ��ж����졣
    int year = 2020;
    int mon = 1;
    cout << "���������ݣ�" << endl;
    cin >> year;
    cout << "\n��������·ݣ�" << endl;
    cin >> mon;

    cout << "���·ݹ�������Ϊ����" << dayNum(year, mon) << endl;

    myTemp(20.8);

    return 0;
}
