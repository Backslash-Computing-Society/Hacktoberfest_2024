long long getTrappedWater(long long* arr, int n) {
 
    long long left = 0;
    long long right = n-1;
    long long res = 0;
    long long maxleft = 0;
    long long maxright = 0;

    while(left <= right){
        if(arr[left] <= arr[right]){
            if(arr[left] > maxleft){
                maxleft = arr[left];
            }
            else{
                res = res + maxleft - arr[left];
            }
            left++;
        }
        else{
            if(arr[right] >= maxright){
                maxright = arr[right];
            } else {
                res = res + maxright - arr[right];
            }
            right--;
        }
    }
    return res;
}
