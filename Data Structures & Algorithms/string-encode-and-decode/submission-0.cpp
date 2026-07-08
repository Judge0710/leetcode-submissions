class Solution {
public:
    string encode(vector<string>& strs) 
    {
        string res = "";
        for(string str : strs)
        {
            int len = str.size();
            res.append(to_string(len));
            res.append(":");
            res.append(str);
        }
        return res;
    }

    vector<string> decode(string s) 
    {
        vector<string> res;
        int i = 0;

        while (i < s.size())
        {
            int colonPos = i;
            while (s[colonPos] != ':') 
            {
                colonPos++;
            }

            string lenStr = s.substr(i, colonPos - i);
            int len = stoi(lenStr);

            i = colonPos + 1;

            string temp = s.substr(i, len);
            res.push_back(temp);

            i += len;
        }

        return res;
    }
};