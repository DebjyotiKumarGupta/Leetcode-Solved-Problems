class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> v;
        long long sum =0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum += nums[j];
                v.push_back(sum);
            }
            sum =0;
        }
        sum=0;
        sort(v.begin(),v.end());
     	int res = accumulate(v.begin() + left - 1, v.begin() + right, 0LL) % 1000000007;
	return res;
    }
};