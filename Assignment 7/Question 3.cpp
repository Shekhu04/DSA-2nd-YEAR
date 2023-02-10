class Solution {
public:
    int arrangeCoins(int n) {
        //find x s.t. (x + 1) * x / 2 <= n
        //x*x < x*x+x <= 2*n < (x+1)*(x+1)
        //x < sqrt(2*n) < x+1
        int x = ceil(sqrt(2)*sqrt(n));
        
        while((x+1)*(x/2.0) > n){
            x--;
        }
        
        return x;
    }
};
