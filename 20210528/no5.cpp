/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:16
 * @LastEditTime: 2021-05-28 21:02:03
 * @LastEditors: cuihaonan
 * @Description: 输入x的值，输出y的值。
 *               区间 x^2 + 2/x +sin(x) | x<0
 *               区间 2x^5-cos(x) | 0<=x<10
 *               区间 1/平方根(3x^2-11) | x>= 10
 * @FilePath: /homeworks/20210528/no5.cpp
 * @LICENSE: NONE
 */

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "input x" << endl;
    long double x = 0;
    long double y = 0;
    cin >> x;
    if (x < 0)
    {
        y = pow(x, 2) + 2 / x + sinl(x);
    }
    else if (x >= 10)
    {
        y = 1 / (sqrt(3 * pow(x, 2) - 11));
    }
    else if (x >= 0 && x < 10)
    {
        y = 2 * pow(x, 5) - cosl(x);
    }
    else
    {
        throw "Please input a number";
    }
    cout << "y: " << y << endl;
    return 0;
}