class Solution {
public:
    int maxArea(vector<int>& A) {
        int ans=0;
        int i=0, j= A.size()-1;
        while(i<j){
            int h = min(A[i], A[j]);
            ans = max(ans, h*(j-i));
            while(h >= A[i] && i<j) i++;
            while(h >= A[j] && i<j) j--;
        }
        return ans;
    }
};