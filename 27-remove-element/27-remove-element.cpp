class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                count++;
                v.push_back(nums[i]);
            }
        }
        nums=v;
        return count;
    }
};