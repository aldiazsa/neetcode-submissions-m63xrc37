class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars_found[26] = {0};
    
        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.size(); i++){
            chars_found[s[i]-'a']++;
            chars_found[t[i]-'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(chars_found[i]!=0){
                return false;
            }
        }
        return true;         

    }
};
