
#include "Solution508.h"

void Solution508::wiggleSort(vector<int> &nums)
{
    for(int i = 1; i < nums.size();i+=1)
    {
        if((i % 2 == 1 && nums[i] < nums[i-1] ) || (i % 2 == 0 && nums[i] > nums[i-1]))
            std::swap(nums[i], nums[i-1]);
    }
}