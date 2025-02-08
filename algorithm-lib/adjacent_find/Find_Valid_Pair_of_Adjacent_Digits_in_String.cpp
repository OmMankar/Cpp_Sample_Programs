#include<string>
#include<map>
#include<algorithm>
using namespace std;
class Solution {
public:
    string findValidPair(string s) {
        map<int,int>m;
        for(auto i:s){
            m[i-'0']++;
        }
        string ans="";
        auto it=adjacent_find(s.begin(),s.end(),[&](char a, char b){
            if(m[a-'0']==a-'0' && m[b-'0']==b-'0' && a!=b){
                ans+=a;
                ans+=b;
                return true;
            }
            return false;
        });
        
       return ans.size()==2?ans:"";
    }
};
