// Saikaze 3.cpp
// Demonstrate Conditional statements, loop statements, and
// arrays.
#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    rows = columns = 0;

    cout << "\t\tMultiplication table!\n\n"
            " *please input a lower width if the\n"
            "  table goes off screen\n\n";

    cout << "\tInput number of rows   (height) : ";
    cin >> rows;

    cout << "\tInput number of columns (width) : ";
    cin >> columns;

    cout << "\n";

    int table[rows][columns];

    // The conditional is already here. in the loop condition.
    for (int y = 1; y <= rows; y++)
    {
        for (int x = 1; x <= columns; x++)
        {
            cout << x*y << "\t";
        }
        cout << "\n\n";
    }

    cin.get();
    cin.get();
    return 0;
}
