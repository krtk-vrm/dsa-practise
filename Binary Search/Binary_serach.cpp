int binarysearch(vector<int> &arr, int target) {
    int n = arr.size();
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target) //if the target is found return the index
            return mid;
        else if (arr[mid] < target) //if the target is greater than the middle element, search in the right half
            l = mid + 1;
        else //if the target is smaller than the middle element, search in the left half
            r = mid - 1;
    }
    return -1;
}
//recursive :

int rec_binarysearch(vector<int> &arr, int target, int l, int r) {
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return rec_binarysearch(arr, target, mid + 1, r);
    else
        return rec_binarysearch(arr, target, l, mid - 1);
}