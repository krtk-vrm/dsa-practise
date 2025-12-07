/* 
T.C = O(n^2)
best case O(n)
S.C = O(1)
*/

void insertion_sort(int a[], int n){
    for(int i = 0 ; i < n; i++){
        int j = i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
}