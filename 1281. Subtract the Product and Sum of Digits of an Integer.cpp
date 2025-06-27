//1281. Subtract the Product and Sum of Digits of an Integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
/* an intger n is given, you have to return the difference between product of thier digits and sum of their digits.
for example a number is 123
digits are 1,4,3
product of digits=1*4*3=12
sum of digits=1+4+3=8
difference=12-8
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n!=0){
            int digit=n%10;
            prod=prod * digit;
            sum=sum+digit;
            n=n/10;
        }
        int ans=prod-sum;
        return ans;
        
    }
};
