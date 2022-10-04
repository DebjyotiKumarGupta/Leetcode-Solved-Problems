class Solution {
public:
    string interpret(string c) {
        string s="";
        for(int i =0 ;i<c.length();i++){
            if(c[i]=='G'){
                s+='G';
            }
            else if(c[i]=='(' && c[i+1]==')'){
                s+='o';
                i++;
            }
            else{
                s+="al";
                i+=3;
            }
        }
        
        return s ;
        
    }
};