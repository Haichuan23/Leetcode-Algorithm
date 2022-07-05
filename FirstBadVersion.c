// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    if (n == 1){
        return 1;
    }

    int left = 1;
    int right = n;
    int result = 0;
    while (left <= right){
        if (isBadVersion(left)){
            result = left;
            break;
        } 
         
        int mid = left + (right-left)/2;
        if (isBadVersion(mid)){
            right = mid;
        } else {
            left = mid + 1;
        }
    }
        
    return result;   
}