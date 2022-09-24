class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int pos ;
        vector<int> v;
       // stack<int> s;
        for(int i =0;i<nums1.size();i++){
            int key = nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==key){
                    pos = j;
                    break;
                }
            }
            bool flag = false;
            for(int j=pos+1;j<nums2.size();j++){
                if(nums2[j]>key){
                    v.push_back(nums2[j]);
                    flag = true;
                    break;
                }
                
            }
            if(flag==false){
                v.push_back(-1);
            }
            
        }
        return v;
    }
};