#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

string getHiddenPassword() {
    string password = "";
    char ch;
    
    cout << "Enter password: ";
    while((ch = getch()) != '\r') {
        if(ch == '\b') {
            if(password.length() > 0) {
                password.pop_back();
                cout << "\b \b";
            }
        }
        else {
            password += ch;
            cout << '*';
        }
    }
    cout << endl;
    return password;
}

int main(){
    const string correctPassword = "admin";
    const int maxAttempts = 5;
    int attempts = 0;
    bool authenticated = false;
    
    cout << "=== SECURE LOGIN SYSTEM ===" << endl;
    cout << "You have " << maxAttempts << " attempts to enter the correct password." << endl;
    cout << endl;
    
    while(attempts < maxAttempts && !authenticated) {
        string enteredPassword = getHiddenPassword();
        attempts++;
        
        if(enteredPassword == correctPassword) {
            authenticated = true;
            cout << "\n✅ ACCESS GRANTED!" << endl;
            cout << "Welcome! You have successfully logged in." << endl;
            
            cout << "\nLogin Statistics:" << endl;
            cout << "• Attempts used: " << attempts << "/" << maxAttempts << endl;
            cout << "• Success rate: " << (1.0/attempts * 100) << "%" << endl;
        }
        else {
            int remaining = maxAttempts - attempts;
            cout << "\n❌ INCORRECT PASSWORD!" << endl;
            
            if(remaining > 0) {
                cout << "Attempts remaining: " << remaining << endl;
                cout << "Hint: The password contains letters and numbers." << endl;
                cout << endl;
            }
            else {
                cout << "\n🔒 ACCOUNT LOCKED!" << endl;
                cout << "Too many failed attempts. Please try again later." << endl;
                cout << "For security reasons, access has been denied." << endl;
            }
        }
    }
    
    if(authenticated) {
        cout << "\nWhat would you like to do?" << endl;
        cout << "1. View account information" << endl;
        cout << "2. Change password" << endl;
        cout << "3. Logout" << endl;
        
        int choice;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "\n--- ACCOUNT INFORMATION ---" << endl;
                cout << "Username: User" << endl;
                cout << "Account Status: Active" << endl;
                cout << "Last Login: Just now" << endl;
                break;
            case 2:
                cout << "\nPassword change feature coming soon!" << endl;
                break;
            case 3:
                cout << "\nLogging out... Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice. Logging out..." << endl;
        }
    }
    
    return 0;
