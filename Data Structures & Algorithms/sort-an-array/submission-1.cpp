class Solution {
public:
    void merge (vector<int> &num, int left, int mid, int right){
            int i = left;
            int k = mid + 1;
            vector<int> sortedArr;
            while (i <= mid && k <= right){
                if (num[i] < num[k]){
                    sortedArr.push_back(num[i]);
                    i++;
                }
                else{
                    sortedArr.push_back(num[k]);
                    k++;
                }
            }

            while (i <= mid){
                sortedArr.push_back(num[i]);
                i++;
            }

            while (k <= right){
                sortedArr.push_back(num[k]);
                k++;
            }

            for (int i = left; i <= right; i++){
                num[i] = sortedArr[i - left];
            }
        }

        void mergesort (vector<int> &arr, int left, int right){
            if (left >= right) return;

            int mid = left + (right - left)/ 2;
            mergesort(arr, left, mid);
            mergesort(arr, mid + 1, right);

            merge(arr, left, mid, right);
        }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};