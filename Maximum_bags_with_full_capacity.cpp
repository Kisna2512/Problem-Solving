class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i=0;i<capacity.size();i++){
            rocks[i]=capacity[i]-rocks[i];
        }
        map<int,int>mp;
        for(auto it:rocks){
            mp[it]++;
        }
       int count=0,check_remaining_rock,n;
       for(auto it:mp){
           cout<<it.first<<","<<it.second<<endl;
            if(it.first==0){
                count+=it.second;
            }else{
                
                check_remaining_rock=additionalRocks-(it.second)*it.first;
                if(check_remaining_rock>=0){
                    count+=it.second;
                    additionalRocks-=(it.second)*it.first;
                }else{
                   n=additionalRocks/it.first;
                   count+=n;
                   additionalRocks=additionalRocks%it.first;
                }
            }
        }
        return count;
    }
};
