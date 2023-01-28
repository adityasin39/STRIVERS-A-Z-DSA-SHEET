int findgcd(long long A, long long B)
    {
        // euclidean
     // here in this case recursion is faster and iteration with - gives tle
     // recursion with - is also fine but expected TC is in terms of log so modulo with recursion is best for gcd
        // using modulo and recursion
        if(A==0) return B;
         return findgcd(B%A,A);
        // using - and recursion
    //     if(A==0) return B;
    //     if(B==0) return A;
    //   if(A>B) findgcd(A-B,B);
    //   else findgcd(A,B-A);
    }
     long long gcd=findgcd(A,B);
      long long  lcm=A*B/gcd;
        vector<long long> v;
        v.push_back(lcm);
        v.push_back(gcd);
        return v;
        // to calculate gcd of m and n by brute force 
// int gcd=1;
//  for(int i=min(m,n);i>=1;i--)
//  {
//      if(m%i==0 && n%i==0) 
//      {gcd=i;
//      break;
//      }
//  }