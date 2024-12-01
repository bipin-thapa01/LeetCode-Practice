class Solution
{
public:
  bool isPalindrome(string s)
  {
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] >= 97 && s[i] <= 122)
      {
        ans += s[i];
      }
      else if (s[i] >= 65 && s[i] <= 90)
      {
        ans += s[i] + 32;
      }
      else if (s[i] >= 48 && s[i] <= 57)
      {
        ans += s[i];
      }
    }
    s = ans;
    reverse(ans.begin(), ans.end());
    if (s == ans)
    {
      return true;
    }
    return false;
  }
};