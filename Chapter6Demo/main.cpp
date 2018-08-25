#include <iostream>

using namespace std;

int main()
{   /*
    //                              空指针

    //空指针（null pointer）：空指针不指向任何对象，在使用一个指针之前可以先检查是否为空
    //double ptr_double;        //野指针，很危险，会更改到重要文件
    double* ptr_double = nullptr;       //无初值，最好赋值一个初值
    cout << ptr_double << endl;

    //void*指针：一种特殊的指针类型，可以存放任意对象的地址
    //void*指针指向的内容是什么类型无法确定
    double num = 3.14;
    double* ptr_num1 = &num;
    void* ptr_num2 = &num;
    cout << boolalpha;
    cout <<(ptr_num1 == ptr_num2) << endl;

    //*ptr_num2 = 1111;     错误：因为void对象的类型无法确定
    //所以void*指针一般用来和别的指针进行比较，作为函数的输入和输出，或者赋值给别的void*指针
    //使用范围较窄


    //总结：指针就是一个变量，只是这个变量存储的是对象的内存地址
    //      存储地址就是指向这个对象
    //      指针变量可以赋值，指针指向在程序执行中可以改变




    //                      引用 reference

    //引用：为对象起了一个别名
    //int int_value = 1024
    //const int& refValue = 1024;       常量的引用，加一个const就可以
    //int& refValue = int_value;        int_value的别名是refValue(引用)
    //引用之前必须初始化！！
    //相比指针*简化了一些，是指针的升级版



    //                      指针和数组
    //数组本身就是地址
    //数组——数组名就是数组的首地址
    double score[]{11,22,33,44,55};
    double* ptr_score = score;          //数组地址赋值给指针变量ptr_score

    cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl; //score = double[5]
    cout << ptr_score[3] << endl;


    //数组第i+1个元素可以表示为：
    //第i+1个元素的地址：&num[i+1]或者num+i+1
    //第i+1个元素的值：num[i+1]或者*(num+i+1)

    //为指向数组的指针赋值：
    //int* ptr_num = num 或者 int* ptr_num = &num[0]

    //指针变量可以指向数组元素
    //int* ptr_num = &num[4]或者int* ptr_num = num+4

    //切记！！！！数组是地址！！！元素是值！！！





    //int* ptr_int = new int        分配内存
    //delete ptr_int;               释放内存
    //1.在运行阶段为一个int值分配未命名的内存

    //int* p = new int  p——栈区 在堆区分配了一块int型空间（4字节空间）



    int num[5];
    int* nums = new int[5];     //动态分配内存
    cout << sizeof(num) << '\t' << sizeof(nums) <<endl;
    delete [] nums;             //释放整个数组


    //程序的内存分配

    //栈区：stack
    //由编译器自动分配释放，一般存放函数的参数值、局部变量的值等
    //操作方式类似数据结构中的栈-先进后出

    //堆区：heap
    //一般由程序员自行分配释放，若程序员不是放，程序结束时由操作系统回收。需要内存管理
    //操作系统没回收或者没有释放delete就会  内存泄漏
    //内存泄漏：没有被指针指引，表面上程序崩溃，卡斯死退出现象。
    //注意：与数据结构中的堆是两回事，分配方式类似链表

    //全局区（静态区-static）
    //全局变量和静态变量存储在一起的
    //程序结束后由系统释放

    //文字常量区
    //常量字符串就放在这里，程序结束由系统释放

    //程序代码区
    //存放函数体的二进制代码



    int num = 90;       //num存于栈区，等号右边存于常量区
    double d_nums[6] = {3,4,5,6};       //同样存于栈区，右边的值存于常量区
    double * darray = new double[10];   //左边栈区，右边堆区，堆区的地址保存在左边的指针变量里







    int arrays[]{15,23,30,40,50};
    int* p_arrays = arrays;

    for(int i = 0 ; i < 5 ; i++){
        cout << *(p_arrays + i) << endl;        //指针未移动，较安全
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << *p_arrays++ << endl;            //指针移动了，再次循环就不是这些元素了
    }





    //数组逆序
    //运用指针来做
    int arrays[]{15,23,30,40,50,6};
    int* ptr_start = arrays;        //指向第一个元素
    int* ptr_end = arrays+5;        //指向最后一个元素
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





    //二维数组与指针
    //使用指针来创建二维数组
    int arrays[5][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };
    int (*p2)[3] = arrays;
    //int (*p2)[3] = new int[5][3];       把二维数组的行做指针处理，叫做 降维
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
    //在指针中char类型自动打印字符串类型
    //char型指针在C/C++中默认为字符串
    //所以会把char型指针用字符串打印
    //如果想要打印地址，只需要给char型加一个void*（任意类型）







    /*
    double num = 1024.5;
    //声明一个指针，指向num变量
    double* ptr_num = &num;
    cout << "ptr_num的地址：" << ptr_num << "\t" << &num << endl;
    cout << "ptr_num指向空间的值为：" << *ptr_num << endl;
    */
    return 0;
}
