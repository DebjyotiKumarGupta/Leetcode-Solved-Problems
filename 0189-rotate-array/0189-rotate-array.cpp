class Solution {
public:
    void reverse1(vector<int>& arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }  
} 
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        k = k % nums.size();
        if(k < 0){ 
            k += nums.size();
        }
        k = nums.size()-k;
        reverse1(nums,0,k-1);
        reverse1(nums,k,n-1);
        reverse1(nums,0,n-1);
    }
};