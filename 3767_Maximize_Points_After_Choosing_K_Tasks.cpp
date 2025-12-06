class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        long long s = technique1.size();
        vector<int> c = technique1;

        long long bas = 0;
        long long c1 = 0;
        vector<int> l;

        for(long long i = 0 ; i < s ; i++){
            if(technique1[i]>technique2[i]){
                bas+=technique1[i];
                c1++;
                
            }
            else{
                bas+=technique2[i];
                l.push_back(technique2[i]-technique1[i]);
            }
        }

        if(c1>k)return bas;

        sort(l.begin(), l.end());
        long long ne = k - c1;
        for(long long i = 0 ; i < ne ; i++){
            bas-=l[i];
            
        }
        return bas;
    }
};