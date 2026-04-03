class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int r = n - 1;
        int l = 0;
        int m;

        while(l < r){
            m = l + (r - l) / 2;
            if(nums[m] > nums[r]){
                l = m + 1;
            } else {
                r = m;
            }
        }

        return nums[l];        
    }
};
