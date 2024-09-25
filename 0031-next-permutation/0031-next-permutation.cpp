class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        int index =-1;

        for(int i = n-2 ; i>=0 ; i--){
            if(a[i]<a[i+1]){
                index =i;
                break;
            }
        }

        if(index ==-1){
            return reverse(a.begin() , a.end());
        }

        for(int i =n-1 ; i>=0 ; i--){
            if(a[i]>a[index]){
                swap(a[i] , a[index]);
                break;
            }
        }

        reverse(a.begin()+index+1 , a.end());
        
    }
};