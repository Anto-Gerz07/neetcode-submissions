class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        for (auto it: s){
            mpp[it]++;
        }

        for (auto it: t){
            if (mpp.find(it) != mpp.end()){
                mpp[it]--;
                if(mpp.at(it) < 0){
                    return false;
                }
            }
            else{
                return false;
            }
        }

        for (const auto& [key, value]: mpp){
            if (value > 0 ){
                return false;
            }
        }

        return true;
    }
};
