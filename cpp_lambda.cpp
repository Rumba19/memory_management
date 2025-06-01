#include <iostream>
using namespace std;

int main() {
    int x = 10;
    auto inner = [x]() {
        cout << x << endl;
    };
    inner();
    return 0;
}
