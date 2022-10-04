class Solution {
public:
    int isPrefixOfWord(string sentence, string s) {
        int m= 0, word=1;
        string str ="";
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' ') {
                word++;
                str="";
                continue;
            }
            str+=sentence[i];
            cout<<str;
            if(str==s){
                cout<<"hello";
                return word;
            }
        }
        return -1;
    }
};