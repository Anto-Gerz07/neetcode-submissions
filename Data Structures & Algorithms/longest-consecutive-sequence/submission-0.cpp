class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        else if (nums.size() == 1){
            return 1;
        }
        unordered_set<int> st;
        int max = -99;
        for (int it: nums){
            st.insert(it);
        }

        for (int it: st){
            int ele = it;
            if (st.contains(ele - 1)) continue;
            else{
                int cnt = 0;
                // ele++;
                while (st.find(ele) != st.end()){
                    cnt++;
                    ele++;
                }
                if (cnt > max){
                    max = cnt;
                }
            }
        }
        return max;
    }
};
