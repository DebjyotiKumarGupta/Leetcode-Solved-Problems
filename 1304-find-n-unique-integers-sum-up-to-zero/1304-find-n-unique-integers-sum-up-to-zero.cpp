class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int z = n/2;
          while(z){
              v.push_back(-z);
              z--;
          }
          if(n%2!=0) v.push_back(0);
           z=n/2;
           while(z){
               v.push_back(z);
               z--;
           }
           
       
        return v;
    }
};