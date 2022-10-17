class Solution {
public:
     int mostFrequentEven(vector<int>& nums) {
        int fre = -1;
        int ans= INT_MIN;
        map<int,int>m;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            {
                m[nums[i]]++;
            }
        }
        for(auto i:m)
        {
            if(fre<i.second)
            {
                fre = i.second;
                ans = i.first;
            }
        }
        if(ans == INT_MIN){
            return -1;
        }
        return ans;
     
    }
};