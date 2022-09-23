class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i=digits.size()-1;i>=0;i--){
            int v = digits[i]+carry;
            if(v==10){
                digits[i]=0;
                carry = 1;
            }
            else{
                digits[i]=v;
                carry =0;
            }
        }
        if(carry == 1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};