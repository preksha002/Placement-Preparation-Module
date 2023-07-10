class Solution {
public:
    double myPow(double x, int n) 
    {
        if(n==0)
        {
            return 1;
        }
        if(n<0)
        {
            n=abs(n);
            x=1/x;
        }
        double xpnb2 = myPow(x,n/2);
        double xi = xpnb2*xpnb2;
        if(n%2)
        {
            xi=xi*x;
        }
        return xi;  
    }
};
