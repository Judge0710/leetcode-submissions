class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
 int j = 0;
 string result(word1.length() + word2.length(), '0');
 int k = 0;
 while(i < word1.length() || j < word2.length())
 {
  if(i < word1.length())
  {
   result[k++] = word1[i++];
  }
  if(j < word2.length())
  {
   result[k++] = word2[j++];
  }
 }
 return result;
    }
};