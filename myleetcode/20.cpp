class Solution {
private:
    stack<char> st;
public:
    bool isValid(string s) {
        for(int i = 0;i<s.size();i++) {
            if(s[i] == '['||s[i] == '{'||s[i]=='(') st.push(s[i]);
            else{
                if(st.empty()) return false;
                char topchar = st.top();
                st.pop();
                if(s[i] == ']'&&topchar != '[') return false;
                if(s[i] == '}'&&topchar != '{') return false;
                if(s[i] == ')'&&topchar != '(') return false;
            }
        }
        return st.empty();
    }
};