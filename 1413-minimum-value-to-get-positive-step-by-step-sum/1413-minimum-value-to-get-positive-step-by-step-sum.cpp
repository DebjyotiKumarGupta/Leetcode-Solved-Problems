class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int curr=0, sum =0;
        for(int i =0;i<nums.size();i++){
            sum+= nums[i];
            if(sum<1){
                while(sum!=1){
                    curr++;
                    sum++;
                }
            }
        }
        if(curr==0) return 1;
        
        return curr;
    }
};