class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mappy;

        for (const auto& stringy: strs){
            string sorty = stringy;
            sort(sorty.begin(),sorty.end());

            mappy[sorty].push_back(stringy);
        }

        vector<vector<string>> result;
        for( auto& i : mappy){
            result.push_back(i.second);
        }
        return result;
    }
};
