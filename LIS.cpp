// Longest Increasing Subsequence - dynamic programming

#include <iostream>

int main () {
    
    // test array
    int arr[5];
    arr[0] = 6;
    arr[1] = 10;
    arr[2] = -3;
    arr[3] = 11;
    arr[4] = -5;
    
    // 6 10 -3 11 5
    
    // array to hold subsequence lengths
    int seq[5];
    for (int i = 0; i < 5; ++i) {
        seq[i] = 1;
    }
    
    int i = 1;
    int j = 0;
    
    while (j < 5) {
        if (arr[i] > arr[j]) {
            int seq_len = seq[j] + 1;
            if (seq_len > seq[i]) {
                seq[i] = seq_len;
            }
        }
        
        ++j;
        
        if (j == i) {
            ++i;
            j = 0;
        }
    }
    
    int max_len = 0;
    for (int k = 0; k < 5; ++k) {
        if (seq[k] > max_len) {
            max_len = seq[k];
        }
    }
    for (int l = 0; l < 5; ++l) {
        std::cout << seq[l] << " ";
        
    }
    std::cout << std::endl;
    
    
    std::cout << "The longest increasing subsequence is " << max_len << std::endl;
    
    return 0;
    
}
