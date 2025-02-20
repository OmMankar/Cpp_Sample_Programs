#include<iostream>
#include<algorithm>
#include<math.h>
#include<bitset>
using namespace std;

class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            // sort hte current nums
            sort(nums.begin(), nums.end());
            const int n = nums[0].size();
            int num = pow(2, n);
            for (int i = 0; i < num; i++) {
                string str = bitset<32>(i).to_string().substr(32 - n);
    
                if (!binary_search(nums.begin(), nums.end(), str)) {
                    return str;
                }
            }
            return " ";
        }
    };