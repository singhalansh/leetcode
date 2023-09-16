class Solution {
public:
    bool isPalindrome(int x) {
        long int ans= 0;
        int num=x;
        if (x<0){
            return false;
            }
        while(x!=0){
            int n=x%10;
            ans = ans *10 +n;
            x=x/10;            
        }
        if(ans == num){
            return true;
        }
        return false;

    }
};