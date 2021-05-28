/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:24
 * @LastEditTime: 2021-05-29 00:01:45
 * @LastEditors: cuihaonan
 * @Description:  有一分数序列，2/1,3/2,5/3,8/5，计算该序列的前n项和，n由键盘输入。
 * @FilePath: /homeworks/20210528/no8.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i;
    cout << "Please input N" << endl;
    int N;
    cin >> N;
    //fibs
    vector<unsigned long int> arr(N + 2);
    arr[0] = 1;
    arr[1] = 1;
    // 1,1,2,3,5,8,13
    for (i = 2; i <= N; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    long double sum = 0;
    for (i = 2; i <= N; i++)
    {
        // 2/1+3/2+5/3
        cout << arr[i] << "/" << arr[i - 1] << endl;
        sum += ((long double)arr[i] / (long double)arr[i - 1]);
    }
    cout << sum << endl;
}
