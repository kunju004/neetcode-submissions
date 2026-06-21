class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        stack<char> st1;
        int si=s.length();
        if(si==0)
        return false;
    
        for(char c: s)
        {
            if(!st.empty())
            {
                if(st.top()=='(' and c==')')
                {
                    st.pop();
                    continue;
                }
                 else if(st.top()=='[' and c==']')
                {
                    st.pop();
                    continue;
                }
                 else if(st.top()=='{' and c=='}')
                {
                    st.pop();
                    continue;
                }
                else
                st.push(c);
            }
            else
            st.push(c);
        }
        if(st.empty())
        return true;

        return false;
    }
};
