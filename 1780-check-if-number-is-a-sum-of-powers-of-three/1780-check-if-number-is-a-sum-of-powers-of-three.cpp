class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n==1) return 1;
       int num , res=-1 , pow=0;
        while(n>0){
            num=1;
            res =0;
            while(num*3<=n){
                num *= 3;
                res++;
            }
            if(res==pow) return 0;
            n = n-num;
            if(n==1) return 1;
            if(n==2) return 0;
            pow = res;
            
            
        }
        return 1;
    }
};