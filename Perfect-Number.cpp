#include <iostream>
using namespace std;
bool isPerfect(int num) {
    if (num <= 1) return false;
    int sum = 1;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPerfect(num)) {
        cout << num << " is a Perfect Number." << endl;
    } else {
        cout << num << " is NOT a Perfect Number." << endl;
    }
    return 0;
}
