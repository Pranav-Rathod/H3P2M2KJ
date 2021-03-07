
/* =============================================================================
      Program in C ++ that tells the form of Water whether it is Ice, Water or Steam. Display the menu also as under
    -	Temperature Less than 0 = ICE
    -	Temperature Greater than 0 & Less than 100 = Water
    -	Temperature Greater than 100 = STEAM
============================================================================== */

#include <iostream> 
using namespace std;

int main() 
{
    int tamp;
    cout << "Enter Temperature in Celsius: "; cin >> tamp;

    if (tamp == 0) cout << "ICE";
    else if (tamp>0 && tamp<100) cout << "Water";
    else    cout << "STEAM";
return 0;
}