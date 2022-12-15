class Solution {
public:
    bool squareIsWhite(string coordinates) {

        int cnt= (coordinates[0]+coordinates[1])%2;
        cout<<cnt<<endl;
        return (coordinates[0]+coordinates[1])%2;
    }
};
