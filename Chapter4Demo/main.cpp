#include <iostream>

using namespace std;

int main()
{
    //ʹ��ѭ��ʵ��ʮ�����������������˳�ϵͳ
    string password;  //����
    int i = 0;          //ѭ����������������ѭ���Ĵ���
    while(i < 3)
    {
        cout  << "���������룺"  << endl;
        cin >> password;
        cout << "������������ǣ�" << password << endl;
        i++;
        //�ж��û�����Ķ��Ƿ���ȷ
        if(password != "12345678")
        {
            if( i == 3){
                cout << "ϵͳ�����������ϵͳ�Զ��˳�....." << endl;
            }
            else{
                cout << "���ٴ�����" << endl;
            }
        }else{
            cout << "������ȷ��ϵͳ���ڽ����̨��....." << endl;
            return 0;
        }
    }



    /*
    int i = 0;
    while(i <= 10){
        cout << i << endl;
        i++;
    }

    return 0;
    */

    /*
    //ʹ��ѭ������1-100���ۼӺ�
    //��Ҫѭ������
    //��Ҫ�ۼӺͱ���

    int num = 1;   //��������ѭ�������ı���
    int sum = 0;   //���������ۼӺ͵ı���
    while(num <= 100){
        //cout << num << endl;
        sum = sum + num;  //�ۼ�1-100��ֵ����������ڱ���sum��
        //Ϊ����ѭ���˳���Ҫ��ѭ���������и���
        num++;
    }
    cout << "1-100���ۼӺ�Ϊ��" << sum << endl;
    */
    return 0;
}
