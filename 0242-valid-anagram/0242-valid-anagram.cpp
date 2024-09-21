class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int tt= t.length();
      int  hash[256]={0};

      for(int i =0 ; i< n ; i++){
          hash[s[i]]++;
      }

      for(int i =0 ; i<tt; i++){
          hash[t[i]]--;
      }

      for(int i =0; i< 256 ;i++){
          if(hash[i]!=0){
              return false;
          }
      }
       return true;
        
    }
};