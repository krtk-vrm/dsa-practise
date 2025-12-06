class Solution {
public:
    bool isp(int n){
        if(n<2)return false;
        if(n==2) return true;
        for(int i = 2 ; i*i <= n ;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    
    bool completePrime(int num) {
        if(isp(num)==false)return false;

        string s= to_string(num);
        int a= 0;
        for(int i = 0 ; i < s.size() ; i++){
            a = a*10 + s[i]-'0';
            if(isp(a)==false) return false;
        }
        a=0;
        int p10=1;
        for(int i = s.size()-1 ; i >= 0 ; i--){
            a = a + (s[i]-'0')*p10;
            p10*=10;
            if(isp(a)==false) return false;
        }
        return true;
    }
};
