class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> freq(26);

        if(s.size() != t.size()){
            return false;
        }

        for(int i =0; i < s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        
        for(const auto& num : freq){
            if(num != 0){
                return false;
            }
        }
        return true;
    }
};

/*
j 0
a 0

*/