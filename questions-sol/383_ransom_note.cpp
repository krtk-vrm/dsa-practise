/*Approach - Used a frequency array to store the frequency of each character in the magazine, then checked if the frequency of each character in the ransom note is less than or equal to the frequency of each character in the magazine.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    int mpp[26];
    for (char i : magazine) {
      mpp[i - 'a']++;
    }
    for (char i : ransomNote) {
      if (mpp[i - 'a'] == 0)
        return false;
      else
        mpp[i - 'a']--;
    }
    return true;
  }
};