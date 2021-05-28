/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:28
 * @LastEditTime: 2021-05-28 22:27:00
 * @LastEditors: cuihaonan
 * @Description: 求数列 1+2!+3!+4!+...N!前N项的和
 * @FilePath: /homeworks/20210528/no7.cpp
 * @LICENSE: NONE
 */

#include <iostream>

using namespace std;


long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

long long allFactorial(int n)
{
    if (n == 1)
    {
        return factorial(1);
    }
    else
    {
        return factorial(n) + allFactorial(n - 1);
    }
}

int main()
{
    int N = 0;
    long long sum = 0;
    cout << "Please input N" << endl;
    cin >> N;
    cout << allFactorial(N) << endl;
    return 0;
}