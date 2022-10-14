class Solution {
public:
    int arraySign(vector<int>& nums) {
        double sum = 1;
      for(auto x:nums){
          sum*=x;
      }  
        if(sum>0) return 1;
        else if(sum<0) return -1;
        else return 0;
        return 0;
    }
};