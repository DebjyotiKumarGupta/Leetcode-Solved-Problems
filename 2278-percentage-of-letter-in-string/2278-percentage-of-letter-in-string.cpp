class Solution {
public:
    
    int percentageLetter(string s, char letter) {
        const int CHAR = 256;
       int count[CHAR]={0};
        int n = s.length(),m;
        for(int i =0;i<n;i++){
            count[s[i]]++;
        }
        for(int i =0;i<n;i++){
            if(s[i]==letter){
                m = (count[s[i]]*100)/n;
                return m;
            }
        }
        return 0;
        
    }
};