// BUBBLE SORT - repeatedly swaps adjacent elements until all are in order
// O(n^2)

#include <vector>
#include <iostream>

int main() {
    std::vector<int> test;
    test.push_back(9);
    test.push_back(1);
    test.push_back(2);
    test.push_back(7);
    test.push_back(5);
    
    for (int j = 0; j < test.size() - 1; ++j) {
        for (int i = 0; i < test.size() - j - 1; ++i) {
            if (test[i] > test[i + 1]) {
                int temp = test[i + 1];
                test[i + 1] = test[i];
                test[i] = temp;
            }
        }
    }
    
    for (int i = 0; i < test.size(); ++i) {
        std::cout << test[i] << " ";
    }
    
    return 0;
}
