#include <iostream>
#include <climits>
#include <iomanip>


using namespace std;

int main()
{
    /*typedef char wode_char;
    wode_char name = 'a';
    //size_t abc = 19;
    //��ӡint���͵����ֵ
    //���ǿ�char�������������ͬ�������ƻ���wode_char
    //typedef�Ĺ��ܾ��ǰѶ������͸�һ�����֣����ܲ���
    
    cout << INT_MAX << endl;
    return 0;
	*/
	
	cout << fixed << setprecision(2);   //�������Թ̶���ʽ��ʾ������С�������λ���ȱ�ʾ  floatֻ���ĸ��ֽڻᶪʧ���ȣ�double�߱���
										//printf("%.2lf",xxx);
	
	//��ʾ�����ȸ����ͺ�˫���ȸ����;�������
	float numFloat = 10/3.0;
	double numDouble = 10/3.0;
	cout << "numFloat =" << numFloat * 1000000 << endl;
	cout << "numDouble =" << numDouble * 1000000 << endl;
	
	//string���ַ������� typedef basic_string(char) string;��ԭ����Ϊstring
	string str = "��ã�����hxy";
	cout << str <<endl;
	
	
	//����ȡ��\t����
	double attack1 = 272;
	double attack2 = 250;
	double attack3 =240;
	
	cout << left; //�����
	cout << setfill('_'); //��϶���»�����䣬Ĭ��Ϊ�ո����
	cout << setw(8) << attack1 <<
			setw(8) << attack2 <<
			setw(8) << attack3 << endl;
	
	
	
	
	
	return 0;
}


