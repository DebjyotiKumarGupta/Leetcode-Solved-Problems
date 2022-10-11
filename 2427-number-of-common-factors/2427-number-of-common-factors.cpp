class Solution {
public:
    int commonFactors(int a, int b) {
        int i = min(a,b), curr=0;
        for(int z=1;z<=i;z++){
            if(a%z==0 && b%z==0) curr++;
        }
        return curr;
    }
};