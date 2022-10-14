class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n>0){
        int x = n-1;
        int res=0;
        while(x>0){
            x=x&(x-1);
            res++;
        }
        cout<<res<<"";
        if((n&(n-1))==0 && res%2==0){
            return true;
        }
        }
        return 0;
    }
};