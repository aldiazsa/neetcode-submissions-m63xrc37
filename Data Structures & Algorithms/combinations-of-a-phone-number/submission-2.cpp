#include <unordered_map>

class Solution {
public:
    std::vector<std::string> res;
    std::unordered_map<int, std::string> digitMap = {
                                                    {2, "abc"},
                                                    {3, "def"},
                                                    {4, "ghi"},
                                                    {5, "jkl"},
                                                    {6, "mno"},
                                                    {7, "pqrs"},
                                                    {8, "tuv"},
                                                    {9, "wxyz"}
                                                    };

    void backtracking(int i, string str, std::string& digits){
        if(str.size() == digits.size()){
            res.push_back(str);
            return;
        }
        for(char c : digitMap[digits[i]-'0']){
            backtracking(i + 1, str + c, digits);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return res;
        backtracking(0,"",digits);
        return res;
    }
};
