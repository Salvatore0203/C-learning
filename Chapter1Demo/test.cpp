/**
 *�ļ�����
 *��  ����
 *��  �ߣ�
 *ʱ  �䣺
 *��  Ȩ��
 */

 
 #include <iostream>
 #include <windows.h>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(){
	 //��ӡ��������֮��
	 SetConsoleTitle("ʾ������ӡ��������֮������ϸ��Ϣ");
	 
	 cout << fixed << setprecision(2);
	 /** �˺� */
	 double value_attack = 57.88;
	 /** �˺��ɳ�ֵ */
	 double value_attack_growth = 4.50;
	 /** �������� */
	 int value_attack_distance = 172;
	 /** ����ֵ */
	 double value_defence = 27.54;
	 /** ���׳ɳ�ֵ */
	 double value_defence_growth = 3.0;
	 /** ħ��*/
	 double value_defence_magic = 32.10;
	 /** ħ���ɳ�ֵ*/
	 double value_defence_magic_growth = 1.25;
	 /** ���� */
	 double value_lifeblood = 616.28;
	 /** �����ɳ�ֵ */
	 double value_lifeblood_growth = 84.25;\
	 /** �����ظ� */
	 double value_lifecrue = 7.84;
	 /** �����ظ�ֵ */
	 double value_lifecrue_growth = 0.50;
	 /** ���� */
	 double value_magic = 0.00;
	 /** �����ɳ�ֵ */
	 double value_magic_growth = 0.00;
     /** �����ظ� */
	 double value_magic_crue = 0.00;
     /** �����ظ�ֵ */
	 double value_magic_crue_growth = 0.00;
     /** ���� */
	 int value_walkspeed = 340;
     /** ��λ */
	 
     /** ��ȯ */
	 int value_pay = 450;
     /** ��� */
	 int value_gold = 1000;

 
	 cout << "���ƣ���������֮��������" << endl;
	 cout << "�˺�:" << value_attack << "(+" << value_attack_growth << ")\t"
		  << "��������:" << value_attack_distance << endl;
	 cout << "����:" << value_defence << "(+" << value_defence_growth << ")\t"
		  << "ħ��:" << value_defence_magic << "(+" << value_defence_magic_growth<< ")" <<endl;
	 cout << "����:" << value_lifeblood << "(+" << value_lifeblood_growth << ")\t"
		  << "�����ظ���" << value_lifecrue << "(+" << value_lifecrue_growth << ")" <<endl;
	 cout << "����:" << value_magic << "(+" << value_magic_growth << ")\t" 
		  << "�����ظ���" << value_magic_crue << "(+" << value_magic_crue_growth << ")" <<endl;
	 cout << "���٣�" << value_walkspeed <<"\t\t"<<"��λ���ϵ� ���� ��Ұ" <<endl;
	 cout << "��ȯ��" << value_pay <<"\t\t"<<"��ң�" << value_gold <<endl;
		

		int num;
		char ch1,ch2,ch3;
		cout <<"������һ�����֣�";
		cin >> num;   //scanf("%d",&num);
		cin >> ch1 >> ch2 >> ch3;
		//ch1 = cin.get();
		//ch2 = cin.get();
		//ch3 = cin.get();
		cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 <<endl;
		
		cout << "\a" <<endl;
	return 0;
 }