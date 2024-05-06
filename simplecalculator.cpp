#include<iostream>
using namespace std;

int main()
{
	cout<< "Welcome to CLI (Command Line Interface) calculator \n\n";
    char choice;
    do
    {
        int num1, num2;
        float x;
        char op;
        cout << "Enter your choice ('x' to continue and 'y' to exit): ";
        cin >> choice;
        cout<<"\n";

        if(choice == 'y')
        {
            cout << "Exiting...";
            break;
        }
        else{
        	
        cout << "Enter first numbers: ";
        cin >> num1;
        cout << "Enter second numbers:";
        cin >> num2;
        cout<<"\n";
        
        cout << "Menu:" << endl;
        cout << "1. Enter '+' opertor for Addition (+)" << endl;
        cout << "2. Enter '-' opertor for Subtraction (-)" << endl;
        cout << "3. Enter '*' opertor for Multiplication (*)" << endl;
        cout << "4. Enter '/' opertor for Division (/)" << endl;
        cout << "5. Enter '%' opertor for Modulus (%) " << endl;
        cout<<"\n";

            
        cout << "Enter operator: ";
        cin >> op;
        switch (op)
        {
            case '+':
                x = num1 + num2;
                cout << "Addition Result: " << x << endl;
                break;
            case '-':
                x = num1 - num2;
                cout << "Subtraction Result: " << x << endl;
                break;
            case '*':
                x = num1 * num2;
                cout << "Multiplication Result: " << x << endl;
                break;
            case '/':
                if (num2 == 0)
                {
                    cout << "ERROR! Division by zero is not possible." << endl;
                }
                else
                {
                    x = num1 / num2;
                    cout << "Division Result: " << x << endl;
                }
                break;
            case '%':
                x = num1 % num2;
                cout << "Modulus Result: " << x << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }
      }
    } while (true);


    return 0;
}

