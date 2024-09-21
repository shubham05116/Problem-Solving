class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //  char map_s[256] = { 0 };
        // char map_t[256] = { 0 };
        // int len = s.size();
        // for (int i = 0; i < len; ++i)
        // {
        //     map_s[s[i]]++;
        //     map_t[t[i]]++;
        //     if (map_s[s[i]]!=map_t[t[i]]) return false;
        // }
        // return true;  


        int hash[256]= {0};
      bool ischarMapped[256] ={0};
      int n = s.size();
      for(int i =0 ; i<n  ; i++){
          if(hash[s[i]]==0 && ischarMapped[t[i]]==0){
              hash[s[i]]=t[i];
              ischarMapped[t[i]]=true;
          }
      }
      for(int i =0 ;  i<n ;i++){
          if(char(hash[s[i]])!=t[i]){
              return false ;
          }
      }
      return true;

        
    }
};