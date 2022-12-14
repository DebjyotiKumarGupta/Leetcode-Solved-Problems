class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> mp;
        for(int i =0;i<nums2.size();i++){
            for(int j=i;j<nums2.size();j++){
                if(nums2[j]>nums2[i]){
                    mp.insert({nums2[i],nums2[j]});
                    break;
                }
            }
        }
    vector<int> ans;
        for(int i = 0 ; i < nums1.size(); i++)
        {
            if(mp[nums1[i]])
                ans.push_back(mp[nums1[i]]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};