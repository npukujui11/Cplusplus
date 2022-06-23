#include<iostream>
using namespace std;
/*演示有符号整型变量和无符号整型变量溢出的负面影响*/

int main(){
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;
    
    short signedShort = 32767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++signedShort << endl;
    //如果变量的值溢出的话，有可能会变成结果最小的负数
    return 0;
}