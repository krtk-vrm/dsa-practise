class Solution {
public:
    int countOdds(int low, int high) {
        int rng = high-low+1;
        if(rng%2==0) return rng/2;
        
        else{
            if(low%2!=0 && high%2!=0)rng=rng+2;            
        }
        return rng/2;

    }
};