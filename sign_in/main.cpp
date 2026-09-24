#include <iostream>
#include <string>
using namespace std;

bool isAlphaChar(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isUpperChar(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool isLowerChar(char c) {
    return (c >= 'a' && c <= 'z');
}

bool isDigitChar(char c) {
    return (c >= '0' && c <= '9');
}

bool isSpaceChar(char c) {
    return c == ' ';
}

bool isSpecialChar(char c) {
    return (c >= 32 && c <= 47) || (c >= 58 && c <= 64) ||
           (c >= 91 && c <= 96) || (c >= 123 && c <= 126);
}

int main() {
    string username;
    string password;

    while (true) {
        int errorCount = 0;

        cout << "Enter your username : ";
        cin >> username;
        cout << "Enter your password : ";
        cin >> password;
        cout << endl;

        // 1. Username must start with a letter
        try {
            if (username.empty() || !isAlphaChar(username[0])) {
                throw string("Username must start with an alphabet character.");
            }

        }
        catch ( string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        // 2. Username must not contain spaces
        try {
            for (size_t i = 0; i < username.length(); i++) {
                if (isSpaceChar(username[i])) {
                    throw string("Username must not contain any spaces.");
                }
            }

        }
        catch ( string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        // 3. Password minimum length
        try {
            if (password.length() < 8) {
                throw string("Password must be at least 8 characters long.");
            }

        }
        catch (string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        // 4. Password must contain an uppercase letter
        try {
            bool hasUpper = false;
            for (size_t i = 0; i < password.length(); i++) {
                if (isUpperChar(password[i])) { hasUpper = true; break; }
            }
            if (!hasUpper) {
                throw string("Password must contain at least one capital letter.");
            }

        }
        catch (string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        // 5. Password must contain a lowercase letter
        try {
            bool hasLower = false;
            for (size_t i = 0; i < password.length(); i++) {
                if (isLowerChar(password[i])) { hasLower = true; break; }
            }
            if (!hasLower) {
                throw string("Password must contain at least one lowercase letter.");
            }
        //    cout << "[OK] Password has a lowercase letter." << endl;
        }
        catch (const string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        // 6. Password must contain a digit
        try {
            bool hasDigit = false;
            for (size_t i = 0; i < password.length(); i++) {
                if (isDigitChar(password[i])) { hasDigit = true; break; }
            }
            if (!hasDigit) {
                throw string("Password must contain at least one digit.");
            }
          //  cout << "[OK] Password has a digit." << endl;
        }
        catch (const string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        // 7. Password must contain a special character
        try {
            bool hasSpecial = false;
            for (size_t i = 0; i < password.length(); i++) {
                if (isSpecialChar(password[i])) { hasSpecial = true; break; }
            }
            if (!hasSpecial) {
                string e ="Password must contain at least one special character.";
                throw e;
            }
          //  cout << "[OK] Password has a special character." << endl;
        }
        catch (string& e) {
            errorCount++;
            cout << "[FAIL] " << e << endl;
        }

        cout << endl;

        if (errorCount != 0) {
            cout << errorCount << " condition(s) not met. Please try again." << endl << endl;
        } else {
            cout << "All 7 conditions passed. You are registered  as \"" << username << "\"." << endl;
            break;
        }
    }

    return 0;
}