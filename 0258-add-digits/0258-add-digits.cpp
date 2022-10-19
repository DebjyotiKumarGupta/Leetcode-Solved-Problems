class Solution {
public:
    int addDigits(int num) {
        int x = num;
        int sum =0;
        while((num/10)>0){
            while(x!=0){
                sum += (x%10);
                x/=10;
            }
            num = sum;
            x = num;
            sum =0;
        }
        return num;
    }
};