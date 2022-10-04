class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> m;
        for(auto c:nums){
            m[c]++;
        }
        for(auto i:m){
            if(i.second>1){
                return i.first;
            }
        }
        return -1;
        
    }
};