// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Restart;

int main()
{
    cout << "Enter a number already\n";
    int Restart;

    while (Restart == 1) {
        Restart = 0;
        int num;
        cin >> num;
        if (num < 0) {
           cout << "Aw no!\n";
           Restart = 1;
        }
        else if (num > 0) {
           cout << "Aw yeah!\n";
           Restart = 1;
        }
        else {
           cout << "Aw...aw\n";
           Restart = 1;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file