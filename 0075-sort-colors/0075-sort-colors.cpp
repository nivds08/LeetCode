class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int i = 0;

        for(int j = 0; j < n; j++) {
            if(nums[j] == 0) {
                swap(nums[j], nums[i]);
                i++;
            }

        }
        int k = n-1;
        for(int j = n-1; j >= 0; j--) {
            if(nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            }
        }
    }
};