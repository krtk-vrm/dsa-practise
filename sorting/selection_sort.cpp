/* 
T.C = O(n^2)
S.C = O(1)
*/

void selection_sort(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[mini]) mini = j;
        }
        swap(arr[mini], arr[i]);
        
    }
}
