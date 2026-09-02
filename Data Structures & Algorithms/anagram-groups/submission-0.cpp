class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;

        for (auto it: strs){
            string tempStr = it;
            sort(it.begin(), it.end());

            mpp[it].push_back(tempStr);
        }

        for (auto const& [key, value]: mpp){
            ans.push_back(value);
        }

        return ans;
    }
};
