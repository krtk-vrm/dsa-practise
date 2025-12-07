/* 
T.C = O(n^2)
best case O(n)
S.C = O(1)
*/

void bubble_sort(int arr[], int n){
    for (int i = n-1; i >=0; i--)
    {
        int didswap =0;
        for (int j = 0; j < i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                didswap++;
            }

        }
        if(!didswap) break;
        
        
    }
    
}

