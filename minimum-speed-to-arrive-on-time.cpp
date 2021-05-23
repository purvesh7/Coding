class Solution {
public:

    bool traverse(vector<int> d, int mi, double hour){
        double time=0;
        int i;
        for(i=0; i<d.size()-1; i++){
            time += ((d[i] + mi - 1) / mi);
        }
        time+= 1.0*d[i]/mi;
        // cout<<time<<" "<<hour<<endl;
        return time<=hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int lo,hi,mi;
        lo=1,hi=1e7;
        if(dist.size() >= ceil(hour)+1){
            return -1;
        }
        while(lo<hi){
            mi = (lo+hi)/2;
            // cout<<mi<<endl;
            if(traverse(dist, mi, hour)){
                hi = mi;
                // cout<<hi<<endl;
            }
            else{
                lo = mi+1;
            }
        }
        return hi;
    }
};