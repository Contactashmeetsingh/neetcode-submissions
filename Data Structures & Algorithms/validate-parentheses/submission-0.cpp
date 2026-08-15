class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
        unordered_map<char,char> chars {{']','['},{')','('},{'}','{'}};
        stack<char> stackky;

        for(char c : s){
            if(c == '['||c == '('||c == '{'){
                stackky.push(c);
                // cout<<c;
            }
            else{

                if(!stackky.empty() && stackky.top()== chars[c]){
                    stackky.pop();
                }
                else{ return false;}
            }

        }
        return stackky.empty();
    }
};
