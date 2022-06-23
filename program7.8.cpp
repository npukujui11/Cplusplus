#include <iostream>
using namespace std;

/*两个重载的函数，名字都叫DisplayArray(): 一个显示int数组的元素；另一个显示char数组的元素。*/

void DisplayArray(int numbers[], int length)
{
    for (int index = 0; index < length; ++index)
        cout << numbers[index] << " ";

    cout << endl;  
}

void DisplayArray(char characters[], int length)
{
    for (int index = 0; index < length; ++index)
        cout << characters[index] << " ";

    cout << endl; 
}

int main()
{
    int myNums[4] = {24, 58, -1, 245};
    DisplayArray(myNums, 4);
    char myStatement[13] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    DisplayArray(myStatement, 13);

    return 0;
}