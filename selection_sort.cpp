// SELECTION SORT - find the minimum element in the array and place it in the right position
// O(n^2)

#include <iostream>
#include <vector>

int main() {
    int test[5];
    
    
    int min_index = 0;
    
    
    for (int i = 0; i < 5, ++i) {
        for (int j = i; j < 5; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    
    
    
    
    
    return 0;
}
