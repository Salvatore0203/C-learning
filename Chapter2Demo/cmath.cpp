/**
 *文件名：计算圆柱体的体积和面积
 *描  述：学习demo2
 *作  者：Salvatore
 *时  间：13.8.13
 *版  权：
 */

 #include <cmath>
 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 int main()
 {
	 //控制cout的显示精度
	 //float不适合展示大量的数字，可能会损失结果的精度
	 //sizeof 用来测量数据类型的长度 ， c++中默认小数类型是double ，若是小数结尾有f即是float类型
	 
	 //1.强制以小数的方式显示
	 //cout << fixed ;
	
	
	
	//2.控制显示的精度
	//cout << setprecision(1);
	 
	 cout << setw(10) << "|" << 3.14 << "|" <<endl; //setw() = set width 设置宽度
	 
	 //输出double类型数据
	 double doubleNum = 10.0 / 3.0;
	 cout << doubleNum * 10000000 << endl;
    
	
	
	
	//已知圆柱体的半径和高，求圆柱体的体积和面积
    const float PI = 3.14f;
    //定义了一个float类型的长常量
    float radius = 4.5f;
    float height = 90.0f;
    double volume = PI * pow(radius,2) * height;
    cout << "体积是：" << volume << endl;
	
	int num1 = 5 , num2 = 2;
	num1 = num2++ - (--num2);
	cout << num1 << '\t' << num2 << endl;
	
	//定义两个整型变量
	int num3 = 5,num4 = 2;
	//定义4个double类型变量用来存放计算结果
	
	
	double num5 = (double)num3 / num4;
	cout << num5 << endl;
	
	double result1 = num3 / num4;   //除法
	double result2 = num3 % num4;   //取模
	double result3 = num3++;    	//后置
	double result4 = --num2;		//前置
	cout << "num3 / num4 = " << result1 << '\n'
		 << "num3 % num4 = " << result2 << '\n'
		 << "num3++ = " << result3 << '\n' 
		 << "--num3 = " << result4 << endl;
		 

	return 0;
	
 }
