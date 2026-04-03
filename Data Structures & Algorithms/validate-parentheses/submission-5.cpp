class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        unordered_map<char, char> brackets= {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c  : s){
            cout << "c=" << c << endl;
            if(brackets.count(c)){
                if (!stack.empty() && stack.back() == brackets[c]){
                    stack.pop_back();
                } else {
                    return false;
                }
            } else {
                stack.push_back(c);
            }
        }
        return stack.empty();

    }
};
