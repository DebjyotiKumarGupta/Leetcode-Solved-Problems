class Solution {
public:
    int countAsterisks(string s) {
        stack<int> st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
              count++;
                if(count==2){
                    while(st.top()!='|'){
                        st.pop();
                    }
                    st.pop();
                    count=0;
                }
                st.push(s[i]);
            }
            else if(s[i]=='*'){
                st.push(s[i]);
            }
            else{
                continue;
            }
        }
        count=0;
        while(!st.empty()){
            if(st.top()=='*'){
                count++;
            }
            st.pop();
        }
        return count;
        
    }
};