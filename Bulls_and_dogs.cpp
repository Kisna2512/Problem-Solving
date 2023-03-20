class Solution
{
public:
    string getHint(string secret, string guess)
    {
        unordered_map<char, int> a, b;
        int bull = 0;
        int cow = 0;
        for (int i = 0; i < guess.size(); i++)
        {
            a[secret[i]]++;
            b[guess[i]]++;

            if (secret[i] == guess[i])
            {
                bull++;
                a[secret[i]]--;
                b[guess[i]]--;
            }
        }

        for (auto it : a)
        {
            if (b[it.first] > 0)
            {
                cow += min(a[it.first], b[it.first]);
            }
        }
        string ans = "";
        ans = to_string(bull) + 'A' + to_string(cow) + 'B';
        return ans;
    }
};