#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
	//败家MM的购物车
	double price_louis = 35000.0;
	double price_hermes = 11044.5;
	double price_chanel = 1535.0;
	double zhekou = 0;  //折扣
	double total = 0;   //总价
	total = price_louis + price_hermes + price_chanel;

    /*
	//plan A
	//如果总价大于5W就打七折，否则就打九折
	if(total >= 50000){
        zhekou = 0.7;
	}
	else{
        zhekou = 0.9;
	}
	total *= zhekou;
    */
    /*
	//plan B
	//如果购买的三种商品有一种商品单价大于1000
	//或者三种商品总金额大于5000，折扣率为30%
	//否则没有折扣
	if((total >= 5000)||(price_chanel >= 1000)||(price_hermes >= 1000)||(price_louis >= 1000))
        zhekou = 0.7;
	}
	else{
        zhekou = 1;
	}
	total *= zhekou;

	cout << "最终付款：" << total << endl;
    */




	//情人节题目
	double flowerPrice; //花的单价
	//打印剧情
	cout << "黎明前的黑暗渐渐褪去，海天之间透着一抹亮光，像是点燃的火把...." << endl;
	cout << "小男生给小女生送花，小女生问这花多少钱啊？" << endl;
    cout << "小男生 : ";
    cin >> flowerPrice;
    if(flowerPrice >= 50000)
    {
        cout << "马上去拿证！" << endl;
    }
    else if((flowerPrice >= 5000)&&(flowerPrice < 50000))
    {
        cout << "不说了！" <<endl;
    }
    else
    {
        cout << "看看再说..." << endl;
    }
	return 0;
}
