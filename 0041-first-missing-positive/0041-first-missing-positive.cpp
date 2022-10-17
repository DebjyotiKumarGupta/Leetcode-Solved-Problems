class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    set<int> s(nums.begin(),nums.end());
    vector<int> v;
        int i;
        for( i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()) break;
        }
        return i ;
    }
};