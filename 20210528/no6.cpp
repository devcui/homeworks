/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:20
 * @LastEditTime: 2021-05-28 21:34:16
 * @LastEditors: cuihaonan
 * @Description: 输入m和n（m<=n），编写程序计算 [ m , n ] 范围内的素数之和。
 * @FilePath: /homeworks/20210528/no6.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <math.h>
using namespace std;

void computeSum(int min, int max, int s)
{
    if (min <= max)
    {
        // 求左值平方根转int
        int k = (int)sqrt((double)min);
        bool isPrimeNumber = true;
        for (int i = 2; i <= k; i++)
        {
            // 循环2-平方根(min)取余
            if (min % i == 0)
            {
                isPrimeNumber = false;
            }
        }
        // 假如没有执行过break，证明没有余数为0的，是素数
        if (isPrimeNumber)
        {
            cout << "找到素数: " << min << endl;
            s += min;
        }
        // 递归
        min++;
        computeSum(min, max, s);
    }
    else
    {
        cout << "和为:" << s << endl;
    }
}

int main()
{
    int m, n, s = 0;
    cout << "input m and n" << endl;
    cin >> m;
    cin >> n;
    if (m - n > 0)
    {
        computeSum(n, m, s);
    }
    else if (m - n < 0)
    {
        computeSum(m, n, s);
    }
    else
    {
        cout << m << endl;
    }
    return 0;
}