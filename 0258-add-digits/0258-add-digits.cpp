class Solution {
public:
    int addDigits(int num) {
        int x = num;
        int sum =0;
        while((num/10)>0){
            cout<<num<<" ";
            while(x!=0){
                int rem = x%10;
                sum = sum + rem;
                x/=10;
            }
            num = sum;
            x = num;
            sum =0;
        }
        return num;
    }
};