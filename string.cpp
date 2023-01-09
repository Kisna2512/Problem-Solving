class Solution {
public:
    string decodeAtIndex(string S, int K) {
        int n = S.length();
        long size = 0;
        for(int i=0;i<n;i++) { //this loops gives the size of the string after decoding
            if(isdigit(S[i]))
                size = size * (S[i]-'0');
            else 
                size++;
        }
        for(int i=n-1;i>=0;i--) {
            K = K % size;
            if(K==0 && isalpha(S[i])) 
                return (string) "" + S[i]; //when a string is repeated some number of times and now the final length is 'size' then the element will be same for index K and index K%size
            if(isdigit(S[i])) 
                size = size / (S[i]-'0'); //if its a digit move back that many number of times
            else 
                size--;  //else if its an alphabet then go to the previous index
        }
        return "";
    }
};
