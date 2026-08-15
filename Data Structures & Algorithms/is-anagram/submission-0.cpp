#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char, int> ss;
        unordered_map<char, int> tt;
        
        for(int i = 0 ; i <s.size(); i++){
            ss[s[i]]++ ;
            tt[t[i]] += 1;

            cout<<t[i];
            cout<<tt[t[i]];
        }

        if(ss!=tt){
            return false;
        }

    return true;
    }
};
