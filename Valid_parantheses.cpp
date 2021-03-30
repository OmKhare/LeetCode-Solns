#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char& c: s){
            switch (c){
                case '(': st.push(c); break;
                case '[': st.push(c); break;
                case '{': st.push(c); break;
                case ')': if(st.empty() || st.top()!='(') return false; else st.pop(); break;
                case ']': if(st.empty() || st.top()!='[') return false; else st.pop(); break;
                case '}': if(st.empty() || st.top()!='{') return false; else st.pop(); break;
                default: ;
            }
        }
        return st.empty();
    }
};