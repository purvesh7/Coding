class Solution {
public:
    int count = 1;

    void traverse(string s, int l, int r){
        while( l>=0 && r<s.size() && s[l]==s[r]){
            count++;
            l--;
            r++;
            // cout<<count<<l<<r;
        }
    }

    int countSubstrings(string s) {
        if(s.size()==0){
            return 0;
        }
        for(int i=0; i<s.size()-1; i++){
            traverse(s,i,i);
            traverse(s,i,i+1);
        }
        return count;
    }
};