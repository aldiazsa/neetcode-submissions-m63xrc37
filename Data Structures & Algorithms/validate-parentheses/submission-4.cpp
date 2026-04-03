class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> brackets= {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c  : s){
            cout << "c=" << c << endl;
            if(brackets.count(c)){
                if (!stack.empty() && stack.top() == brackets[c]){
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();

    }
};
