#include <cstdlib>
#include <iostream>
#include <cstdint>
#include <limits>
int main() {
    using std::cin, std::cout, std::endl;    
    double n1;
    double n2;
    cout << "Welcome to this Console-Based Calculator!\n";

    while (true) {
        cout << "Select an option to continue.\na) Addition\ns) Subtraction\nm) Multiplication\nd) Division\ne) Exit\n\n";
        char input;
        cin >> input;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (input) {
        case 'a':
            while (true) {
                cout << "Enter two numbers for addition: ";

                if (cin >> n1 >> n2) [[likely]] {
                    break;
                } 

                cout << "Bruh numbers it's not that hard. Or maybe try smaller numbers. Idk.\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
            }
            cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n\n";
            break;
        case 's':
            while (true) {
                cout << "Enter two numbers for subtraction: ";
                if (!(cin >> n1 >> n2)) [[unlikely]] {
                    cout << "Bruh numbers it's not that hard. Or maybe try smaller numbers. Idk.\n";
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else [[likely]] {
                    break;
                }
            }
            cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n\n";
            break;

        case 'm':
            while (true) {
                cout << "Enter two numbers for multiplication: ";
                if (!(cin >> n1 >> n2)) [[unlikely]] {
                    cout << "Bruh numbers it's not that hard. Or maybe try smaller numbers. Idk.\n";
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else [[likely]] {
                    break;
                }
            }
            cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n\n";
            break;

        case 'd':
            while (true) {
                cout << "Enter two numbers for division: ";
                if (!(cin >> n1 >> n2)) [[unlikely]] {
                    cout << "Bruh numbers it's not that hard. Or maybe try smaller numbers. Idk.\n";
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else [[likely]] {
                    break;
                }
            }
            cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n\n";
            break;

        case 'e':
            cout << "Adiós!\n" << endl;
            return EXIT_SUCCESS;

        default:
            cout << "your ideas will not be tolerated.\n";
        }

    }
    
    
    
}
