#include<algorithm>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int isPrefixAndSuffix(const string& str1, const string& str2) {
        int len1 = str1.size();
        int len2 = str2.size();
        if (len1 > len2) {
            return 0;
        }

        int str1Len = len1;
        auto it = search(str2.begin(), str2.begin() + str1Len, str1.begin(),
                         str1.end());
        if (it != str2.begin()) {
            return 0;
        }

        int si = str2.size() - str1.size();
        it = search(str2.end() - len1, str2.end(), str1.begin(), str1.end());
        if (it != str2.end() - len1) {
            return 0;
        }
        return 1;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                cnt += isPrefixAndSuffix(words[i], words[j]);
            }
        }
        return cnt;
    }
};