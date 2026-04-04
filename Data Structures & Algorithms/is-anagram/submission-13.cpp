class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> freq(26);
        std::unordered_map<char, int> count_s;
        std::unordered_map<char, int> count_t;

        if(s.size() != t.size()){
            return false;
        }
        
        for(int i=0; i < s.size(); i++){
            count_s[s[i]]++;
            count_t[t[i]]++;
        }

        return (count_s == count_t) ? true : false;
    }
};

/*
j 0
a 0

*/