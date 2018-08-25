#include <iostream>
#include <vector>
#include <algorithm> /*单词意思：算法*/

using namespace std;

int main()
{
    /*
    //二维数组的动态赋值
	//使用二维数组打印成绩表3*3
	string stu_names[]{"刘备","关羽","张飞"};
	string course_names[]{"语文","数学","英语"};
	const int ROW = 3;          //行
	const int COL = 3;          //列
	double scores[ROW][COL];            //定义二维数组

	for(int i=0 ; i<ROW ; i++){         //给定义数组赋值
        for(int j=0 ; j<COL ; j++){
            cout << stu_names[i] << "的" << course_names[j] << "成绩:" ;
            cin >> scores[i][j];
        }
	}

	//打印结果

	cout << "\t";
	for(int i=0 ; i<COL ; i++){
        cout << course_names[i] << '\t';        //第一行  语文 数学 英语
	}
	cout << endl;
	for(int i=0 ; i<ROW ; i++){                 //一行一行进行处理，处理完并换行
            cout <<stu_names[i] << "\t" ;
            for(int j=0 ;j<COL ; j++){
                cout << scores[i][j] << '\t';
            }
            cout << endl;
	}

    */





	//数组的替代品————————Vector(向量)

	//Vector ： 快速的动态分配内存的数组（容器，模板类）
	//特点：1.动态数组，可以再运行阶段设置长度
	//      2.具有数组的快速索引方式
	//      3.可以插入和删除元素

	//定义和初始化(泛型)
	//vector<double> vec1;              只能存放double类型数字
	//vector<string> vec2(5);           可以存放double，string类型，且只能放5个
	//vector<int> vec3(20,998);         只能放int类型且默认20个元素，每个元素都是998

    //头文件需要  #include <vector>

    //  clear() :移除容器中所有数据
    //  empty() :判断容器是否为空
    //  size()  :返回容器中元素的个数
    //  [index]、at(index)   :返回索引为index的元素
    //  orase(pos)  :删除pos位置处的数据
    //  orase(beg,end)  :删除(beg，end)之间的数据
    //  front() ：返回第一个元素
    //  insert(pos.elem)    :在pos位置处插入一个元素
    //  pop_back()  :删除最后一个元素
    //  push_back(elem) ：在容器末尾插入一个元素
    //  resize(num)    :重新设置容器的大小
    //  begin()、end()   :返回容器首位元素的迭代器



    /*
    vector<double> vecDouble = {98.5,67.9,43.6,32.9};
    //向Vector插入数字
    vecDouble.push_back(100.8);         //在数组的尾部插入一个数字
    //遍历1（打印）
    for(int i=0 ; i<vecDouble.size() ; i++){
            cout << vecDouble[i] << endl;
    }
    */
    //上面方法不够专业
    //Vector的通用便利方法：使用迭代器：iterator
    //迭代器的基本用法：
    vector<double>::iterator it;        //得到迭代器对象-实际上是一个指针对象
    //it.begin() 从第一个元素开始迭代
    for(it = vecDouble.begin(); it != vecDouble.end(); ++it){
        cout << *it << endl;            //*it取后面的地址找到迭代器
    }

    //排序
    sort(vecDouble.begin(),vecDouble.end());
    reverse(vecDouble.begin(),vecDouble.end());
    for(it = vecDouble.begin() ; it != vecDouble.end() ; ++it){
        cout << *it << endl;
    }



}
