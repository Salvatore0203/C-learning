#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //ʹ��ѭ��ģ��ȭ�ʶ�ս
    /** �����ֵ�HP */
    int hp1 =100;
    /** ��ti����HP*/
    int hp2 =100;

    int attack1 = 0;  //����Ĺ�����
    int attack2 = 0;  //���S���Ĺ�����
    int randNum;      //���������ҹ����Ⱥ�����������

    srand(time(NULL));

    while((hp1 >= 0)&&(hp2 >= 0))  //��˫������hpʱ����ս��
    {

    //1.ģ����ҳ��У����Բ��������������/ż���ķ�ʽ������˭�Ƚ��й���
    //����-�����ȣ�ż��-��ti����
    randNum = rand();
    if(randNum % 2 == 1){//����
        attack1 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));
        attack2 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));

        hp2 -= attack1;       //�����Ѫ
        hp1 -= attack2;
    }else{//ż��
        attack2 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));
        attack1 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));

        hp1 -= attack2;
        hp2 -= attack1;   //�����Ѫ
    }
    }
    //2.��ӡ��ս�����ս��
    cout << "������HP��" << hp1 << endl;
    cout << "��ti��HP��" << hp2 << endl;

    return 0;















    /*
    //ĳ��˫ʮһ2.15��Ľ��׶�Ϊ800�ڣ�ÿ�����25%
    //�ʣ������ٶ����꽻�׶��ܴﵽ2000�ڣ�
    //1��Ѱ��ѭ����������ֵ���жϡ�����
    //�� ���׶�    ������
    double money = 800.0;
    int year = 2015;
    while(money < 2000)
    {
        year++;
        money = money * (1 + 0.25);
    }
    cout << "��" << year << "�꣬Ӫҵ��ﵽ" << money << "��!" << endl;
    */
}
