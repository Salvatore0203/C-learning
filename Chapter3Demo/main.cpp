#include <iostream>

using namespace std;

int main()
{

	//ʹ�ó����ж��û�������ַ��Ƿ��ǺϷ���Ӳ���̷�
	char pan = '\0';  //Ĭ��ֵ����Ϊ���ַ� �����ÿո�
	cout << "������һ���ַ��������ж��Ƿ�Ϸ��� ";
	cin >> pan;
	//'A' ~ 'Z'
	//if(pan >= 65 && <= 65 + 25)
	if(pan >= 'A' && pan <= 'Z')
	{
		cout << "�ǺϷ��̷���" << endl;
	}
	else
	{
		cout << "���ǺϷ��̷���" << endl;
	}


	/*

    //c�����У�0��ʾ�٣���0��ʾ��
    //c++�У������˲������� bool (java:boolean)
    bool flag = true ;   //false bool����
    cout << boolalpha;
    cout << "15 > 88 ��" << (15 > 88) << endl;
    cout << "16 < 99 ��" << (16 < 99) << endl;

    /*
    int num = 1024;
    //��ʾ���������
    num += 90;// <==>  num = num + 90;
    num *= 90;
    num /= 90;
    num -= 90;
    num %= 90;
    cout << num << endl;  */

    int choice = 'n';
    switch(choice){
    case 'A':
        cout << "1" << endl;
        break;
    case 'B':
        cout << "2" << endl;
        break;
    case 'C':
        cout << "3" << endl;
        break;
    case 'D':
        cout << "4" << endl;
        break;
    default:
        cout << "998" << endl;
    }


    return 0;

}
