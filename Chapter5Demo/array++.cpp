#include <iostream>

using namespace std;

int main()
{
  /**
                    ð�����������ʽ

            //ð������
            //1.��һ�ֱȽϵĴ�����������ܳ���-1
            //2.��һ�ֱ���һ�ֱȽϵĴ�������һ��

  int main{

    int nums[N]{};
    int temp;
    for(int i=0 ; i<N-1 ;i++){
        for(int j=0 ; j<N-1-i ; j++){
            if(nums[j]<nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    for(int i=0 ; i<sizeof(nums)/sizeof(int) ; i++){
        cout << "�������Ϊ��" << num[i] << endl;
    }
    return 0;
  }




    //ð������
    //1.��һ�ֱȽϵĴ�����������ܳ���-1
    //2.��һ�ֱ���һ�ֱȽϵĴ�������һ��

    int nums[]= {15,25,80,23,9};
    int temp;               //����һ���Ĵ������������
    //���ѭ�����ƱȽϵĴ���(���ɣ��ܳ���numsLen-1)
    for(int i=0 ; i<5 ; i++){
        //�ڲ�ѭ�����ƱȽϵĴ���(���ɣ��ܱ����ѭ�����ƴ�����һ��)
        for(int j=0 ; j<5-i ; j++)
        {
            if(nums[j]<nums[j+1])           //�Ӵ�С
          //if(nums[j]>nums[j+1])           //��С����
                {
                temp = nums[j];
                nums[j] = nums[j+1];        //����Ԫ�ش�С����������
                nums[j+1] = temp;
                }
        }

    }
    for(int i=0 ; i<5 ; i++)
        {
            cout << nums[i] << endl;        //�������ʾ��
        }






                           //ѡ������
    int nums[] = {8,4,2,1,23,23,344,12};
    //ͨ������õ������ʵ�ʳ���
    int numsLen = sizeof(nums) / sizeof(int);
    int temp;
    //��̨����
    int min = nums[0];          //������Сֵ������ĵ�һ��Ԫ��
    int minIndex = 0;           //��Сֵ�ĳ�ʼ�±�����Ϊ0
    for(int i = 0 ; i < numsLen-1 ; i++){
        min = nums[i];          //�����i��Ԫ���Ѿ�����Сֵ��
        minIndex = i;
        for(int j = i + 1 ; j< numsLen-1 ; j++){
            //����̨
            if(nums[j] < min){
                min = nums[j];
                minIndex = j;
            }
        }
        //����
        if(minIndex > 1){
            temp = nums[minIndex];
            nums[minIndex] = nums[i];
            nums[i] = temp;
        }
    }
    for(int i=0 ; i<numsLen ; i++){
        cout << nums[i] << endl;
    }
    */




    //ʵ������Ԫ�ص�ɾ���Ͳ���
    double power[99];             //����Ĵ�Сһ��ȷ�����Ͳ����ٸ��ģ�
    int powerCount = 0;           //��ǰԪ���е��������
    double insertPower;           //Ĭ�ϲ��뵽�����һ�����ֵ�λ��
    power[powerCount++] = 45771;
    power[powerCount++] = 42322;
    power[powerCount++] = 40907;
    power[powerCount++] = 40706;        //powerCount = 4;

    double temp;
    int insertIndex = 0;
    for(int i = 0; i< powerCount-1 ; i++){
        for(int j = 0 ; j<powerCount-1-i ; j++){
            if(power[j] < power[j+1]){
                temp = power[j];
                power[j] = power[j+1];
                power[j+1] = temp;
                }
        }
    }
    cout << "�����:" << endl;
    for(int i=0 ; i<powerCount ; i++){
        cout << power[i] << '\t';
    }
    cout << endl;
    cout << "������Ҫ��������֣�" ;
    cin >> insertPower;
    insertIndex = powerCount;
    //�����Ժ�֤������Ȼ�������
    //1.�������ַ��������ĩβ�����½�������
    //����ð�����򣬣�������

    //2.һ���ҵ���һ���Ȳ������ִ��λ��insertIndex
    for(int i=0 ; i<powerCount ; i++){
        if(insertPower > power[i]){
            insertIndex = i;
            break;
        }
    }
    //  ���������һ��Ԫ�ؿ�ʼ�������ָ��Ƶ�����һ��Ԫ����
    for(int i = powerCount-1 ; i>= insertIndex ; i--){
        power[i+1] = power[i];
    }
    //  ������Ҫ��������ָ�ֵ���±�ΪinsertIndex��Ԫ��
    power[insertIndex] = insertPower;
    //  �ġ���������ܳ���+1
    powerCount++;
    cout << "�����:" << endl;
    for(int i=0 ; i<powerCount ; i++){
        cout << power[i] << '\t';
    }
    cout << endl;




    //ɾ������Ԫ��
    //1.�ҵ�Ҫɾ����Ԫ���±�
    double deletePower;
    int deleteIndex = -1;
    cout << "������Ҫɾ�������֣�";
    cin >> deletePower;
    for(int i=0 ; i<powerCount ; i++){
        if(deletePower == power[i]){
            deleteIndex = i;
            break;
        }
    }
    if(deleteIndex == -1){
        cout << "û���ҵ�ɾ�������֣�ɾ����Ч��" << endl;
    }else{
    //2.���ҵ����±꿪ʼ������һ��Ԫ�ظ�ֵ��ǰ��һ��Ԫ��
    for(int i = deleteIndex; i < powerCount ; i++){
        power[i] = power[i+1];
    }

    //3.�ܳ���-1
    powerCount--;
    }
    cout << "ɾ����" << endl;
    for(int i=0 ;i<powerCount ;i++){
        cout << power[i] << '\t';
    }


    //

}


