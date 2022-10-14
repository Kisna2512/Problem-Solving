class Solution
{
    public:
    int mod=1e5;
        int evalRPN(vector<string> &tokens)
        {

            stack<int> st;
            int ans = 0;
            int i = 0;
            while (i < tokens.size())
            {

                if (tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "-")
                {
                    string s = tokens[i];
                    
                    long ele1 = st.top();
                    st.pop();

                    long ele2 = st.top();
                    st.pop();

                    if (s == "+")
                    {
                        st.push( ele2 + ele1);
                    }
                    else if (s == "-")
                    {
                        st.push( ele2 - ele1);
                    }
                    else if (s == "*")
                    {
                        st.push( ele2 * ele1);
                    }
                    else if (s == "/")
                    {
                        st.push( ele2 / ele1);
                    }
                }
                else
                {
                    st.push(stoi(tokens[i]));
                }
                i++;
            }

            return st.top();
        }
};