class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> brackets= {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        if(s.length() <= 1){
            return false;
        }

        for( char c : s){
            if( c == ')' || c == ']' || c == '}'){
                if( !stack.empty() && (stack.top() == brackets[c])){
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }

        return stack.empty() ? true : false;
        

    }
};
