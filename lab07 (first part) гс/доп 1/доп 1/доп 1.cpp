#include <iostream>
#include <cmath>
using namespace std;
 int main() {
     setlocale(LC_CTYPE, "rus");
    for (int i = 100; i <= 999; i++) {
        int sqrtNum = sqrt(i);
        if (sqrtNum * sqrtNum == i) {
            std::cout << i << " является полным квадратом" << std::endl;
            break;
        }
    }
    return 0;
}

