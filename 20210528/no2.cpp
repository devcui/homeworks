/*
 * @Author: cuihaonan
 * @Email: devcui@outlook.com
 * @Date: 2021-05-28 17:53:02
 * @LastEditTime: 2021-05-28 20:00:30
 * @LastEditors: cuihaonan
 * @Description: 输入圆的半径r和圆柱的高h，
 *               依次输出圆周长、
 *               圆面积、
 *               圆球表面积、
 *               圆柱体积（以空格分隔，π取3.14）
 * @FilePath: /homeworks/20210528/no2.cpp
 * @LICENSE: NONE
 */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

static double PI = 3.14;

class Circular
{
private:
  double radius = 0.0;
  double height = 0.0;

public:
  // 标准输入获取半径
  void inputRadius();
  // 标准输入获取高
  void inputHeight();
  // 计算圆的面积
  double computeCircleArea();
  // 计算圆球体积
  double computeSphereVolume();
  // 计算圆柱体积
  double computeCylinderVolume();
  // 输出
  void toString();
  // 析构函数
  Circular();
};

void Circular::inputRadius()
{
  printf("%s", "Please input radius \n");
  cin >> radius;
};

void Circular::inputHeight()
{
  printf("%s", "Please input height \n");
  cin >> height;
};

double Circular::computeCircleArea()
{
  return pow(radius, 2) * PI;
};

double Circular::computeSphereVolume()
{
  return 4 / 3 * PI * pow(radius, 3);
};

double Circular::computeCylinderVolume()
{
  return pow(radius, 2) * PI * height;
};

void Circular::toString()
{
  printf("圆的面积为: %.2f \n", computeCircleArea());
  printf("圆球体积为: %.2f \n", computeSphereVolume());
  printf("圆柱体积为: %.2f \n", computeCylinderVolume());
};

Circular::Circular(void){
  inputRadius();
  inputHeight();
}

int main()
{
  Circular circular;
  circular.toString();
};
