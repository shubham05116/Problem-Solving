class Solution {
public:
int fibo (int  n){
    if(n==0)
    return 0;
    if(n==1){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
    int fib(int n) {
        //recursion:
        // return fibo(n);
        

        //without recursion : 
          int i=0,j=1,sum=0,t=0,k=2;
        if(n==0) return 0;
        if(n==1) return 1;
        while(k<=n){
            sum=i+j;
            t=j;
            j=sum;
            i=t;k++;
        }
        return sum;
    }
};