#include <iostream>

using namespace std;

int main()
{   /*
    //                              ��ָ��

    //��ָ�루null pointer������ָ�벻ָ���κζ�����ʹ��һ��ָ��֮ǰ�����ȼ���Ƿ�Ϊ��
    //double ptr_double;        //Ұָ�룬��Σ�գ�����ĵ���Ҫ�ļ�
    double* ptr_double = nullptr;       //�޳�ֵ����ø�ֵһ����ֵ
    cout << ptr_double << endl;

    //void*ָ�룺һ�������ָ�����ͣ����Դ���������ĵ�ַ
    //void*ָ��ָ���������ʲô�����޷�ȷ��
    double num = 3.14;
    double* ptr_num1 = &num;
    void* ptr_num2 = &num;
    cout << boolalpha;
    cout <<(ptr_num1 == ptr_num2) << endl;

    //*ptr_num2 = 1111;     ������Ϊvoid����������޷�ȷ��
    //����void*ָ��һ�������ͱ��ָ����бȽϣ���Ϊ�������������������߸�ֵ�����void*ָ��
    //ʹ�÷�Χ��խ


    //�ܽ᣺ָ�����һ��������ֻ����������洢���Ƕ�����ڴ��ַ
    //      �洢��ַ����ָ���������
    //      ָ��������Ը�ֵ��ָ��ָ���ڳ���ִ���п��Ըı�




    //                      ���� reference

    //���ã�Ϊ��������һ������
    //int int_value = 1024
    //const int& refValue = 1024;       ���������ã���һ��const�Ϳ���
    //int& refValue = int_value;        int_value�ı�����refValue(����)
    //����֮ǰ�����ʼ������
    //���ָ��*����һЩ����ָ���������



    //                      ָ�������
    //���鱾����ǵ�ַ
    //���顪������������������׵�ַ
    double score[]{11,22,33,44,55};
    double* ptr_score = score;          //�����ַ��ֵ��ָ�����ptr_score

    cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl; //score = double[5]
    cout << ptr_score[3] << endl;


    //�����i+1��Ԫ�ؿ��Ա�ʾΪ��
    //��i+1��Ԫ�صĵ�ַ��&num[i+1]����num+i+1
    //��i+1��Ԫ�ص�ֵ��num[i+1]����*(num+i+1)

    //Ϊָ�������ָ�븳ֵ��
    //int* ptr_num = num ���� int* ptr_num = &num[0]

    //ָ���������ָ������Ԫ��
    //int* ptr_num = &num[4]����int* ptr_num = num+4

    //�мǣ������������ǵ�ַ������Ԫ����ֵ������





    //int* ptr_int = new int        �����ڴ�
    //delete ptr_int;               �ͷ��ڴ�
    //1.�����н׶�Ϊһ��intֵ����δ�������ڴ�

    //int* p = new int  p����ջ�� �ڶ���������һ��int�Ϳռ䣨4�ֽڿռ䣩



    int num[5];
    int* nums = new int[5];     //��̬�����ڴ�
    cout << sizeof(num) << '\t' << sizeof(nums) <<endl;
    delete [] nums;             //�ͷ���������


    //������ڴ����

    //ջ����stack
    //�ɱ������Զ������ͷţ�һ���ź����Ĳ���ֵ���ֲ�������ֵ��
    //������ʽ�������ݽṹ�е�ջ-�Ƚ����

    //������heap
    //һ���ɳ���Ա���з����ͷţ�������Ա���Ƿţ��������ʱ�ɲ���ϵͳ���ա���Ҫ�ڴ����
    //����ϵͳû���ջ���û���ͷ�delete�ͻ�  �ڴ�й©
    //�ڴ�й©��û�б�ָ��ָ���������ϳ����������˹���˳�����
    //ע�⣺�����ݽṹ�еĶ��������£����䷽ʽ��������

    //ȫ��������̬��-static��
    //ȫ�ֱ����;�̬�����洢��һ���
    //�����������ϵͳ�ͷ�

    //���ֳ�����
    //�����ַ����ͷ���������������ϵͳ�ͷ�

    //���������
    //��ź�����Ķ����ƴ���



    int num = 90;       //num����ջ�����Ⱥ��ұߴ��ڳ�����
    double d_nums[6] = {3,4,5,6};       //ͬ������ջ�����ұߵ�ֵ���ڳ�����
    double * darray = new double[10];   //���ջ�����ұ߶����������ĵ�ַ��������ߵ�ָ�������







    int arrays[]{15,23,30,40,50};
    int* p_arrays = arrays;

    for(int i = 0 ; i < 5 ; i++){
        cout << *(p_arrays + i) << endl;        //ָ��δ�ƶ����ϰ�ȫ
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << *p_arrays++ << endl;            //ָ���ƶ��ˣ��ٴ�ѭ���Ͳ�����ЩԪ����
    }





    //��������
    //����ָ������
    int arrays[]{15,23,30,40,50,6};
    int* ptr_start = arrays;        //ָ���һ��Ԫ��
    int* ptr_end = arrays+5;        //ָ�����һ��Ԫ��
    int temp;

    while(ptr_start < ptr_end){
        temp = *ptr_start;
        *ptr_start = *ptr_end;
        *ptr_end = temp;
        ptr_start++;
        ptr_end--;
    }
    for(int i=0 ; i<6 ; i++){
        cout << arrays[i] << endl;
    }

    */





    //��ά������ָ��
    //ʹ��ָ����������ά����
    int arrays[5][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };
    int (*p2)[3] = arrays;
    //int (*p2)[3] = new int[5][3];       �Ѷ�ά���������ָ�봦������ ��ά
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << p2[i][j] << ',' ;
          //cout << *((*p2 + i) + j) << ',' ;
        }
        cout << endl;
    }
    cout << &arrays[1][0] << endl;
    for(int i=0 ; i<5 ; i++){
        cout << p2 + i << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    int (*p3)[5] = new int[3][5];
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<5 ; j++){
            cout << (p3+i)+j << ',';
        }
        cout << endl;
    }
    delete [] p3;

    /*
    char ch = 'a';
    char* ptr_char = &ch;
    cout << (void*)ptr_char << '\t' << *ptr_char << endl;
    //��ָ����char�����Զ���ӡ�ַ�������
    //char��ָ����C/C++��Ĭ��Ϊ�ַ���
    //���Ի��char��ָ�����ַ�����ӡ
    //�����Ҫ��ӡ��ַ��ֻ��Ҫ��char�ͼ�һ��void*���������ͣ�







    /*
    double num = 1024.5;
    //����һ��ָ�룬ָ��num����
    double* ptr_num = &num;
    cout << "ptr_num�ĵ�ַ��" << ptr_num << "\t" << &num << endl;
    cout << "ptr_numָ��ռ��ֵΪ��" << *ptr_num << endl;
    */
    return 0;
}
