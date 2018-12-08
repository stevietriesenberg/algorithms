#include <iostream>
#include <vector>

int partition(int * arr, int l, int r) {
    
    // set i and j
    int i = l;
    int pivot = (l + r) / 2;
    
    // flip pivot and last element
    int pivot_val = arr[pivot];
    arr[pivot] = arr[r];
    arr[r] = pivot_val;
    
    for (int j = l + 1, j < r - 1; ++j) {
        if (arr[j] < pivot_val) {
            // flip i and j
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            ++i;
        }
    }
    
    // flip pivot and correct place
    int i_val = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = i_val;
    
    return i + 1;
    
    
}



void quicksort(int * arr, int l, int r) {
    if (l < r) {
        int p = partition(arr, l, r);
        quicksort(arr, l, p);
        quicksort(arr, p + 1, r);
    }
}




int main() {
    int test[5];
    test[0] = 3;
    test[1] = 4;
    test[2] = 0;
    test[3] = 2;
    test[4] = 1;
    
    return 0;
}
