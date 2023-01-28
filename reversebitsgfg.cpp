    long long ans=0;
        int i=0;
        while(i<32)
        {
            int bit=X&1;
            ans=ans<<1;
            if(bit==1) ans=ans|bit;
            X=X>>1;
            i++;
        }
        return ans;