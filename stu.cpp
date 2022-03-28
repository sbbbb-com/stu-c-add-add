#include <iostream>
using namespace  std;

/**
  1. 使用C++语言中的预定义的流类对象cin和cout，编程实现从键盘输入年和月，计算并输出该年的该月份共有多少天。
2.用函数重载分别实现整型、长整型、双精度型数据的二次方的计算。
 */


 /**
  * 根据年份判断二月
  * @param year
  * @return
  */
int yyyy(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))return  29;
    else return  28;
}

int dayNum(int year, int mon) {
    int day31[] = { 1,3,5,7,8,10,12 };

    // 判断是否是二月
    if (mon == 2) {
        return yyyy(year);
    }

    // 判断31天的
    for (int i : day31) {
        if (mon == i)return 31;
        //否则就是30天的
        else return 30;
    }

}

template<typename T>
void myTemp(T t) {
    cout << (t * t) << endl;
}


int main0() {
    //使用C++语言中的预定义的流类对象cin和cout，编程实现从键盘输入年和月，计算并输出该年的该月份共有多少天。
    int year = 2020;
    int mon = 1;
    cout << "输入你的年份！" << endl;
    cin >> year;
    cout << "\n输入你的月份！" << endl;
    cin >> mon;

    cout << "该月份共有天数为：：" << dayNum(year, mon) << endl;

    myTemp(20.8);

    return 0;
}
