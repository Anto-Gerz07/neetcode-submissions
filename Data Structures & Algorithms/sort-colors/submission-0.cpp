class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Dutch national flag algo
        int low = 0;
        int high = nums.size() -1;
        int i = 0;

        while (i <= high){
            if (nums[i] == 0){
                int temp = nums[i];
                nums[i]= nums[low];
                nums[low] = temp;
                low++;
                i++;
            }

            else if (nums[i] == 1){
                i++;
            }

            else if (nums[i] == 2){
                int temp = nums[high];
                nums[high] = nums[i];
                nums[i] = temp;
                high--;
            }
        }
    }
};