class Solution {
public:
    int mySqrt(int n) {
        double i=1;
        while(i*i<=n){
            i++;
        }
        if(i*i==n) return i;
        return i-1;
    }
};