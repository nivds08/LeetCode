class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size; //checking if k is greater than the size of the array
    //three function calls to the reverse function now
    
    reverse(nums, 0, size-1);   //reverse whole array
    reverse(nums, 0, k-1);      //reverse first k elements
    reverse(nums, k, size-1);   //rotating the whole array
    }

    void reverse(vector<int>& nums, int start, int end) {
    while(start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        //incrementing and decrementing the start and end to reach the middle element of the array
        start++;
        end--;
    }
}
};