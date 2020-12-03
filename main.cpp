#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int* arr = new int [size];
    
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    int i = size - 1;
    
    do {
        std::cout << arr[i] << " ";
    } while (i-- > 0);
    
    delete []arr;
    return 0;
}
