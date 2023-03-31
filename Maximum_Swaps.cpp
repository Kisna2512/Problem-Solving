class Solution
{
public:
    int maximumSwap(int num)
    {
        vector<int> v;
        string str = "";
        int maxi = num;
        while (num != 0)
        {
            int rem = num % 10;
            str = to_string(rem) + str;
            num /= 10;
        }
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = i + 1; j < str.size(); j++)
            {
                swap(str[i], str[j]);
                maxi = max(maxi, stoi(str));
                swap(str[j], str[i]);
            }
        }

        return maxi;
    }
};