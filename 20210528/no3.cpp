/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:09
 * @LastEditTime: 2021-05-28 20:21:27
 * @LastEditors: cuihaonan
 * @Description: 输入华氏温度，要求输出摄氏温度。公式为：c=5/9*(F-32) 。
 * @FilePath: /homeworks/20210528/no3.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double fahrenheit = 0.0;
    cout << "Please input fahrenheit" << endl;
    cin >> fahrenheit;
    double b = (fahrenheit - 32.00) * 5 / 9;
    cout << "Celsius degree: " << fixed << setprecision(2) << b << endl;
    return 0;
}