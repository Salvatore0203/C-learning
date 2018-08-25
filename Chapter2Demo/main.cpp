#include <iostream>
#include <climits>
#include <iomanip>


using namespace std;

int main()
{
    /*typedef char wode_char;
    wode_char name = 'a';
    //size_t abc = 19;
    //打印int类型的最大值
    //就是看char不舒服，功能相同，把名称换成wode_char
    //typedef的功能就是把定义类型改一个名字，功能不变
    
    cout << INT_MAX << endl;
    return 0;
	*/
	
	cout << fixed << setprecision(2);   //让数字以固定形式显示，并以小数点后两位精度表示  float只有四个字节会丢失精度，double高保真
										//printf("%.2lf",xxx);
	
	//演示单精度浮点型和双精度浮点型精度问题
	float numFloat = 10/3.0;
	double numDouble = 10/3.0;
	cout << "numFloat =" << numFloat * 1000000 << endl;
	cout << "numDouble =" << numDouble * 1000000 << endl;
	
	//string是字符串类型 typedef basic_string(char) string;将原名改为string
	string str = "你好，我是hxy";
	cout << str <<endl;
	
	
	//排序，取代\t功能
	double attack1 = 272;
	double attack2 = 250;
	double attack3 =240;
	
	cout << left; //左对齐
	cout << setfill('_'); //间隙用下划线填充，默认为空格填充
	cout << setw(8) << attack1 <<
			setw(8) << attack2 <<
			setw(8) << attack3 << endl;
	
	
	
	
	
	return 0;
}


