class Solution {
public:
    string customSortString(string A, string B) {
        int i,j,k;
        string s= "";
        unordered_map<char, int> mp;
        for(i=0; i<B.size(); i++){
            if(mp[B[i]]){
                mp[B[i]]++;
            }
            else{
                mp[B[i]]=1;
            }
        }
        for(i=0; i<A.size(); i++){
            if(mp[A[i]]){
                s = s + string(mp[A[i]], A[i]);
                mp[A[i]]=0;
            }
        }
        for(auto m:mp){
            if(m.second){
                s = s + string(m.second, m.first);
            }
        }
        return s;
    }
};