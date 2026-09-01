class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++){
            int checkNum = target - nums[i];
            if (mpp.find(checkNum) != mpp.end()){
                return {mpp.at(checkNum), i};
            }
            else{
                mpp[nums[i]] = i;
            }

        }
        return {0};
    }
};
