/**
 *文件名：
 *描  述：
 *作  者：
 *时  间：
 *版  权：
 */

 
 #include <iostream>
 #include <windows.h>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(){
	 //打印德玛西亚之力
	 SetConsoleTitle("示例：打印德玛西亚之力的详细信息");
	 
	 cout << fixed << setprecision(2);
	 /** 伤害 */
	 double value_attack = 57.88;
	 /** 伤害成长值 */
	 double value_attack_growth = 4.50;
	 /** 攻击距离 */
	 int value_attack_distance = 172;
	 /** 护甲值 */
	 double value_defence = 27.54;
	 /** 护甲成长值 */
	 double value_defence_growth = 3.0;
	 /** 魔抗*/
	 double value_defence_magic = 32.10;
	 /** 魔抗成长值*/
	 double value_defence_magic_growth = 1.25;
	 /** 生命 */
	 double value_lifeblood = 616.28;
	 /** 生命成长值 */
	 double value_lifeblood_growth = 84.25;\
	 /** 生命回复 */
	 double value_lifecrue = 7.84;
	 /** 生命回复值 */
	 double value_lifecrue_growth = 0.50;
	 /** 法力 */
	 double value_magic = 0.00;
	 /** 法力成长值 */
	 double value_magic_growth = 0.00;
     /** 法力回复 */
	 double value_magic_crue = 0.00;
     /** 法力回复值 */
	 double value_magic_crue_growth = 0.00;
     /** 移速 */
	 int value_walkspeed = 340;
     /** 定位 */
	 
     /** 点券 */
	 int value_pay = 450;
     /** 金币 */
	 int value_gold = 1000;

 
	 cout << "名称：德玛西亚之力·盖伦" << endl;
	 cout << "伤害:" << value_attack << "(+" << value_attack_growth << ")\t"
		  << "攻击距离:" << value_attack_distance << endl;
	 cout << "护甲:" << value_defence << "(+" << value_defence_growth << ")\t"
		  << "魔抗:" << value_defence_magic << "(+" << value_defence_magic_growth<< ")" <<endl;
	 cout << "生命:" << value_lifeblood << "(+" << value_lifeblood_growth << ")\t"
		  << "生命回复：" << value_lifecrue << "(+" << value_lifecrue_growth << ")" <<endl;
	 cout << "法力:" << value_magic << "(+" << value_magic_growth << ")\t" 
		  << "法力回复：" << value_magic_crue << "(+" << value_magic_crue_growth << ")" <<endl;
	 cout << "移速：" << value_walkspeed <<"\t\t"<<"定位：上单 辅助 打野" <<endl;
	 cout << "点券：" << value_pay <<"\t\t"<<"金币：" << value_gold <<endl;
		

		int num;
		char ch1,ch2,ch3;
		cout <<"请输入一个数字：";
		cin >> num;   //scanf("%d",&num);
		cin >> ch1 >> ch2 >> ch3;
		//ch1 = cin.get();
		//ch2 = cin.get();
		//ch3 = cin.get();
		cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 <<endl;
		
		cout << "\a" <<endl;
	return 0;
 }