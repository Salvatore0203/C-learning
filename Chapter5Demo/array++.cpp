#include <iostream>

using namespace std;

int main()
{
  /**
                    冒泡排序基本公式

            //冒泡排序：
            //1.第一轮比较的次数：数组的总长度-1
            //2.下一轮比上一轮比较的次数：少一次

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
        cout << "排序后结果为：" << num[i] << endl;
    }
    return 0;
  }




    //冒泡排序：
    //1.第一轮比较的次数：数组的总长度-1
    //2.下一轮比上一轮比较的次数：少一次

    int nums[]= {15,25,80,23,9};
    int temp;               //设置一个寄存器，用完就扔
    //外层循环控制比较的次数(规律：总长度numsLen-1)
    for(int i=0 ; i<5 ; i++){
        //内层循环控制比较的次数(规律：总比外层循环控制次数少一次)
        for(int j=0 ; j<5-i ; j++)
        {
            if(nums[j]<nums[j+1])           //从大到小
          //if(nums[j]>nums[j+1])           //从小到大
                {
                temp = nums[j];
                nums[j] = nums[j+1];        //交换元素大小，进行排序
                nums[j+1] = temp;
                }
        }

    }
    for(int i=0 ; i<5 ; i++)
        {
            cout << nums[i] << endl;        //输出到显示器
        }






                           //选择排序
    int nums[] = {8,4,2,1,23,23,344,12};
    //通过计算得到数组的实际长度
    int numsLen = sizeof(nums) / sizeof(int);
    int temp;
    //擂台竞赛
    int min = nums[0];          //假设最小值是数组的第一个元素
    int minIndex = 0;           //最小值的初始下标设置为0
    for(int i = 0 ; i < numsLen-1 ; i++){
        min = nums[i];          //假设第i个元素已经是最小值了
        minIndex = i;
        for(int j = i + 1 ; j< numsLen-1 ; j++){
            //打擂台
            if(nums[j] < min){
                min = nums[j];
                minIndex = j;
            }
        }
        //交换
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




    //实现数组元素的删除和插入
    double power[99];             //数组的大小一旦确定，就不能再更改！
    int powerCount = 0;           //当前元素中的数组个数
    double insertPower;           //默认插入到数组第一个数字的位置
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
    cout << "排序后:" << endl;
    for(int i=0 ; i<powerCount ; i++){
        cout << power[i] << '\t';
    }
    cout << endl;
    cout << "请输入要插入的数字：" ;
    cin >> insertPower;
    insertIndex = powerCount;
    //插入以后保证数组仍然是有序的
    //1.把新数字放在数组的末尾，重新进行排序
    //继续冒泡排序，（繁琐）

    //2.一、找到第一个比插入数字大的位置insertIndex
    for(int i=0 ; i<powerCount ; i++){
        if(insertPower > power[i]){
            insertIndex = i;
            break;
        }
    }
    //  二、从最后一个元素开始，将数字复制到后面一个元素中
    for(int i = powerCount-1 ; i>= insertIndex ; i--){
        power[i+1] = power[i];
    }
    //  三、将要插入的数字赋值给下标为insertIndex的元素
    power[insertIndex] = insertPower;
    //  四、将数组的总长度+1
    powerCount++;
    cout << "插入后:" << endl;
    for(int i=0 ; i<powerCount ; i++){
        cout << power[i] << '\t';
    }
    cout << endl;




    //删除数组元素
    //1.找到要删除的元素下标
    double deletePower;
    int deleteIndex = -1;
    cout << "请输入要删除的数字：";
    cin >> deletePower;
    for(int i=0 ; i<powerCount ; i++){
        if(deletePower == power[i]){
            deleteIndex = i;
            break;
        }
    }
    if(deleteIndex == -1){
        cout << "没有找到删除的数字，删除无效！" << endl;
    }else{
    //2.从找到的下标开始，后面一个元素赋值给前面一个元素
    for(int i = deleteIndex; i < powerCount ; i++){
        power[i] = power[i+1];
    }

    //3.总长度-1
    powerCount--;
    }
    cout << "删除后：" << endl;
    for(int i=0 ;i<powerCount ;i++){
        cout << power[i] << '\t';
    }


    //

}


