// Lazy sort.cpp
// A program implementing a lazy bubblesort algrithm
//
// This program is not for commercial use, lol!!
#include <iostream>

// define the size of array
#define ARRAYSIZE 10

using namespace std;

int main()
{
    cout << "\t\tLazy Sort\n\n"
            "\tA sample program that demostrates lazy (bubble) sort\n"
            "\talgorithm to sort numbers in increasing order.\n\n";

    // create an array of size ARRAYSIZE nd initialize all
    // values to zero(by assigning an empty set)
    int numbers[10] = {};
    cout << "  Input 10 numbers (no more, no less) ";

    int i;
    for (i = 0; i < ARRAYSIZE; i++)
    {
        cin>> numbers[i];
    }
    cin.ignore(1000, '\n');

    int swaps = 0;
    bool isOk = false;
    while (isOk == false)
    {
        isOk = true;
        for (i = 1; i < 10; i++)
        {
            if (numbers[i - 1] > numbers[i])
            {
                isOk = false;

                int temp = numbers[i - 1];
                numbers[i - 1] = numbers[i];
                numbers[i] = temp;
                swaps++;
            }
        }
    }

    cout << "\t{   ";
    for (i = 0; i < ARRAYSIZE; i++)
    {
        cout << numbers[i] << "   ";
    }
    cout << "}\n\n";

    cout << "  Statistics: Took " << swaps << " swaps\n";
    cout << "  -> ratio: " << swaps*1.f/ARRAYSIZE << "n\n\n";

    cout << "Press ENTER to continue.";
    cin.get();
    return 0;
}

