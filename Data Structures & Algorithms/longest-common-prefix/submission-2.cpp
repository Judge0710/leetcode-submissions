
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";

        for (int i = 0; i < strs[0].size(); i++) {
            char curr = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || curr != strs[j][i]) {
                    return ans;
                }
            }

            ans.push_back(curr);
        }

        return ans;
    }
};
