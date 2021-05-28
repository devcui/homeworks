/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:24
 * @LastEditTime: 2021-05-28 22:53:45
 * @LastEditors: cuihaonan
 * @Description:  有一分数序列，2/1,3/2,5/3,8/5，计算该序列的前n项和，n由键盘输入。
 * @FilePath: /homeworks/20210528/no8.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <vector>

using namespace std;

int fib(int n, vector<int> arr)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {

        return 1;
    }
    else
    {
        arr.push_back(fib(n - 1, arr) + fib(n - 2, arr));
    }
}

int main()
{
    vector<int> molecule;
    vector<int> denominator;
    fib(5, molecule);
    cout << molecule << endl;
    return 0;
}
