/*****************************************************
 *  Loops and Conditionals (to Saikaze)
 *          - mxiii
 *
 *  This is a simple program demostrating the use of
 *  conditionals and loops interacting with each other
 *  (plus a little logic/math)
 *
 *  *compiled under g++ Ubuntu4.8.1
 */
//////////////////////////////////////////////////////
// (ehem!) Problem:
//
// There's a ticket booth in a certain ride in a theme park
// that gives gives points for each ticket bought
// at once. The more ticket you buy in a batch,
// the more points you earn. The rate posted on
// the board goes like this:
//
//     0 ticket  = 0pts
//     1 ticket  = 5pts
//     2 tickets = 15pts
//     3 tickets = 30pts
//     4 tickets = 50pts
//      ...
// For every 50 pts, you'll be given a free ticket.
//
// Can you do a simple calculator that computes the
// number of points AND the number of free tickets?
//
#include <iostream>

using namespace std;

int main()
{
    // after analyzing the problem, f(n) turned out to
    // be the sum of all previous values + 5n
    // this can be solved by using a formula but we'll
    // try to "count" it one-by-one to demonstrate a loop
    cout << "\t\t~ Wormhole Ride ~\n" << endl;

    cout << "\tWe offer points for every ticket bought in\n"
            "\tone go! Earn 50 points ro claim a\n"
            "\tfree ticket, yay!\n" << endl;

    cout << "\t\t0 ticket  = 0pts :(\n"
            "\t\t1 ticket  = 5pts\n"
            "\t\t2 tickets = 15pts\n"
            "\t\t3 tickets = 30pts\n"
            "\t\t4 tickets = 50pts\n"
            "\t\t ..." << endl;

    // const means constant; it will never be changed.
    // you can find this out after observing the pattern
    // hahaha!
    const int const_multiplier = 5;

    // declare and initialize variables
    int tickets = 0;
    int points  = 0;
    int freeTickets = 0;

    cout << "  How much would you like to buy? ";
    cin >> tickets;
    cout << "\n\tPlease wait...\n" << endl;

    int i;
    for (i = 1; i <= tickets; i++)
    {
        points += i*const_multiplier;
    }

    // freeTickets can now be computed. Integer division
    // removes the decimal part if the quotient
    freeTickets = points/50;

    cout << "  You obtained " << points << " points for " << tickets << " tickets!\n" << endl;

    // let's display the number of free tickets obtained,
    // otherwise display that the costumer ontained no free tickets
    if ( freeTickets > 0 )
    {
        cout << "  Congratulations, you will be given " << freeTickets << " free ticket(s), yay!" << endl;
    }
    else
    {
        cout << "  You obtained no free tickets." << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
