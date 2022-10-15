class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0;
        string str="";
        while(i>=0 || j>=0 || carry!=0){
            int d1=0,d2=0;
            if(i>=0){
                 d1=num1[i]-'0';
            }
            if(j>=0){
                 d2=num2[j]-'0';
            }
            int sum = d1+d2+carry;
            if(sum>=10){
               str+= (char)((sum%10)+'0');
                carry=1;
            }
            else{
                str+=(char)((sum%10)+'0');
                carry=0;
            }
            i--;
            j--;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};