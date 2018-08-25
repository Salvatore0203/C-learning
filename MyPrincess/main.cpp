#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>
#include <cstdlib>

using namespace std;

int main()
{
    int choice,temp1,temp2,temp3,temp4,temp5;            //临时变量
    //1.为父女取名字
    /** 父亲的姓名 */
    string value_father_name;
    /** 女儿的姓名 */
    string value_daughter_name;
    /** 女儿的生日月份 */
    int value_birth_month;
    /** 女儿的生日日期 */
    int value_birth_date;
    /** 女儿的星座 */
    string value_daughter_constell;
    array<int,5> value_array_baseinfos;
    /** 五项基本属性名 */
    array<string,5> value_array_baseinfos_names = {"体力","智力","魅力","道德","气质"};
    int value_daughter_gold = 500;
    /** 星座二维数组 */
    string constell_names[12][2]={
        {"山羊座","水瓶座"},  //一月份
        {"水瓶座","双鱼座"},  //二月份
        {"双鱼座","白羊座"},  //三月份
        {"白羊座","金牛座"},  //四月份
        {"金牛座","双子座"},  //五月份
        {"双子座","巨蟹座"},  //六月份
        {"巨蟹座","狮子座"},  //七月份
        {"狮子座","处女座"},  //八月份
        {"处女座","天秤座"},  //九月份
        {"天秤座","天蝎座"},  //十月份
        {"天蝎座","射手座"},  //十一月
        {"射手座","山羊座"},  //十二月
    };

    cout << "父亲的姓名：";
    cin >> value_father_name;
    cout << "女儿的姓名：";
    cin >> value_daughter_name;
    cout << "女儿的生日（MM DD）：";
    cin >> value_birth_month >> value_birth_date;
    /** 各月份的跨星座日期，星座的最后一天 */
    int constell_dates[]{20,19,21,20,21,22,23,23,23,24,23,22};
    value_daughter_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];


    cout << "女儿的信息：" << endl;
    cout << "姓名：" << value_daughter_name << endl;
    cout << "生日：1959-" << value_birth_month << '-' << value_birth_date << endl;
    cout << "星座：" << value_daughter_constell << endl;





    //2.为女儿录入初始信息（生日，星座）
    if(value_daughter_constell == "白羊座"){
        value_array_baseinfos[0] = 80;
        value_array_baseinfos[1] = 15;
        value_array_baseinfos[2] = 15;
        value_array_baseinfos[3] = 11;
        value_array_baseinfos[4] = 21;
    }

    for(int i=0 ; i<5 ; i++){
        cout << value_array_baseinfos[i] << '\t';
    }
    cout << endl;
    //  根据女儿的星座，设置游戏的基本参数（体力、智力、魅力、道德、气质）


    //3.开始游戏大循环
    //游戏从1659年6月开始
    for(int year=1659 ; year < 1659+7 ; year++){
        for(int month = (year == 1659)?6:1 ; month<13 ; month++){
            //判断本月是否是女儿的生日
            if(month == value_birth_month){
                cout << "本月是" << value_daughter_name << "的生日" << endl;
                //根据用户的输入进行判断
            }
            //显示游戏主菜单
            cout << "\n1.查看状态\n2.安排行程\n3.亲自谈话\n4.存档\n5.读档" << endl;
            cin >> choice;
            switch(choice){
            case 1://查看状态
                cout << "女儿的信息：" << endl;
                cout << "姓名：" << value_daughter_name << endl;
                cout << "生日：1659-" << value_birth_month << '-' << value_birth_date << endl;
                cout << "星座：" << value_daughter_constell << endl;
                cout << "金钱:" << value_daughter_gold << endl;
                //打印核心属性
                cout << left;
                for(int i=0 ; i<5 ; i++){
                    cout << value_array_baseinfos_names[i] << ':' << setw(6) << value_array_baseinfos[i] ;
                    //计算实心方框的数量
                    int solidCount = value_array_baseinfos[i] / 10;
                    for(int j=0 ; j<10 ; j++){
                        if(j <= solidCount){
                            cout << "■";
                        }else{
                            cout << "□";
                        }                    }
                        cout << endl;
                }
                break;
            case 2:{   //安排行程:一个月最多安排三个行程
                string month_parts[] = {"上旬","中旬","下旬"};
                for(int i=0 ; i<3 ; i++){
                    cout << "--" << month << "月 --" << month_parts[i] << endl;
                    cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << endl;
                    cout << "请选择:" ;
                    cin >> choice;
                    //这里注意:需要判断没钱的情况，强制打工
                    srand(time(NULL));
                    if(choice == 1)     //体力和魅力增加
                    {
                        value_array_baseinfos[0] += temp1 = rand() % 10;
                        value_array_baseinfos[2] += temp2 = rand() % 10;
                        value_daughter_gold -= temp3 = rand() % 51;
                        cout << "学习张无忌好榜样！！！" << endl;
                        cout << "体力增加" << temp1 << endl;
                        cout << "魅力增加" << temp2 << endl;
                        cout << "金钱减少" << temp3 << endl;
                    }else if(choice == 5){
                        value_daughter_gold += temp3 = rand() % 101;
                        cout << "通过努力打工，赚到了" << temp3 << "个金币" << endl;
                    }
                                        }
                    }
                    break;
                }

    }
    //4.根据各项参数，判定游戏结果
    /**
    女王：总数2000+
    王妃：总数1000-2000
    女将军：总数1600-1800
    皇家学院总裁 总数1200-1600
    */

    }
    return 0;
}
