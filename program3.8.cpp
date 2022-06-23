#include <iostream>

/*通过关键字constexpr，可以让常量声明像函数*/
/*constexpr修饰的函数，如果其传入的参数可以在编译时期计算出来，那该函数在编译期间就可以获得值*/
/*如果无法在编译时期计算出来，那么实际上constexpr修饰的函数和普通函数相差无几*/
/*该特性往往可以用于提高程序性能*/

constexpr int getDefaultArraySize(int multiplier)
{
    return 10 * multiplier;
}

int array[getDefaultArraySize(3)];

constexpr int factorial (int n)
{
    return n > 0 ? n * factorial(n - 1) : 1;
}

int main()
{
    using namespace std;
    int n = 0; 
    cout << "please key the n: ";
    cin >> n;
    cout << "the value of function factorial is " << factorial(n) << endl;
}