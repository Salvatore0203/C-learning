#include <iostream>
#include <vector>
#include <algorithm> /*������˼���㷨*/

using namespace std;

int main()
{
    /*
    //��ά����Ķ�̬��ֵ
	//ʹ�ö�ά�����ӡ�ɼ���3*3
	string stu_names[]{"����","����","�ŷ�"};
	string course_names[]{"����","��ѧ","Ӣ��"};
	const int ROW = 3;          //��
	const int COL = 3;          //��
	double scores[ROW][COL];            //�����ά����

	for(int i=0 ; i<ROW ; i++){         //���������鸳ֵ
        for(int j=0 ; j<COL ; j++){
            cout << stu_names[i] << "��" << course_names[j] << "�ɼ�:" ;
            cin >> scores[i][j];
        }
	}

	//��ӡ���

	cout << "\t";
	for(int i=0 ; i<COL ; i++){
        cout << course_names[i] << '\t';        //��һ��  ���� ��ѧ Ӣ��
	}
	cout << endl;
	for(int i=0 ; i<ROW ; i++){                 //һ��һ�н��д��������겢����
            cout <<stu_names[i] << "\t" ;
            for(int j=0 ;j<COL ; j++){
                cout << scores[i][j] << '\t';
            }
            cout << endl;
	}

    */





	//��������Ʒ����������������Vector(����)

	//Vector �� ���ٵĶ�̬�����ڴ�����飨������ģ���ࣩ
	//�ص㣺1.��̬���飬���������н׶����ó���
	//      2.��������Ŀ���������ʽ
	//      3.���Բ����ɾ��Ԫ��

	//����ͳ�ʼ��(����)
	//vector<double> vec1;              ֻ�ܴ��double��������
	//vector<string> vec2(5);           ���Դ��double��string���ͣ���ֻ�ܷ�5��
	//vector<int> vec3(20,998);         ֻ�ܷ�int������Ĭ��20��Ԫ�أ�ÿ��Ԫ�ض���998

    //ͷ�ļ���Ҫ  #include <vector>

    //  clear() :�Ƴ���������������
    //  empty() :�ж������Ƿ�Ϊ��
    //  size()  :����������Ԫ�صĸ���
    //  [index]��at(index)   :��������Ϊindex��Ԫ��
    //  orase(pos)  :ɾ��posλ�ô�������
    //  orase(beg,end)  :ɾ��(beg��end)֮�������
    //  front() �����ص�һ��Ԫ��
    //  insert(pos.elem)    :��posλ�ô�����һ��Ԫ��
    //  pop_back()  :ɾ�����һ��Ԫ��
    //  push_back(elem) ��������ĩβ����һ��Ԫ��
    //  resize(num)    :�������������Ĵ�С
    //  begin()��end()   :����������λԪ�صĵ�����



    /*
    vector<double> vecDouble = {98.5,67.9,43.6,32.9};
    //��Vector��������
    vecDouble.push_back(100.8);         //�������β������һ������
    //����1����ӡ��
    for(int i=0 ; i<vecDouble.size() ; i++){
            cout << vecDouble[i] << endl;
    }
    */
    //���淽������רҵ
    //Vector��ͨ�ñ���������ʹ�õ�������iterator
    //�������Ļ����÷���
    vector<double>::iterator it;        //�õ�����������-ʵ������һ��ָ�����
    //it.begin() �ӵ�һ��Ԫ�ؿ�ʼ����
    for(it = vecDouble.begin(); it != vecDouble.end(); ++it){
        cout << *it << endl;            //*itȡ����ĵ�ַ�ҵ�������
    }

    //����
    sort(vecDouble.begin(),vecDouble.end());
    reverse(vecDouble.begin(),vecDouble.end());
    for(it = vecDouble.begin() ; it != vecDouble.end() ; ++it){
        cout << *it << endl;
    }



}
