class Solution {
public:
    long long lastInteger(long long n) {
        if(n<=2)return 1;
        long long head = 1;
        long long step = 1;
        long long remaining = n;
        bool left = true;

        while(remaining>1){
            if (!left && remaining % 2 ==0) {
                head += step;
            }
            remaining=(remaining+1)/2;
            step*=2;
            left= !left;
        }
        return head;
        
        
    }
};