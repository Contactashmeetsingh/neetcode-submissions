class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> wordBank;
       int answer = 0;
       int l = 0;

       for(int i = 0 ; i < s.size();i++){
            while(wordBank.find(s[i]) != wordBank.end()){
                wordBank.erase(s[l]);
                l++;
            }
            wordBank.insert(s[i]);
            answer = max(answer, i-l+1);
       }
        return answer;
    }
};
