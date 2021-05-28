/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:36
 * @LastEditTime: 2021-05-28 23:30:57
 * @LastEditors: cuihaonan
 * @Description: 编写程序，将任意n个数按从大到小的顺序排序后输出。
 * @FilePath: /homeworks/20210528/no10.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

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

    cout << "生成的随机数列为: [";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << ",";
    }
    cout << " ]" << endl;

    sort(arr.begin(), arr.end(), compare);

    cout << "排序过后: [";
    for (vector<int>::iterator iter = arr.begin(); iter <= arr.end(); ++iter)
    {
        cout << *iter << ",";
    }
    cout << " ]" << endl;

    return 0;
}
