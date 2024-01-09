#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool  isTriplet(int a , int b , int c)
{
  return a * a + b * b == c * c;
}

int main() {
    vector<int> perfect_squares;

    for (int i = 1000; i >= 1; i--) {
        perfect_squares.push_back(i);
    }

    int target = 1000;

    for (int a = 1; a <= target / 3; a++) {
        for (int b = a + 1; b <= target / 2; b++) {
            int c = target - a - b;

            if (isTriplet(a, b, c)) {
                std::cout << "Triplets: " << a << " " << b << " " << c << "\n";
                std::cout << "Product: " << a * b * c << "\n";
                return 0;
            }
        }
    }

    return 0;
}
