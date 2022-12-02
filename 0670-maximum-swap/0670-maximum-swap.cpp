class Solution {
public:
    int maximumSwap(int x) {
        int num=x;
        vector<int> v;
        while(num!=0){
            v.push_back(num%10);
            num=num/10;
        }
        
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                swap(v[i],v[j]);
                int ans=0;
                for(int k=0;k<v.size();k++){
                    ans = ans*10+v[k];
                }
                x = max(x,ans);
                swap(v[i],v[j]);
            }
        }
        return x;
        
    }
};