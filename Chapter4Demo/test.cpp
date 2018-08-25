#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //使用循环模拟拳皇对战
    /** 八神庵的HP */
    int hp1 =100;
    /** 草ti京的HP*/
    int hp2 =100;

    int attack1 = 0;  //八神的攻击力
    int attack2 = 0;  //草薙京的攻击力
    int randNum;      //用来存放玩家攻击先后的随机数变量

    srand(time(NULL));

    while((hp1 >= 0)&&(hp2 >= 0))  //当双方还有hp时继续战斗
    {

    //1.模拟玩家出招，可以采用随机数是奇数/偶数的方式来决定谁先进行攻击
    //奇数-八神先，偶数-草ti京先
    randNum = rand();
    if(randNum % 2 == 1){//奇数
        attack1 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));
        attack2 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));

        hp2 -= attack1;       //互相掉血
        hp1 -= attack2;
    }else{//偶数
        attack2 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));
        attack1 = (int)(5 + 10 * rand()/(RAND_MAX + 1.0));

        hp1 -= attack2;
        hp2 -= attack1;   //互相掉血
    }
    }
    //2.打印对战的最终结果
    cout << "八神庵HP：" << hp1 << endl;
    cout << "草ti京HP：" << hp2 << endl;

    return 0;















    /*
    //某宝双十一2.15年的交易额为800亿，每年递增25%
    //问：按此速度那年交易额能达到2000亿？
    //1、寻找循环变量、初值、判断、更新
    //年 交易额    递增比
    double money = 800.0;
    int year = 2015;
    while(money < 2000)
    {
        year++;
        money = money * (1 + 0.25);
    }
    cout << "到" << year << "年，营业额达到" << money << "亿!" << endl;
    */
}
