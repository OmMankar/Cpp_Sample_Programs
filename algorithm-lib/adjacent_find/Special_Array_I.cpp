#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
         auto it = adjacent_find(nums.begin(), nums.end(), [](int a, int b) {
        return (a%2) == (b%2);
    });

    if (it != nums.end()) {
       return false;
    }
    return true;
    }
};