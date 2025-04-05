#include <iostream>
using namespace std;

int main() {
    int x, k;
    cin >> x >> k;

    int residuo = x;
    int cociente = 0;

    if (k == 0) {
        cout << "Error: Division por cero." << endl;
        return 0;
    }

    while (residuo >= k) {
        residuo -= k;
        cociente++;
    }

    cout << cociente << " " << residuo << endl;

    return 0;
}
