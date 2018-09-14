#include <iostream>
#include <vector>

// returns the index in v of the element
int binary_search(std::vector<int> v, int start, int end, int n) {
    
    int middle = end - start / 2;
    std::cout << "Middle is " << middle << "\n";
    
    if (n == v[middle]) {
        return middle;
    } else if (n > v[middle]) {
        // go left
        return binary_search(v, middle + 1, end, n);
    } else {
        // go right
        return binary_search(v, start, middle - 1, n);
    }
}


int main() {
    std::vector<int> test;
    test.push_back(0);
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(5);
    
    int index = binary_search(test, 0, test.size() - 1, 3);
    
    std::cout << "The index of 3 is " << index << "\n";
    
    return 0;
}
