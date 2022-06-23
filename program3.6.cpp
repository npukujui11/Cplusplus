#include <iostream>
using namespace std;

/*使用关键字auto依靠编译器的类型推断功能*/
/*编译器只要支持C++11或者更高版本，auto可不显式的指定变量的类型*/
/*从C++14起，auto亦可用于函数*/

const double Pi = 3.1415926;

auto Area(double radius)
{
    return Pi * radius * radius;
}//编译器将根据return语句中使用double变量的表达式来推断返回类型

int main(){
    auto coinFlippedHeads = true;
    auto largeNumber = 2500000000000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Area is: " << Area(radius) << endl;

    return 0;
}