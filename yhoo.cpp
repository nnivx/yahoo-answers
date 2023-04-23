/**
    \link http://pastebin.com/PfbghSPW

    modified: 2013-10-02; 12:29am GMT+8
    by MxIII :)

    This program was originally made by Stanley, I have no right
    to claim this ^^

    I compiled this under G++ 4.8.1
*/
#include <iostream>
#include <iomanip>

using namespace std;

// Init the struct Clock
struct Clock
{
    int hh,mm,ss;
};

int main()
{

    char answer, dumch;
    int hh, mm, ss;
    // Always initialize, just in case~
    hh = mm = ss = 0;
    const int MINT = 0, MAXHR = 24, MAXMS = 60;

    // Declare structs and set their value

    Clock Clock1 = {0,0,0}, Clock2 = {0,0,0}, temp = {0,0,0};

    // Main do loop
    do
    {
        // For loop to get time for Clock #1 and #2
        for(int i = 1; i <= 2; i++)
        {
            cout << "Do you want to change the time for Clock #" << i << "? ";
            cin >> answer;
            if(answer == 'y' || answer == 'Y')
            {
                do
                {
                    cout << "Enter time for Clock #" << i << ": ";
                    string tempstr;
                    cin >> tempstr;
                    // To avoid index error
                    if (tempstr.length() >= 8)
                    {
                        // parse.
                        // atoi() transforms valid const char* to integer
                        // substr() gets substring
                        // c_str() transfroms string to const char*
                        temp.hh = atoi(tempstr.substr(0, 2).c_str());
                        temp.mm = atoi(tempstr.substr(3, 2).c_str());
                        temp.ss = atoi(tempstr.substr(6, 2).c_str());
                        // invalid entries are given a value of zero
                        // automatically
                    }
                }
                // I modified this from && to || ... I assume this is what you
                // probably want to achieve
                while(temp.hh <= MINT || temp.hh >= MAXHR ||
                      temp.mm <= MINT || temp.mm >= MAXMS ||
                      temp.ss <= MINT || temp.ss >= MAXMS);
            }

            // Set the temp struct to either Clock1 or Clock2
            if(i == 1)
            {
                Clock1.hh = temp.hh;
                Clock1.mm = temp.mm;
                Clock1.ss = temp.ss;
            }
            else if(i == 2)
            {
                Clock2.hh = temp.hh;
                Clock2.mm = temp.mm;
                Clock2.ss = temp.ss;
            }

        }

        // Do the math to avoid cluster check.
        // 1 hr = 3600s; 1 min = 60s
        // whoever has the lower value is the first ^^
        if((Clock1.hh*3600 + Clock1.mm*60 + Clock1.ss) <
           (Clock2.hh*3600 + Clock2.mm*60 + Clock2.ss))
        {
            cout << "\nClock #1 is before Clock #2\n";
        }
        else
        {
            // check if Clock2 precedes clock 1
            if((Clock2.hh*3600 + Clock2.mm*60 + Clock2.ss) <
               (Clock1.hh*3600 + Clock1.mm*60 + Clock1.ss))
            {
                cout << "\nClock #2 is before Clock #1\n";
            }
            // If all else failes, it's sure that they're equal
            else
            {
                cout << "\nClocks are Identical!\n";
                hh = mm = ss = 0;
            }
        }
        // get the absolute value of difference so whichever
        // came first doesn't matter, really.
        hh = abs(Clock1.hh - Clock2.hh);
        mm = abs(Clock1.mm - Clock2.mm);
        ss = abs(Clock1.ss - Clock2.ss);

        // Output the difference with setfill and setw
        cout << "Difference is: " << setfill('0') << setw(2) << hh
             << ":" << setw(2) << mm << ":" << setw(2) << ss << endl;

        cout << "Do you want to run the program one more time? ";
        cin >> answer;
    }
    while(answer == 'y' || answer == 'Y');
}

