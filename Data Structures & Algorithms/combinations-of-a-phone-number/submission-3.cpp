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

    void backtrack(int index, std::string s, string& digits){
        if(s.size() == digits.size()){
            res.push_back(s);
            return;
        }
        for(char c: digitMap[digits[index] - '0']){
            backtrack(index + 1, s + c, digits);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return res;
        backtrack(0, "", digits);
        return res;
    }


};


/*
               input: 23
                2
             /  |  \
            a   b   c
          / | \  
         d  e  f
*/