#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << a << " / " << b << " = "
             << fixed << setprecision(2)
             << static_cast<float>(a) / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
    throw runtime_error("jakaja ei saa olla nolla!");
    }


     return static_cast<float>(a) / b;
}

int main() {
    int a, b;
    int sum;
    float result;

    cout << "Anna kokonaisluku a: ";
    cin >> a;

    cout << "Anna kokonaisluku b: ";
    cin >> b;

    cout << endl;

    calcSum(a, b);
    calcDiv(a, b);

    cout << endl;

    sum = retSum(a, b);
    cout << "Summa " << sum << endl;

try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = "
             << fixed << setprecision(2) << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

