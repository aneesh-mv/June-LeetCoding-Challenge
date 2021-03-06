/*
Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int zero =0, left = 0, right = nums.size()-1;
    while (left <= right) {
        if (nums[left] == 0) 
            swap(nums[left++], nums[zero++]);
        
        else if (nums[left] == 2) 
            swap(nums[left], nums[right--]);
        
        else
            left++;
    }
}
};
