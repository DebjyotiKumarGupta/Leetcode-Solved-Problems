class Solution {
public:
    string reversePrefix(string word, char ch) {
        int start =0, end ;
        bool flag = false;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
              end = i;
              flag = true;
              break;
            }
        }
        if(flag==true){
        while(start<end){
            swap(word[start],word[end]);
            start++;
            end--;
        }
        }
        return word;
    }
};