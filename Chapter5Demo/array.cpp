#include <iostream>

using namespace std;

int main()
{/**
    //动态地从键盘录入信息并赋值
    const int N = 5;
    int nums[N];
    for(int i = 0 ; i < N ; i++){
            cout << "请输入第" << (i+1) << "个元素:";
            cin >> nums[i];
    }
    //打印刚输入的数组赋值信息
    for(int i = 0;i < N; i++){
        cout << nums[i] << endl;
    }

    int N = 5; //数组长度(可常量可变量，常量即：const int N=5 ;切记：C中只能常量，C++都可以)
    int nums[N];
    cout << "数组长度为：" << sizeof(nums) / sizeof(int) << endl;
    for(int i=0 ; i< sizeof(nums) / sizeof(int) ; i++){
        cout << "请输入第" << i+1 << "个数组元素：" ;
        cin >> nums[i];
    }
    //手动输入5个数组元素
    //接下来是打印这五个数组元素
    for(int i=0 ; i<5 ; i++){
        cout << nums[i] << endl;
    }
*/


    //有一个数列： 8，4，2，1，23，344，12
    //1.循环输出数列的值
    //2.求数组元素的和以及平均值
    int nums[]{8,4,2,1,23,344,12};
    int numsLen = sizeof(nums) / sizeof(int);    //计算出数组的长度
    int sum = 0;
    for(int i=0 ; i<numsLen ; i++){
        cout << nums[i] << '\t';
    }
    cout << endl;
    cout << endl;
    //累加操作
    for(int i=0 ; i<numsLen ; i++){
        sum += nums[i];
    }
    cout<< "数列的和为:" << sum << '\t' << "数列和的平均值为：" << sum / numsLen << endl;


    //EX:
    //1.求数组中的最大值和最小值
    //2.定义一个整型数组，赋值后求出奇数个数和偶数个数
    //3.查找输入的数字在数组中的下标，没有找到则下标为-1




    //求数组中的最大值和最小值  - 打擂台法

    int max = nums[0];      //假设第一个元素是最大值
    int min = nums[0];      //再假设第一个元素是最小值
    int maxIndex = 0;       //最大值的下标
    int minIndex = 0;       //最小值的下标
    for(int i=1 ; i< numsLen ; i++){
        if(nums[i]>max){
            max = nums[i];      //交换最大值
            maxIndex = i ;      //记录最大值的下标
        }
        if(nums[i]<min){
            min = nums[i];      //交换最小值
            minIndex = i;       //记录最小值的下标
        }
    }
    cout << "最大值是：" << max << '/' << nums[maxIndex] << endl;
    cout << "最大值的下标是：" << maxIndex << endl;
    cout << "最小值是：" << min << '/' << nums[minIndex] << endl;
    cout << "最小值的下标是：" << minIndex << endl;


    //2.求出奇数个数和偶数个数
    int jCount = 0,oCount = 0;
    for(int i=0 ; i<numsLen ; i++){
        if(nums[i]%2 == 0){
            oCount++;
        }else{
            jCount++;
        }
    }
    cout << "奇数个数是：" << jCount << "\t" << "偶数个数是：" << oCount << endl;

    //3.查找输入的数字在数组中的下标，没有找到下标则下标为-1
    int searNum;                //用户需要查找的数字
    int searIndex = -1;              //用户需要查找数字的下标
    cout << "请输入想要查找的数字:";
    cin >> searNum ;
    for(int i=0 ; i<numsLen ; i++){
            if(nums[i] == searNum){
                searIndex = i;      //记录查找到元素的下标
                break;
            }
    }
    if(searIndex == -1){
            cout << "没有找到该数字！！" << endl;
        }
    cout << "该数字在数组中的下标为：" << searIndex << endl;

    //冒泡排序：
    //1.第一轮比较的次数：数组的总长度-1
    //2.下一轮比上一轮比较的次数：少一次

    int nums[] = {15,25,90,23,9};
    int temp;               //设置一个寄存器，用完就扔
    //外层循环控制比较的次数(规律：总长度numsLen-1)
    for(int i=0 ; i<5 ; i++){
        //内层循环控制比较的次数(规律：总比外层循环控制次数少一次)
        for(int j=0 ; j<4-i ; j++){
            if(nums[j]<nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];        //交换元素大小，进行排序
                nums[j+1] = temp;
            }
        }
        }
    }

}
