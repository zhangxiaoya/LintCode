#include <iostream>
#include "Sort/Solution508/Solution508.h"

using namespace std;

int main()
{
    vector< int> nums ={3, 5, 2, 1, 6, 4};
    Solution508 solution508;
    solution508.wiggleSort(nums);
    for(auto a : nums)
        cout << a << " ";
    cout << endl;
    return 0;
}