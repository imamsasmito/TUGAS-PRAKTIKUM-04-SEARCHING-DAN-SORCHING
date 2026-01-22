#include <iostream>

int main() {
    int data[] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
    int size = sizeof(data) / sizeof(data[0]);
    int input;
    int count = 0;

    std::cout << "Masukkan value pada input = ";
    std::cin >> input;

    std::cout << "Data array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " | ";
    }
    std::cout << std::endl;

    for (int i = 0; i < size; ++i) {
        if (data[i] == input) {
            count++;
        }
    }

    if (count > 0) {
        std::cout << "ADA" << std::endl;
        std::cout << "Terdapat " << count << " beberapa nilai yang sama dengan " << input << std::endl;
    }
    else {
        std::cout << "TIDAK ADA" << std::endl;
    }

    return 0;
}
