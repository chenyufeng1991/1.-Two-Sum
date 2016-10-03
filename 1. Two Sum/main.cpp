//
//  main.cpp
//  1. Two Sum
//
//  Created by chenyufeng on 10/3/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> copy = nums;
    sort(nums.begin(), nums.end());
    vector<int> resultVec;

    int a = 0,b = 0;
    for (long i = 0, j = nums.size() - 1; i < nums.size() && j >= 0;)
    {
        int sum = nums[i] + nums[j];
        if (sum == target)
        {
            a = nums[i];
            b = nums[j];
            break;
        }
        else if (sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
    }

    for (int i = 0; i < copy.size(); i++)
    {
        if (copy[i] == a)
        {
            resultVec.push_back(i);
        }

        if (copy[i] == b)
        {
            resultVec.push_back(i);
        }
    }

    return resultVec;
}

int main(int argc, const char * argv[])
{
    int arr[] = {2,7,11,15};
    vector<int> vec(arr, arr + sizeof(arr)/sizeof(int));
    vector<int> vv = twoSum(vec, 9);
    cout << vv[0] << " " << vv[1] ;


    return 0;
}




