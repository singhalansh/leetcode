class Solution {
public:
    int bitwiseComplement(int n) {
    int m,ans=0,i=0;
    m=~n;
    if(n==0){
        return 1;
    }
    while(n!=0){
        ans=pow(2,i)+ans;
        i++;
        n=n>>1;
    }
    return m&ans;
    }
};