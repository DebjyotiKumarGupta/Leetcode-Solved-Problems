class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        vector<vector<int>> ans;

        for(auto i:nums1) s1.insert(i);
        
        for(auto i:nums2) s2.insert(i);
        
        vector<int> v1;
        for(auto i:s2) if(s1.find(i)==s1.end()) v1.push_back(i);
        
        vector<int> v2;
           for(auto i:s1) if(s2.find(i)==s2.end()) v2.push_back(i);
        ans.push_back(v2);
        ans.push_back(v1);
        return ans;
    }
};