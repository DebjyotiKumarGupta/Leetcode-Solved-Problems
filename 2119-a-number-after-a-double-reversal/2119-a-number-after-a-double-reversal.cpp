class Solution {
public:
    bool isSameAfterReversals(int num) {
       int x = num;
        int sum=0;
        while(x!=0){
            sum = sum*10 + (x%10);
            x/=10;
        }
          while(sum!=0){
            x = x*10 + (sum%10);
            sum/=10;
        }
        return (x==num);
    }
};