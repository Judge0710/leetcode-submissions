class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
        {
            return false ;
        }
        unordered_map<char , int> countOne ;
        unordered_map<char , int> countTwo ; 
        for (int i = 0 ; i < s.length() ; i++)
        {
            countOne[s[i]]++;
            countTwo[t[i]]++;
        }
        if (countOne == countTwo)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }
};
