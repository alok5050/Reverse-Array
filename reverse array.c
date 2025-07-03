void reverseArray(int arr[], int n) {
    
    int temp;
    for(int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    } 
}
