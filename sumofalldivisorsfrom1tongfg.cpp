// Best approach O(N)
long long sum=N;
        for(int i=2;i<=N;i++)
        {
            int cnt=N/i;
            sum+=i*cnt;
        }
        return sum;
        // To get all the divisors, use this method
// to find all the divisors of 36 
// 1x36 2X18 3X12 4X9 6X6 | 9X4 12X3 18X2 36X1 
// for(int i=1;i*i<=N;i++) O(sqrt(n))
// {
//     if(N%i==0){
//cout<<i;
//     if(N/i!=i) cout<<N/i;
 //     }                         // for 6X6
// }