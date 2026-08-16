class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int l = s.size()-1;

        while(i < l){
            if(toupper(s[i])==toupper(s[l])){ 
            }
            else{
                return false;
            }
            cout<<"s[i] ="<< s[i]<<endl;
            cout<<"s[l] ="<< s[l]<<endl;

            i++;
            l--;

        }
        return true;
    }
};
