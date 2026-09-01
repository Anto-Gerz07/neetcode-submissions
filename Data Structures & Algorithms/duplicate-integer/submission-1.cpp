class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            if (mpp.find(nums[i]) != mpp.end()){
                if(mpp.at(nums[i]) >= 2){
                    return true;
                }
            }

        }

        return false;
    }
};