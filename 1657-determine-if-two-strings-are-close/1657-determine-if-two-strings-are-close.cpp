class Solution
{
    public:
        bool closeStrings(string word1, string word2)
        {

            if (word1.size() != word2.size())
            {
                return 0;
            }

            vector<int> arr1(26, 0);
            vector<int> arr2(26, 0);

            for (int i = 0; i < word1.size(); i++)
            {
                arr1[word1[i] - 'a']++;
                arr2[word2[i] - 'a']++;
            }

            for (int i = 0; i < 26; i++)
            {
                if ((arr1[i] && !arr2[i]) || (!arr1[i] && arr2[i]))
                {
                    return 0;
                }
            }

            sort(arr1.begin(), arr1.end());
            sort(arr2.begin(), arr2.end());

            for (int i = 0; i < 26; i++)
            {
                if (arr1[i] != arr2[i])
                {
                    return 0;
                }
            }

            return 1;
        }
};