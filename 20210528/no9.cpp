/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:32
 * @LastEditTime: 2021-05-28 23:09:46
 * @LastEditors: cuihaonan
 * @Description: 编写程序，从任意n个数中找出最大数和最小数，并将它们相互交换后输出。
 * @FilePath: /homeworks/20210528/no9.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 0;
    cout << "Please input n" << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    // 找出最大最小，交换输出
    int max = arr[0];
    int max_posi = 0;
    int min = arr[0];
    int min_posi = 0;

    cout << "生成的随机数列为: [";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << ",";
        if (arr[i] > max)
        {
            max = arr[i];
            max_posi = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_posi = i;
        }
    }
    cout << " ]" << endl;
    arr[min_posi] = max;
    arr[max_posi] = min;

    cout << "交换max和min之后: [ ";

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << ",";
    }
    cout << " ]" << endl;
}
