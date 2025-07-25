#include<iostream>
using namespace std;

void printEvenNumbers(int start, int end) {
    cout << "Even numbers from " << start << " to " << end << ":" << endl;
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            cout << i;
            if(i < end) {
                bool hasMoreEven = false;
                for(int j = i + 1; j <= end; j++) {
                    if(j % 2 == 0) {
                        hasMoreEven = true;
                        break;
                    }
                }
                if(hasMoreEven) cout << ", ";
            }
        }
    }
    cout << endl;
}

void printEvenNumbersVertical(int start, int end) {
    cout << "\nVertical display:" << endl;
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }
}

void printEvenNumbersAlternative(int start, int end) {
    cout << "\nAlternative method (increment by 2):" << endl;
    int startEven = (start % 2 == 0) ? start : start + 1;
    for(int i = startEven; i <= end; i += 2) {
        cout << i;
        if(i + 2 <= end) cout << ", ";
    }
    cout << endl;
}

int main(){
    int start, end;
    char choice;
    
    do {
        cout << "Enter start number: ";
        cin >> start;
        cout << "Enter end number: ";
        cin >> end;
        
        if(start > end) {
            cout << "Invalid range! Start should be less than or equal to end." << endl;
            continue;
        }
        
        printEvenNumbers(start, end);
        printEvenNumbersVertical(start, end);
        printEvenNumbersAlternative(start, end);
        
        int count = 0;
        for(int i = start; i <= end; i++) {
            if(i % 2 == 0) count++;
        }
        cout << "\nTotal even numbers: " << count << endl;
        
        cout << "\nTry another range? (y/n): ";
        cin >> choice;
        cout << endl;
        
    } while(choice == 'y' || choice == 'Y');
    
    cout << "Thanks for using the even number printer!" << endl;
    return 0;
}
