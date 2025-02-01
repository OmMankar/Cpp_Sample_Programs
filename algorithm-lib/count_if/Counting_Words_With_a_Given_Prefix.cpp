#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {

        return count_if(words.begin(), words.end(), [&](string s) {
            if (search(s.begin(), s.end(), pref.begin(),pref.end()) == s.begin()) {
                return 1;
            }
            return 0;
        });
    }
};