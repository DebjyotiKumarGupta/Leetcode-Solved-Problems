class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0 , count =0;
        for(int i=0;i<nums.size();i++){
            if(count){
                count+=(nums[i]==nums[res]? 1 : -1);
                cout<<count<<" ";
            }
            else{
                res = i;
                count =1;
            }
        }
        cout<<nums[res]<<" "<<count;
        count =0;
              for(int i=0;i<nums.size();i++)
              {
                  if(nums[i]==nums[res]) count++;
              }
        if(count<=nums.size()/2) return -1;
        return nums[res];
        
    }
};