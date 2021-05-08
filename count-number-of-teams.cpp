class Solution {
public:
    int numTeams(vector<int>& rating) {
        int i,j,k;
        int ans=0;
        for(i=1; i<rating.size()-1; i++)
        {
            int left[2]={0}, right[2]={0};
            for(j=0; j<i; j++){
                if(rating[j] < rating[i]){
                    left[0]++;
                }
                else left[1]++;
            }
            for(j=i+1; j<rating.size(); j++){
                if(rating[j] < rating[i]){
                    right[0]++;
                }
                else right[1]++;
            }
            ans += left[0]*right[1] + left[1]*right[0];
        }
        return ans;
    }
};