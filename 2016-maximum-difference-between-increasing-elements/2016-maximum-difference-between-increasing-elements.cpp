class Solution {
public:
    int maximumDifference(vector<int>& p) {
        int sum = -1, res = 0;
        for(int i =0;i<p.size();i++){
            for(int j=i+1;j<p.size();j++){
                if(p[j]>p[i]){
                res = abs(p[i]-p[j]);
                sum = max(res , sum);
                }
            }
        }
        return sum;
    }
};