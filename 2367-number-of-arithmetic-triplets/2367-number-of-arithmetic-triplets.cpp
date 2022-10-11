class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        set<int> s;
        int curr=0;
          for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }
        for(auto &k:s){
            if(s.find(diff+k)!=s.end() && s.find(2*diff+k)!=s.end()){
                curr++;
            }
        }
        return curr;
    }
};