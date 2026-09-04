class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it: nums){
            count[it]++;
        }

        for (auto const& [key, value]: count){
            vector<int> temp;
            bucket[value].push_back(key);

        }
        vector<int> result;

        for (int i = bucket.size() - 1; i >= 0 && result.size() <= k; i--){
            if (bucket[i].size() != 0){
                for (int j = 0; j < bucket[i].size(); j++){
                    result.push_back(bucket[i][j]);
                    if (result.size() == k) return result;
                }
            }
        }

        return result;
    }
};
