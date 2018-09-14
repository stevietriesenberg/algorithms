// INSERTION SORT - cycle through array, inserting elements in correct position
// swap towards left until element is in the correct spot
// O(n^2)

#include <iostream>
#include <vector>

int main () {
    std::vector<int> test;
    test.push_back(3);
    test.push_back(7);
    test.push_back(2);
    test.push_back(12);
    test.push_back(1);
    
    // 3 7 2 12 1
    
    // start at second element
    for (int key = 1; key < test.size(); ++key) {
        int element = test[key];
        int left = key - 1;
        
        while (left >= 0 && element < test[left]) {
            int temp = test[left];
            test[left] = element;
            test[left + 1] = temp;
            --left;
        }
    }
    
    
    // print result
    for (int i = 0; i < test.size(); ++i) {
        std::cout << test[i] << " \n";
    }
    
    return 0;
}
