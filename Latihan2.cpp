#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void print_vector(const std::vector<int>& vec) {
    for (int val : vec) {
        std::cout << val << " | ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
    int size = sizeof(data) / sizeof(data[0]);
    std::vector<int> vec(data, data + size);

    std::cout << "Isi vector awal:" << std::endl;
    print_vector(vec);
    std::cout << "==========================================" << std::endl;

    std::sort(vec.begin(), vec.end());

    std::cout << "Isi vector setelah di sorting:" << std::endl;
    print_vector(vec);
    std::cout << "==========================================" << std::endl;

    std::sort(vec.rbegin(), vec.rend());

    std::cout << "Isi vector setelah di di DESC Order:" << std::endl;
    print_vector(vec);
    std::cout << "==========================================" << std::endl;

    return 0;
}
