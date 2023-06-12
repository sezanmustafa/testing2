#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    
    // Vulnerability 1: Hardcoded Password
    string hardcodedPassword = "password123";
    cout << "Enter password: ";
    cin >> password;
    if (password == hardcodedPassword) {
        cout << "Access granted!" << endl;
    }
    else {
        cout << "Access denied!" << endl;
    }
    // Instead, store passwords securely, such as using hashed and salted values
    
    // Vulnerability 2: Unchecked Array Bounds
    int numbers[3] = {1, 2, 3};
    for (int i = 0; i <= 3; i++) {
        cout << numbers[i] << endl;
    }
    // Instead, ensure the loop bounds are within the valid range of the array
    
    // Vulnerability 3: Unvalidated Input
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 0) {
        cout << "Invalid age!" << endl;
    }
    // Instead, validate and sanitize user input to prevent issues like negative values
    
    // Vulnerability 4: Unprotected Resource
    bool isAdmin = false;
    cout << "Are you an admin? (Y/N): ";
    char answer;
    cin >> answer;
    if (answer == 'Y' || answer == 'y') {
        isAdmin = true;
    }
    if (isAdmin) {
        cout << "Admin privileges granted!" << endl;
    }
    // Instead, implement proper authentication and authorization mechanisms
    
    // Vulnerability 5: Unencrypted Data Transmission
    string message = "Sensitive information";
    cout <<
