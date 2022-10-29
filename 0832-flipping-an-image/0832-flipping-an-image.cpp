class Solution
{
    public:
        vector<vector < int>> flipAndInvertImage(vector<vector < int>> &image)
        {

            int n = image.size();
            int m = image[0].size();

            for (int i = 0; i < n; i++)
            {
                reverse(image[i].begin(), image[i].end());
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (image[i][j] == 1)
                    {
                        image[i][j] = 0;
                    }
                    else
                    {
                        image[i][j] = 1;
                    }
                }
            }

            return image;
        }
};