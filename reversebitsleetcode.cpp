// if you dont understand then refer to https://www.youtube.com/watch?v=ZW7st_pN05w
// Approach 1 which is bitmasking one.
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
     n=((n& 0Xffff0000)>>16)|((n& 0X0000ffff)<<16);
     n=((n& 0Xff00ff00)>>8)|((n& 0X00ff00ff)<<8);
     n=((n& 0Xf0f0f0f0)>>4)|((n& 0X0f0f0f0f)<<4);
     n=((n& 0Xcccccccc)>>2)|((n& 0X33333333)<<2);
     n=((n& 0Xaaaaaaaa)>>1)|((n& 0X55555555)<<1);
     
     
     return n;
    }
};
// Approach 2
// class Solution {
// public:
//     uint32_t reverseBits(uint32_t n) {
//     uint32_t ans=0;
//     int i=0;
//     while(i<32)
//     {
//         int bit=n&1;
//         ans=ans<<1;
//        if(bit==1) ans=ans|bit;
//         n=n>>1;
//         i++;
//     }
//     return ans;   
//     }
// };