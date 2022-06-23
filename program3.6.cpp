#include <iostream>
using namespace std;

/*使用关键字auto依靠编译器的类型推断功能*/
/*编译器只要支持C++11或者更高版本，auto可不显式的指定变量的类型*/

int main(){
    auto coinFlippedHeads = true;
    auto largeNumber = 2500000000000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    return 0;
}