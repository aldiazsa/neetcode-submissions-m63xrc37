class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int s = 0;
        int e = 1;
        
        if(nums.size() == 1){
            return true;
        }

        while(e < nums.size()){
            if( (nums[s] & 1) ==  (nums[e] & 1) ){
                return false;
            }
            s+=1;
            e+=1;
        }
        return true;

    }
};