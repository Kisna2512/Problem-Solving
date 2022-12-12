class Solution {
public:

    bool isPalindrome(string s)
    {
        int low=0;
        int high=s.size()-1;

        while(low <= high)
        {
            if(s[low]!=s[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
   

    string firstPalindrome(vector<string>& words) {
        
      for(auto it:words)
      {
          if(isPalindrome(it))
          {
              return it;
          }
      }

    return "";

    }
};
