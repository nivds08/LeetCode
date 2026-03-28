class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        int j = 0;
        while(j < n-1) {
            if(nums[j] != nums[j+1]) {
                nums[i] = nums[j];
                i++;
                j++;
            }
            else if(nums[j] == nums[j+1]) {
                nums[j] = nums[j]*2;
                nums[j+1] = 0;
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        int k = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[k]);
                k++;
            }
        }
        return nums;
    }
};