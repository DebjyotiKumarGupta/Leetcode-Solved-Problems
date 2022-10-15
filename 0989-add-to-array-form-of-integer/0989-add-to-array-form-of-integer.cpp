class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int i=num.size()-1;
        int carry=0;
        while(i>=0 || k!=0 ||carry!=0){
            int sum=0;
            if(i>=0){
                sum=sum+num[i];
            }
            sum+=k%10+carry;
            if(sum>=10){
                sum=sum%10;
                carry=1;
            }
               else{
                   carry=0;
                   }
            ans.push_back(sum);
               k/=10;
               i--;
        }
        reverse(ans.begin(),ans.end());
       return ans;
    }
};