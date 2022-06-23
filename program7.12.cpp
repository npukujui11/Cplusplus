#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/******************************
  template<class InputIterator, class Function>
  Function for_each(InputIterator first, InputIterator last, Function f)
  {
    for( ; first!=last; ++first ) f(*first);
    return f;
  }

 */

/*使用lambda函数对数组中的元素进行排序并显示它们*/
/******************************
  Function lambda
  [optional parameters](parameter list) { statements; }
 */
//lambda函数不需要等一函数名，而是用[]来代替。


void DisplayNums(vector<int>& dynArray)
{
    for_each (dynArray.begin(), dynArray.end(), 
                [](int Element) {cout << Element << " ";} );

    cout << endl;
}

/*
void Myprint(int val)
{
    cout << val << " "; 
}

void DisplayNums(vector<int>& dynArray)
{
    for_each (dynArray.begin(), dynArray.end(), Myprint);
    cout << endl;
}
*/

int main()
{
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    DisplayNums(myNums);

    cout << "Sorting them in descending order" << endl;

    sort (myNums.begin(), myNums.end(),
            [](int Num1, int Num2) {return (Num2 < Num1);});

    DisplayNums(myNums);

    return 0;
}
