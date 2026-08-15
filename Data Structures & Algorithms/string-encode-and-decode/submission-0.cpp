class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for( auto& str : strs){
            encoded += to_string(str.size())+"#"+str;        
        }
        // cout<<encoded;
        return encoded;
    }

    vector<string> decode(string s) {
        if (s.empty()){
            return {};
        }
        vector<string> decoded;
        
        int i = 0;
        while(i < s.size()){
            int j = i;
            int length = 0;
            // cout << s[i]<<endl;
            
            while(s[j] != '#'){
                j++;
            }
            length = stoi(s.substr(i, j - i));
            cout<<"length is " <<length<<endl;
            i = j + 1;
            j = i + length;
            decoded.push_back(s.substr(i,length));
            cout<<"decoded word = "<< s.substr(i,length)<<endl;
            i = j;
            
        }
        return decoded;
    }
};
