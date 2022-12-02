class Solution
{
    public:

        static bool comp(pair<string, int> a, pair<string, int> b)
        {
            return a.second < b.second;
        }

    string sortSentence(string s)
    {

        string ans = "";
        vector<pair<string, int>> arr;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] >= 48 && s[i] <= 57)
            {
                arr.push_back({ ans,
                    s[i] - '0' });

                ans = "";
            }
            else
            {
                if(s[i]!=' ')
                {
                      ans += s[i];
                }
              
            }
        }
        s.clear();
        sort(arr.begin(), arr.end(), comp);

         for(auto it:arr)
         {
             cout<<it.first<<" "<<it.second<<endl;
         }
        
        
        string temp = "";

        for (int i = 0; i < arr.size(); i++)
        {

            temp += arr[i].first + " ";
        }

        temp.pop_back();

        return temp;
    }
};