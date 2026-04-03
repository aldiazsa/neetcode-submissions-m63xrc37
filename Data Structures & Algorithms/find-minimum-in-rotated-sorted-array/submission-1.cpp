class Solution {
public:
    int findMin(vector<int> &nums) {
        int r = nums.size() - 1;
        int l = 0;
        int m;
        while(r > l){
            m = l + (r - l)/2;
            if(nums[m] > nums[r]){
                l = m + 1;
            } else { 
                r = m;
            }
        }
        return nums[l];
    }
};

/*
//6 7 8 9 1 2 3 4 5
      l ^ r

l= 0 0 2 4
r= 8 4 4 4
m= 4 2 3



*/