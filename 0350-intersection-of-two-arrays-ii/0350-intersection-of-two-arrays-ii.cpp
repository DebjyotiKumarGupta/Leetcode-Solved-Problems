class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        vector<int> v;
        for(auto i:nums1){
            mp1[i]++;
        }
        for(auto k:nums2){
            if(mp1.find(k)!=mp1.end() && mp1[k]>0){
                v.push_back(k);
                mp1[k]--;
            }
        }
        return v;
    }
};