class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Really easy one pointer approach
        // Have the pointer (counter) be at the right index, increment it when a exchange occurs
        int cntr = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                int temp = nums[i];
                nums[i] = nums[cntr];
                nums[cntr] = temp;
                cntr++;
                
            }
            
        }
        return cntr;
    }
};