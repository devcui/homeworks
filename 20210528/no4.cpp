/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:13
 * @LastEditTime: 2021-05-28 20:44:30
 * @LastEditors: cuihaonan
 * @Description: 输入一个三位的正整数n，依次输出n的百位数字、十位数字、个位数字（以空格分隔）
 * @FilePath: /homeworks/20210528/no4.cpp
 * @LICENSE: NONE
 */

#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number < 100 || number > 999)
    {
        throw("需要输入三位正整数");
    }
    else
    {
        // 直接转字符串指针取每位值
        char *numberString;
        sprintf(numberString, "%d", number);
        cout << numberString[0] << " " << numberString[1] << " " << numberString[2] << " " << endl;
    }
    return 0;
}