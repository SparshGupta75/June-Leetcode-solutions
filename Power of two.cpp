class Solution {
public:
    bool isPowerOfTwo(int x) {
        
        return x>0 && !(x&(x-1));
        
    }
};

////////////////////////////////

class Solution {
public:
    bool isPowerOfTwo(int x) {
        
       return x>0 && __builtin_popcount(x)==1;
        
    }
};

//////////////////////////////

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        while(n>2 && n%2==0){
            n=n/2;
        }
        if(n==2 || n==1) return true;
        else return false;
        
    }
};
