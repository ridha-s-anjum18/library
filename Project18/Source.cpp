#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int choice;

    while (true) {
        cout << "Prime Number Checker Menu:" << endl;
        cout << "1. Find prime numbers in a given range" << endl;
        cout << "2. Check if a specific number is prime" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int start, end;
            cout << "Enter the range (start): ";
            cin >> start;
            cout << "Enter the range (end): ";
            cin >> end;
            if (start <= end) {
                cout << "Prime numbers in the range " << start << " to " << end << " are: ";
                for (int num = start; num <= end; ++num) {
                    if (isPrime(num)) {
                        cout << num << " ";
                    }
                }
                cout << endl;
            }
            else {
                cout << "Invalid range. Start should be less than or equal to end." << endl;
            }
            break;
        }
        case 2: {
            int num;
            cout << "Enter a number to check if it's prime: ";
            cin >> num;
            if (isPrime(num)) {
                cout << num << " is a prime number." << endl;
            }
            else {
                cout << num << " is not a prime number." << endl;
            }
            break;
        }
        case 3: {
            cout << "Goodbye!" << endl;
            return 0;
        }
        default:
            cout << "Invalid choice. Please enter a valid option (1, 2, or 3)." << endl;
        }
    }
}
