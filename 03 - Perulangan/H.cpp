#include <iostream>
using namespace std;

int main() {
    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina <= 10 * jantan) {
        jantan += 1;
        betina += tanggal;
        
        tanggal += 1;
    }

    cout << tanggal << endl;
}

