#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>
#include <cstdlib>

using namespace std;

int main()
{
    int choice,temp1,temp2,temp3,temp4,temp5;            //��ʱ����
    //1.Ϊ��Ůȡ����
    /** ���׵����� */
    string value_father_name;
    /** Ů�������� */
    string value_daughter_name;
    /** Ů���������·� */
    int value_birth_month;
    /** Ů������������ */
    int value_birth_date;
    /** Ů�������� */
    string value_daughter_constell;
    array<int,5> value_array_baseinfos;
    /** ������������� */
    array<string,5> value_array_baseinfos_names = {"����","����","����","����","����"};
    int value_daughter_gold = 500;
    /** ������ά���� */
    string constell_names[12][2]={
        {"ɽ����","ˮƿ��"},  //һ�·�
        {"ˮƿ��","˫����"},  //���·�
        {"˫����","������"},  //���·�
        {"������","��ţ��"},  //���·�
        {"��ţ��","˫����"},  //���·�
        {"˫����","��з��"},  //���·�
        {"��з��","ʨ����"},  //���·�
        {"ʨ����","��Ů��"},  //���·�
        {"��Ů��","�����"},  //���·�
        {"�����","��Ы��"},  //ʮ�·�
        {"��Ы��","������"},  //ʮһ��
        {"������","ɽ����"},  //ʮ����
    };

    cout << "���׵�������";
    cin >> value_father_name;
    cout << "Ů����������";
    cin >> value_daughter_name;
    cout << "Ů�������գ�MM DD����";
    cin >> value_birth_month >> value_birth_date;
    /** ���·ݵĿ��������ڣ����������һ�� */
    int constell_dates[]{20,19,21,20,21,22,23,23,23,24,23,22};
    value_daughter_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];


    cout << "Ů������Ϣ��" << endl;
    cout << "������" << value_daughter_name << endl;
    cout << "���գ�1959-" << value_birth_month << '-' << value_birth_date << endl;
    cout << "������" << value_daughter_constell << endl;





    //2.ΪŮ��¼���ʼ��Ϣ�����գ�������
    if(value_daughter_constell == "������"){
        value_array_baseinfos[0] = 80;
        value_array_baseinfos[1] = 15;
        value_array_baseinfos[2] = 15;
        value_array_baseinfos[3] = 11;
        value_array_baseinfos[4] = 21;
    }

    for(int i=0 ; i<5 ; i++){
        cout << value_array_baseinfos[i] << '\t';
    }
    cout << endl;
    //  ����Ů����������������Ϸ�Ļ������������������������������¡����ʣ�


    //3.��ʼ��Ϸ��ѭ��
    //��Ϸ��1659��6�¿�ʼ
    for(int year=1659 ; year < 1659+7 ; year++){
        for(int month = (year == 1659)?6:1 ; month<13 ; month++){
            //�жϱ����Ƿ���Ů��������
            if(month == value_birth_month){
                cout << "������" << value_daughter_name << "������" << endl;
                //�����û�����������ж�
            }
            //��ʾ��Ϸ���˵�
            cout << "\n1.�鿴״̬\n2.�����г�\n3.����̸��\n4.�浵\n5.����" << endl;
            cin >> choice;
            switch(choice){
            case 1://�鿴״̬
                cout << "Ů������Ϣ��" << endl;
                cout << "������" << value_daughter_name << endl;
                cout << "���գ�1659-" << value_birth_month << '-' << value_birth_date << endl;
                cout << "������" << value_daughter_constell << endl;
                cout << "��Ǯ:" << value_daughter_gold << endl;
                //��ӡ��������
                cout << left;
                for(int i=0 ; i<5 ; i++){
                    cout << value_array_baseinfos_names[i] << ':' << setw(6) << value_array_baseinfos[i] ;
                    //����ʵ�ķ��������
                    int solidCount = value_array_baseinfos[i] / 10;
                    for(int j=0 ; j<10 ; j++){
                        if(j <= solidCount){
                            cout << "��";
                        }else{
                            cout << "��";
                        }                    }
                        cout << endl;
                }
                break;
            case 2:{   //�����г�:һ������ల�������г�
                string month_parts[] = {"��Ѯ","��Ѯ","��Ѯ"};
                for(int i=0 ; i<3 ; i++){
                    cout << "--" << month << "�� --" << month_parts[i] << endl;
                    cout << "1.ѧϰ����\n2.��˽��\n3.ѧϰ��\n4.��������\n5.��׬Ǯ" << endl;
                    cout << "��ѡ��:" ;
                    cin >> choice;
                    //����ע��:��Ҫ�ж�ûǮ�������ǿ�ƴ�
                    srand(time(NULL));
                    if(choice == 1)     //��������������
                    {
                        value_array_baseinfos[0] += temp1 = rand() % 10;
                        value_array_baseinfos[2] += temp2 = rand() % 10;
                        value_daughter_gold -= temp3 = rand() % 51;
                        cout << "ѧϰ���޼ɺð���������" << endl;
                        cout << "��������" << temp1 << endl;
                        cout << "��������" << temp2 << endl;
                        cout << "��Ǯ����" << temp3 << endl;
                    }else if(choice == 5){
                        value_daughter_gold += temp3 = rand() % 101;
                        cout << "ͨ��Ŭ���򹤣�׬����" << temp3 << "�����" << endl;
                    }
                                        }
                    }
                    break;
                }

    }
    //4.���ݸ���������ж���Ϸ���
    /**
    Ů��������2000+
    ����������1000-2000
    Ů����������1600-1800
    �ʼ�ѧԺ�ܲ� ����1200-1600
    */

    }
    return 0;
}
