class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i*i<=num;i++)
        {
            if(num%i==0) 
            {sum+=i;
            if((num/i)!=i) sum+=num/i;
            }
        }
        sum-=num;
        cout<<sum;
        if(sum==num) return 1;
        else return 0;
    }
};