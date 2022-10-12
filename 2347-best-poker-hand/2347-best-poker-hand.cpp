class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char,int> mp;  
        map<char,int> mpp;

        for(auto i:suits){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second==5) return "Flush";
        }
        for(auto i:ranks){
            mpp[i]++;
        }
        for(auto i:mpp){
            if(i.second>=3) return "Three of a Kind";
            // if(i.second==2) return "Pair";
        }
            for(auto i:mpp){
            // if(i.second>=3) return "Three of a Kind";
            if(i.second==2) return "Pair";
        }
      
        return "High Card";
        
    }
};