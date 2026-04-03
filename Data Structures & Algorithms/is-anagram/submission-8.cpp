using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int l = 0;
        int r = s.length();
        std::unordered_map<char, int> freq;

        if(s.length() != t.length()){
            return false;
        }

        for(int i=0; i<s.length(); i++){
            freq[s[i]] +=1;
            freq[t[i]] -=1;
        }

        for(const auto& pair : freq){
            if(pair.second != 0){
                return false;
            }
        }
        

        return true;
    }
};
