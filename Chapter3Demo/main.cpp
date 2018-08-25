#include <iostream>

using namespace std;

int main()
{

	//使用程序判断用户输入的字符是否是合法的硬盘盘符
	char pan = '\0';  //默认值设置为空字符 或者用空格
	cout << "请输入一个字符，我来判断是否合法： ";
	cin >> pan;
	//'A' ~ 'Z'
	//if(pan >= 65 && <= 65 + 25)
	if(pan >= 'A' && pan <= 'Z')
	{
		cout << "是合法盘符！" << endl;
	}
	else
	{
		cout << "不是合法盘符！" << endl;
	}


	/*

    //c语言中，0表示假，非0表示真
    //c++中，引入了布尔类型 bool (java:boolean)
    bool flag = true ;   //false bool定义
    cout << boolalpha;
    cout << "15 > 88 吗？" << (15 > 88) << endl;
    cout << "16 < 99 吗？" << (16 < 99) << endl;

    /*
    int num = 1024;
    //演示复合运算符
    num += 90;// <==>  num = num + 90;
    num *= 90;
    num /= 90;
    num -= 90;
    num %= 90;
    cout << num << endl;  */

    int choice = 'n';
    switch(choice){
    case 'A':
        cout << "1" << endl;
        break;
    case 'B':
        cout << "2" << endl;
        break;
    case 'C':
        cout << "3" << endl;
        break;
    case 'D':
        cout << "4" << endl;
        break;
    default:
        cout << "998" << endl;
    }


    return 0;

}
