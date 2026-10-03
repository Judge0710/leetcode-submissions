class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> count;

        for (int i = 0; i < s.size(); i++) {
            count[s[i]]++;
            count[t[i]]--;
        }

        for (auto [ch, freq] : count) {
            if (freq != 0)
                return false;
        }

        return true;
    }
};