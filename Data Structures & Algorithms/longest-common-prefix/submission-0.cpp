class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = 201;
        string minStr = "";
        string res = "";
        for (int i = 0; i < strs.size(); i++){
            if (strs[i].size() < min){
                minStr = strs[i];
            }
        }

        for (int i = 0; i < minStr.size(); i++){
            for (auto it : strs){
                if (it[i] != minStr[i]){
                    return res;
                }
            }
            res += minStr[i];
        }

        return res;
    }
};