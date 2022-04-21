#include <iostream>

using namespace std;

double my_function(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (((double) n / (double) (n + 2)) - 10) * my_function(n - 1);
    }
}

double my_function() {
    cout << "Enter a number for the function without parameter: " << endl;
    int num;
    cin >> num;
    double r = 1;
    while (num != 0) {
        r = r * (((double) num / (double) (num + 2)) - 10);
        num--;
    }
    cout << r << endl;
}

int main() {
    cout << "Enter a number for the function with parameter: " << endl;
    int num;
    cin >> num;
    cout << my_function(num) << endl;
    my_function();

    return 0;
}

