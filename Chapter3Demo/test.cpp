#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
	//�ܼ�MM�Ĺ��ﳵ
	double price_louis = 35000.0;
	double price_hermes = 11044.5;
	double price_chanel = 1535.0;
	double zhekou = 0;  //�ۿ�
	double total = 0;   //�ܼ�
	total = price_louis + price_hermes + price_chanel;

    /*
	//plan A
	//����ܼ۴���5W�ʹ����ۣ�����ʹ����
	if(total >= 50000){
        zhekou = 0.7;
	}
	else{
        zhekou = 0.9;
	}
	total *= zhekou;
    */
    /*
	//plan B
	//��������������Ʒ��һ����Ʒ���۴���1000
	//����������Ʒ�ܽ�����5000���ۿ���Ϊ30%
	//����û���ۿ�
	if((total >= 5000)||(price_chanel >= 1000)||(price_hermes >= 1000)||(price_louis >= 1000))
        zhekou = 0.7;
	}
	else{
        zhekou = 1;
	}
	total *= zhekou;

	cout << "���ո��" << total << endl;
    */




	//���˽���Ŀ
	double flowerPrice; //���ĵ���
	//��ӡ����
	cout << "����ǰ�ĺڰ�������ȥ������֮��͸��һĨ���⣬���ǵ�ȼ�Ļ��...." << endl;
	cout << "С������СŮ���ͻ���СŮ�����⻨����Ǯ����" << endl;
    cout << "С���� : ";
    cin >> flowerPrice;
    if(flowerPrice >= 50000)
    {
        cout << "����ȥ��֤��" << endl;
    }
    else if((flowerPrice >= 5000)&&(flowerPrice < 50000))
    {
        cout << "��˵�ˣ�" <<endl;
    }
    else
    {
        cout << "������˵..." << endl;
    }
	return 0;
}
