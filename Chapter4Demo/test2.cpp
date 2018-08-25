#include <iostream>

using namespace std;

int main()
{
    double salary = 0;
    double sumSalary = 0;
    double avgSalary = 0;
    const int YEAR = 6;
    for(int i = 0; i < YEAR ; i++)
	{
        cout << "请输入第" << i + 1 << "个月的工资为：" << endl;
        cin >> salary;
        sumSalary += salary;
    }
    avgSalary = sumSalary / YEAR;
	cout << "六个月的平均工资为：" << avgSalary << endl;
	return 0;
}
