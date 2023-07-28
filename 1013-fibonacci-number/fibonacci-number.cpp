class Solution {
public:
    int fibo(int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int ans=fibo(n-1)+fibo(n-2);
        return ans;
    }
    int fib(int n) {
        int ans=fibo(n);
        return ans;
    }
};