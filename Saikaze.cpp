#include <iostream>

// Crash course, refer to the other file for actual
// test program. Please ignore the cin.get() calls
// they are made to "pause" the program to see results
using namespace std;

int main()
{
    // Conditional statement:
    //
    // If the evaluated condition inside the if statement
    // is true, then the code following the if will be
    // executed.
    //
    // Relational operators:
    //
    // Equality      a == b     evaluates to true if a == b
    // Inequality    a != b     evaluates to true if a != b
    // Greater than  a > b      evaluates to true if a > b
    // Less than     a < b      evaluates to true if a < b
    // G.than/Equal  a >= b     evaluates to true if a >= b
    // L.than/Equal  a <= b     evaluates to true if a <= b
    //
    // Syntax:
    // if ( condition )
    //     statement;
    //
    int test_number = 5;

    cout << "Testing if ( test_number == 5 )\n";
    if (test_number == 5)
        cout << "    Conditional statement evaluated true; test_number equals Five\n" << endl;

    cin.get();
    // It is also possible to put mmultiple statements inside
    // an if-block by using braces.
    //
    // **braces groups statements together inside a scope
    //
    cout << "Testing multiple statements grouped in an if-block\n";
    if (test_number == 5)
    {
        cout << "    test_number = 5" << endl;
        cout << "    This is inside the if-block too\n" << endl;
    }

    cin.get();
    // an else-statement/block executes statements if the evaluation of the *nearest*
    // if-statement/block is false
    //
    cout << "Testing if (test_number == 3)\n";
    if (test_number == 3)
    {
        cout << "    Test number is 3\n" << endl;
    }
    else
    {
        cout << "    Test number is NOT 3!\n" << endl;
    }

    cin.get();
    // Looping:
    //
    // A loop is a statement that loops (lol) until the condition evaluates to false
    // There are 3 main/basic/whatchamacallit ways of declaring a loop:
    //
    // The while, the do-while, and the for loop.
    //
    // while loop: repeats the nearest statement/block until the condition evaluates to
    // false.
    //
    // Syntax:
    // while ( condition )
    //      statement;
    //
    cout << "Testing while (i <= 10)\n";
    int i = 1;
    while (i <= 10)
    {
        cout << "    counting 1 - 10.. " << i << endl;
        i = i + 1;
    }

    cin.get();
    cout << "\n";
    // do-while loop: same as the while loop but it checks the condition after the loop.
    // This guarantees that the statements inside the block should be executed at least
    // once
    //
    // Syntax:
    // do
    // {
    //      statements;
    // } while ( condition );
    //
    cout << "Testing do{ }while (i > 1)\n";
    do
    {
        i = i - 1;
        cout << "    counting down.. " << i << endl;
    } while ( i > 1 );

    cin.get();
    cout << "\n";
    // for loop: the for loop contains three three statements, and its syntax is:
    //
    // for ( initialization; condition; iteration )
    // {
    //      statements;
    // }
    //
    // Initialization - initalize the variable. This is executed once before the
    // loop starts.
    //
    // Condition      - the same old condition ^^
    //
    // Iteration      - after the loop finishes and before it starts looping again
    // (and checking the condition) the statement/s here are executed. You may
    //
    // *the most common use of a for loop is iterating over values:
    // for (i = 0; i < 5; i++)
    //      some_statement;
    //
    // *First the i is assigned to zero.
    //
    // *The condition is then checked, if it evaluates to true it executes some_statements
    //
    // *i is increased by 1 (i++ is shorthand for i = i + 1)
    //
    // *The loop finishes and the condition is checked again... this goes on until
    //     i is greater than or equal to 5.
    //
    cout << "Testing for (j = 0; j <= 10; j++)\n";
    int j;
    for (j = 1; j <= 10; j++)
    {
        cout << "    counting 1 - 10.. " << j << endl;
    }
    // The code above has the same effect as the sample in while-loop.

    // *note that there are more about than iterating from 1, and why iterating from
    // zero to n - 1 is safer in many cases
    // for (i = 0; i < n; i++) where n = number of iterations
    cin.get();
    return 0;
}
