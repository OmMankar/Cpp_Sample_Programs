#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool canConstruct(string s, int k) {
        vector<int> m(26, 0);
        for (auto i : s) {
            m[i - 'a']++;
        }
        int oddLen = count_if(m.begin(),m.end(),[](int i){return i%2?1:0;});
        return (s.length() < k || k < oddLen) ? false : true;
    }
};