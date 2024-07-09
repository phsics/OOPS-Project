#include <iostream>
#include <windows.h>

int main() {
    std::cout << "Delay starting..." << std::endl;

    // Delay for 2000 milliseconds (2 seconds)
    Sleep(2000);

    std::cout << "Delay ended. Back to work!" << std::endl;

    return 0;
}
