// MERGE SORT - split array recursively and use the two-finger algorithm to sort the halves of the array
// O(nlogn)

#include <iostream>
#include <vector>

int * merge(int * arr, int l, int m, int r) {
    
    
    std::cout << "ARRAY:\n";
    for (int i = 0; i < r; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    int index1 = l;
    int index2 = m + 1;
    int index3 = l;
    
    std::cout << "l is " << l << "\n";
    std::cout << "r is " << r << "\n";
    std::cout << "m is " << m << "\n";
    
    int arr_1[m - l + 1];
    int arr_2[r - m];

    
    // copy elements
    for (int i = 0; i < m - l + 1; ++i) {
        arr_1[i] = arr[i + l];
    }
    
    for (int i = 0; i < r - m - 1; ++i) {
        arr_2[i] = arr[i + m + 1];
    }
    
    std::cout << "ARRAY L:\n";
    for (int i = 0; i < m + 1; ++i) {
        std::cout << arr_1[i] << " ";
    }
    
    std::cout << "\n";
    
    std::cout << "ARRAY R:\n";
    for (int i = 0; i < m + 1; ++i) {
        std::cout << arr_2[i] << " ";
    }
    
    std::cout << "\n";
    
    index1 = 0;
    index2 = 0;
    
    
    // two finger algorithm
    while (index1 < m - l + 1 + 1 && index2 < r - m) {
        if (arr_1[index1] < arr_2[index2]) {
            arr[index3] = arr_1[index1];
            ++index1;
        }
        
        if (arr_2[index2] < arr_1[index1]) {
            arr[index3] = arr_2[index2];
            ++index2;
        }
        
        ++index3;
    }
    
    // copy remaining elements over
    for (index1; index1 < m - l + 1; ++index1) {
        arr[index3] = arr_1[index1];
        ++index3;
    }
    
    for (index2; index2 < r - m; ++index2) {
        arr[index3] = arr_2[index2];
        ++index3;
    }
    
    
    std::cout << "SORTED ARRAY:\n";
    for (int i = l; i < r; ++i) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << "\n";
    
    
    return arr;
}

void mergesort(int * arr, int l, int r) {
    
    std::cout << "in mergesort\n";
    
    if (l < r) {
        // first half l to m-1
        // second half m to r - 1?
        
        int m = (l + (r - 1)) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}





int main () {
    
    int test[5];
    
    for (int i = 0; i < 5; ++i) {
        test[i] = 5 - i;
    }
    
    mergesort(test, 0, 5);
    
    for (int i = 0; i < 5; ++i) {
        std::cout << test[i] << " \n" << std::endl;
    }
    
    return 0;
}

