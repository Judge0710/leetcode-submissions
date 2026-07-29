class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        if (s1.length() > s2.length())
        {
            return false;
        }

        int left = 0;
        int right = s1.size() - 1;

        vector<int> s1Count(26, 0);
        vector<int> s2Count(26, 0);

        // Build frequency arrays
        for (int i = 0; i < s1.length(); i++)
        {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }

        if (s1Count == s2Count)
        {
            return true;
        }

        while (right != s2.size() - 1)
        {
            s2Count[s2[left] - 'a']--;      // Remove leftmost character
            left++;

            right++;
            s2Count[s2[right] - 'a']++;     // Add new right character

            if (s1Count == s2Count)
            {
                return true;
            }
        }

        return false;
    }
};