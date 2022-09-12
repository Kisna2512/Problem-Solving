class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0;
        int j=tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        int score=0;
        int maxscore=0;
        while(i<=j)
        {
            if(power >= tokens[i])
            {
                power-=tokens[i];
                i++;
                score+=1;
            }else if(score > 0){
                power+=tokens[j];
                j--;
                score-=1;
            }else
            {
                break;
            }
            maxscore=max(maxscore,score);
        }
        return maxscore;
    }
};
