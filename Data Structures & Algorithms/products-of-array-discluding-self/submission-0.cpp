class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size());

        for (int i = 0; i < nums.size(); i++){
            if (i == 0){
                prefix.push_back(nums[i]);
            }
            else{
                prefix.push_back(prefix[i-1] * nums[i]);
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--){
            if (i == nums.size() - 1){
                suffix[i] = nums[i];
            }
            else{
                suffix[i] = suffix[i + 1] * nums[i]; 
            }
        }

        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++){
            if (i == 0){
                ans[i] = suffix[i + 1];
            }
            else if(i == nums.size() -1 ){
                ans[i] = prefix[i - 1];
            }
            else{
                ans[i] = prefix[i-1] * suffix[i + 1];
            }
        }

        return ans;
    }
};
