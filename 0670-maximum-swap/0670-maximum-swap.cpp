class Solution {
public:
    int maximumSwap(int num) {
        string s1 = to_string(num);
        string s2 = s1;
        int mx=0,p=0,c=0;
        sort(s1.begin(),s1.end(),greater<int>());
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i] && c==0){
                p=i;
                c=1;
                mx=i;
            }
            if(s2[i]>=s2[mx] && c==1){
                mx=i;
            }
        }
        swap(s2[p],s2[mx]);
        return stoi(s2);
    }
};