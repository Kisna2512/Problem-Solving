class Solution {
public:
 

 bool check(vector<int> arr1 , vector<int> arr2){
        for(int i = 0 ; i < 26 ; i++){
            if(arr1[i] < arr2[i])
                return false;
        }
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        
      vector<int> mp1(26,0);

      for(auto it:chars) 
      {
           mp1[it-'a']++;
      }
    long long sum=0;
    for(int i=0;i<words.size();i++)
    { 
          vector<int> mp2(26,0);

      for(auto it:words[i]) 
      {
           mp2[it-'a']++;
      }
       if(check(mp1,mp2))
       {
           sum+=words[i].size();
       }
    }
   return (int)sum;

    }
};
