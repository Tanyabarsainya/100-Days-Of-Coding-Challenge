class Solution {
public:
    bool isPalindrome(int x){
       long long int reverse=0;
        int digits;
        int n = x;
        while(x>0){
            digits=x%10;
            reverse = reverse*10 +digits;
            x=x/10;

        }if(n==reverse){
            return true;
        }else if(n!=reverse){
            return false;
        }
            return false;
    }
};