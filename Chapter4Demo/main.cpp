#include <iostream>

using namespace std;

int main()
{
    //使用循环实现十三次密码输入错误后退出系统
    string password;  //密码
    int i = 0;          //循环变量，用来控制循环的次数
    while(i < 3)
    {
        cout  << "请输入密码："  << endl;
        cin >> password;
        cout << "您输入的密码是：" << password << endl;
        i++;
        //判断用户输入的而是否正确
        if(password != "12345678")
        {
            if( i == 3){
                cout << "系统密码输入错误，系统自动退出....." << endl;
            }
            else{
                cout << "请再次输入" << endl;
            }
        }else{
            cout << "密码正确，系统正在进入后台中....." << endl;
            return 0;
        }
    }



    /*
    int i = 0;
    while(i <= 10){
        cout << i << endl;
        i++;
    }

    return 0;
    */

    /*
    //使用循环计算1-100的累加和
    //需要循环变量
    //需要累加和变量

    int num = 1;   //用来控制循环次数的变量
    int sum = 0;   //用来保存累加和的变量
    while(num <= 100){
        //cout << num << endl;
        sum = sum + num;  //累加1-100的值，结果保存在变量sum中
        //为了让循环退出，要让循环变量进行更新
        num++;
    }
    cout << "1-100的累加和为：" << sum << endl;
    */
    return 0;
}
