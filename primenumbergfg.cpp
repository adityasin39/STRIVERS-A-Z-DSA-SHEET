// TC is great which is O(sqrtx)
        if(N==1) return 0;
        int cnt=0;
        
        for(int i=2;i*i<=N;i++)  
        {
            if(N%i==0)
            {
                cnt++;
                if((N/i)!=i) cnt++;
            }
        }
        if(cnt==0) return 1;
        else return 0;