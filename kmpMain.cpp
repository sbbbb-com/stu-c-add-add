#include<string>
#include<iostream>

using namespace std;

void Getnext(int next[], string t)
{
    int j = 0, k = -1;
    next[0] = -1;
    while (j < t.length - 1)
    {
        if (k == -1 || t[j] == t[k])
        {
            j++; k++;
            next[j] = k;
        }
        else k = next[k];//���������δ��������ĵط��������һ���Ӿ��ܿ�������ô�������ҳƺ���һ������
    }
}



int main1() {

	string mainString = "ahjkadhsjdsdfhjksdhjkjkhadsfg";
	string fString = "hjkjkha";


	cout << fString << endl;

	return 0;
}