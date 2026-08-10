class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> st;

        for (string token : tokens)
        {
            if (token == "+")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                int ans = second + first;
                st.push(ans);
            }

            else if (token == "-")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                int ans = second - first;
                st.push(ans);
            }

            else if (token == "*")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                int ans = second * first;
                st.push(ans);
            }

            else if (token == "/")
            {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                int ans = second / first;
                st.push(ans);
            }

            else
            {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};