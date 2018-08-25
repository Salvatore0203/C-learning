#include <iostream>

using namespace std;

int main()
{
    /**
    int age;
    for(;;){
        cout << "������������䣺";
        cin >> age;
        if(age < 0){
            cout << "��������ݷǷ�������" << endl;
            break;
        }

        //break�����������cout�����
        cout << "����ǿ���˳���Ĵ��룡����" << endl;
    }
    */


    //����53����Ʒ�۸���Ϸ
    //���ݲµĴ������費ͬ�Ľ���
    //1�Σ�iphone8s PLUS ������
    //2-3�Σ�С���ƶ���Դ
    //5�����ڣ�VR�۾�


    const double PRICE = 5000.0;  //Ҫ�µ���Ʒ�۸񣬿������������
    double guessPrice ;          //�û�����Ʒ�ļ۸�
    int guessCount = 0;              //�û��²�Ĵ���
    //��Ϸʵ���Ͼ���һ����ѭ��
    for(;;){
            guessCount++;           //����������¼�µĴ���,����Ҫ��0ֵ
            cout << "������������Ʒ�ļ۸�:" << endl;
            cin >> guessPrice;
            if(guessPrice > PRICE){
                cout << "���ˣ�" << endl;
            }else if(guessPrice < PRICE){
                cout << "С�ˣ�" << endl;
            }else{
                cout << "��ϲ���¶�����" << endl;
                break;
            }
        }

        if(guessCount == 1){
            cout << "����53�������˴󽱣�iphone8s plus ������" << endl;
            }
        else if(guessCount >=2 && guessCount <=3)
            {
            cout << "����53�������˶��Ƚ���С���ƶ���Դ��" << endl;
            }
        else if(guessCount >=4 && guessCount<=5){
            cout << "����53�����������Ƚ���VR�۾���" << endl;
            }
        else{
            cout << "����53�������˽����˰�ο����" << endl;
            }



















    /**
    //��ʹ��ѭ����ӡ1997��7�µ�����
    //��֪��1997����7��1�գ����ڶ�������ۻع�ٹ�ͬ��
    //        if(i + dayOfWeek -1)
    }1.�������
    const int day = 31;   //����һ����31��
    int dayOfWeek = 2 ;   //���µ�һ�����ܶ�
    cout << "һ\t��\t��\t��\t��\t��\t��\t" << endl;
    //��ӡ\t �ܼ�-1
    for(int i = 0 ; i < dayOfWeek -1 ; i++){
        cout << '\t';
    }
    //��ӡ����
    for(int i = 1 ; i <= day ; i++){
        cout << i ;
        if((i + dayOfWeek -1)%7 == 0){
            cout << '\n';
        }else{
            cout << '\t';
        }
    }
    cout <<        if(i + dayOfWeek -1)
    } endl;
    //2.��дѭ��
    //3.��дѭ���弰ѭ�����ڵ�����

    */
    return 0;
}
