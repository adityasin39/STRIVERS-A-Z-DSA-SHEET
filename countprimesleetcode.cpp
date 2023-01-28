// Brute force se tc will be O(n*n) which will be 10^12 for n=5*10^6 while normal machines can do only 10^8 operations per second so brute force will give tle
// Sieve algorithm TC= O(n*log(logn))
// sab ko prime mark kar dete hai phir jitne bhi multiples hai unko non prime mark kar dete hai
class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool> prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<n;i++)
        {
            if(prime[i]==true) // taaki joh non prime ho chuka hai uske multiples non prime naa ho jae nahi toh tle maarega
            {
                cnt++;
            for(int j=2;i*j<n;j++)
            {
                if(prime[i]==true) prime[i*j]=false;
            }
            }
        }
     
        return cnt;
    }
};