#include <iostream>
using namespace std;

void displayValue (int); //this is the function prototype. it lets the program know that it exists and the argument values should be int type.

int main ()
{
    displayValue (3); //the function is called and the argument 3 is passed through parameter a.
    return 0;
}

void displayValue (int a) // parameter a gets assigned argument 3. a has scope inside the local function only.
{
    cout << "the value running through the displayValue function is " << a;
}
