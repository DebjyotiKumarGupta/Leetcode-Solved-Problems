class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> s1 ; 
       vector<int> v;

        for(auto i:nums1){
            s1.insert(i);
        }
        for(int i=0;i<nums2.size();i++){
            if(s1.find(nums2[i])!=s1.end()){
                v.push_back(nums2[i]);
            }
            s1.erase(nums2[i]);
        }
        return v;
        
    }
};