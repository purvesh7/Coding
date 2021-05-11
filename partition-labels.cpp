class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> vc;
        map<char, int> mp;
        int i,j,k;
        for(i=0; i<S.size(); i++){
            mp[S[i]] = i;
            // cout<<S[i]<<" "<<mp[S[i]]<<endl;
        }
        i=0, j=mp[S[0]],k=0;
        while(i != S.size()){
            if(mp[S[i]] > j){
                j = mp[S[i++]];
            }
            else if(i == j){
                // cout<<i<<" "<<j<<" "<<k<<endl;
                vc.push_back(j-k+1);
                k=j+1;
                i++;
                j = mp[S[i]];
                // cout<<i<<" "<<S[i]<<" "<<j<<endl;
            }
            else{
                i++;
            }
        }
        return vc;
    }
};