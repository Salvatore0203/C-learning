#include <iostream>

using namespace std;

int main()
{/**
    //��̬�شӼ���¼����Ϣ����ֵ
    const int N = 5;
    int nums[N];
    for(int i = 0 ; i < N ; i++){
            cout << "�������" << (i+1) << "��Ԫ��:";
            cin >> nums[i];
    }
    //��ӡ����������鸳ֵ��Ϣ
    for(int i = 0;i < N; i++){
        cout << nums[i] << endl;
    }

    int N = 5; //���鳤��(�ɳ����ɱ�������������const int N=5 ;�мǣ�C��ֻ�ܳ�����C++������)
    int nums[N];
    cout << "���鳤��Ϊ��" << sizeof(nums) / sizeof(int) << endl;
    for(int i=0 ; i< sizeof(nums) / sizeof(int) ; i++){
        cout << "�������" << i+1 << "������Ԫ�أ�" ;
        cin >> nums[i];
    }
    //�ֶ�����5������Ԫ��
    //�������Ǵ�ӡ���������Ԫ��
    for(int i=0 ; i<5 ; i++){
        cout << nums[i] << endl;
    }
*/


    //��һ�����У� 8��4��2��1��23��344��12
    //1.ѭ��������е�ֵ
    //2.������Ԫ�صĺ��Լ�ƽ��ֵ
    int nums[]{8,4,2,1,23,344,12};
    int numsLen = sizeof(nums) / sizeof(int);    //���������ĳ���
    int sum = 0;
    for(int i=0 ; i<numsLen ; i++){
        cout << nums[i] << '\t';
    }
    cout << endl;
    cout << endl;
    //�ۼӲ���
    for(int i=0 ; i<numsLen ; i++){
        sum += nums[i];
    }
    cout<< "���еĺ�Ϊ:" << sum << '\t' << "���к͵�ƽ��ֵΪ��" << sum / numsLen << endl;


    //EX:
    //1.�������е����ֵ����Сֵ
    //2.����һ���������飬��ֵ���������������ż������
    //3.��������������������е��±꣬û���ҵ����±�Ϊ-1




    //�������е����ֵ����Сֵ  - ����̨��

    int max = nums[0];      //�����һ��Ԫ�������ֵ
    int min = nums[0];      //�ټ����һ��Ԫ������Сֵ
    int maxIndex = 0;       //���ֵ���±�
    int minIndex = 0;       //��Сֵ���±�
    for(int i=1 ; i< numsLen ; i++){
        if(nums[i]>max){
            max = nums[i];      //�������ֵ
            maxIndex = i ;      //��¼���ֵ���±�
        }
        if(nums[i]<min){
            min = nums[i];      //������Сֵ
            minIndex = i;       //��¼��Сֵ���±�
        }
    }
    cout << "���ֵ�ǣ�" << max << '/' << nums[maxIndex] << endl;
    cout << "���ֵ���±��ǣ�" << maxIndex << endl;
    cout << "��Сֵ�ǣ�" << min << '/' << nums[minIndex] << endl;
    cout << "��Сֵ���±��ǣ�" << minIndex << endl;


    //2.�������������ż������
    int jCount = 0,oCount = 0;
    for(int i=0 ; i<numsLen ; i++){
        if(nums[i]%2 == 0){
            oCount++;
        }else{
            jCount++;
        }
    }
    cout << "���������ǣ�" << jCount << "\t" << "ż�������ǣ�" << oCount << endl;

    //3.��������������������е��±꣬û���ҵ��±����±�Ϊ-1
    int searNum;                //�û���Ҫ���ҵ�����
    int searIndex = -1;              //�û���Ҫ�������ֵ��±�
    cout << "��������Ҫ���ҵ�����:";
    cin >> searNum ;
    for(int i=0 ; i<numsLen ; i++){
            if(nums[i] == searNum){
                searIndex = i;      //��¼���ҵ�Ԫ�ص��±�
                break;
            }
    }
    if(searIndex == -1){
            cout << "û���ҵ������֣���" << endl;
        }
    cout << "�������������е��±�Ϊ��" << searIndex << endl;

    //ð������
    //1.��һ�ֱȽϵĴ�����������ܳ���-1
    //2.��һ�ֱ���һ�ֱȽϵĴ�������һ��

    int nums[] = {15,25,90,23,9};
    int temp;               //����һ���Ĵ������������
    //���ѭ�����ƱȽϵĴ���(���ɣ��ܳ���numsLen-1)
    for(int i=0 ; i<5 ; i++){
        //�ڲ�ѭ�����ƱȽϵĴ���(���ɣ��ܱ����ѭ�����ƴ�����һ��)
        for(int j=0 ; j<4-i ; j++){
            if(nums[j]<nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];        //����Ԫ�ش�С����������
                nums[j+1] = temp;
            }
        }
        }
    }

}
