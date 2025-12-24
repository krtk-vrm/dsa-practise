/*Approach - instead of using linear search use binary search for faster time.
TC - O(logn)
SC - O(1)
*/
int mySqrt(int x) {
    if(x<2)return x;

    int low = 1;

    int high = x/2;

    while (low <= high) {

        int mid = low + (high - low) / 2;
        long long sq = (long long) mid*mid;
        if (sq == x)
            return mid;

        else if (sq < x)
            low = mid + 1;

        else
            high = mid-1;
    }

    return high;
}