class Solution {
public:
    int gcd(int a , int b){
        if(b==0){
            return a;
        }
        else{
            return gcd(b,a%b);
        }
    }
    bool isGoodArray(vector<int>& nums) {
        int n =0;
        for(int i=0;i<nums.size();i++){
             n = gcd(n,nums[i]);
            if(n==1){
                return true;
            }
        }
        return false;
    }
};