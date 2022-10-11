class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int z = nums.size()-1;
            while(j<z){
                int sum = nums[i]+nums[j]+nums[z];
                if(sum==0){
                    s.insert({nums[i],nums[j],nums[z]});
                    j++;
                    z--;
                }
                else if(sum>0){
                    z--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};