class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> values;

        for(const auto& num : nums){
            if(values.count(num)){
                return true;
            } else {
                values.insert(num);
            }
        }
        return false;
    }
};