/**
 *�ļ���������Բ�������������
 *��  ����ѧϰdemo2
 *��  �ߣ�Salvatore
 *ʱ  �䣺13.8.13
 *��  Ȩ��
 */

 #include <cmath>
 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 int main()
 {
	 //����cout����ʾ����
	 //float���ʺ�չʾ���������֣����ܻ���ʧ����ľ���
	 //sizeof ���������������͵ĳ��� �� c++��Ĭ��С��������double ������С����β��f����float����
	 
	 //1.ǿ����С���ķ�ʽ��ʾ
	 //cout << fixed ;
	
	
	
	//2.������ʾ�ľ���
	//cout << setprecision(1);
	 
	 cout << setw(10) << "|" << 3.14 << "|" <<endl; //setw() = set width ���ÿ��
	 
	 //���double��������
	 double doubleNum = 10.0 / 3.0;
	 cout << doubleNum * 10000000 << endl;
    
	
	
	
	//��֪Բ����İ뾶�͸ߣ���Բ�������������
    const float PI = 3.14f;
    //������һ��float���͵ĳ�����
    float radius = 4.5f;
    float height = 90.0f;
    double volume = PI * pow(radius,2) * height;
    cout << "����ǣ�" << volume << endl;
	
	int num1 = 5 , num2 = 2;
	num1 = num2++ - (--num2);
	cout << num1 << '\t' << num2 << endl;
	
	//�����������ͱ���
	int num3 = 5,num4 = 2;
	//����4��double���ͱ���������ż�����
	
	
	double num5 = (double)num3 / num4;
	cout << num5 << endl;
	
	double result1 = num3 / num4;   //����
	double result2 = num3 % num4;   //ȡģ
	double result3 = num3++;    	//����
	double result4 = --num2;		//ǰ��
	cout << "num3 / num4 = " << result1 << '\n'
		 << "num3 % num4 = " << result2 << '\n'
		 << "num3++ = " << result3 << '\n' 
		 << "--num3 = " << result4 << endl;
		 

	return 0;
	
 }
