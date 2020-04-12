#include <iostream>
#include "complexType.h"

using namespace std;

int main() {

    complexType comp1(17, 32);
    complexType comp2;
    complexType comp3;

    cout << "Enter Complex Number in th form (a,b) : ";
    cin >> comp2;

    cout << endl << "Value of Comp1 : " << comp1;

    cout << endl << "Value of Comp2 : " << comp2;

    cout << endl << "Incremented Value of Comp1 : " << ++comp1;

    cout << endl << "Decremented Value of Comp2 : " << --comp2;

    comp3 = comp1 + comp2;

    cout << endl << "Value of Comp3 : " << comp3;

    cout << endl << comp1 << " * " << comp2 << " = " << comp1 * comp2;
    cout << endl << comp3 << " - " << comp2 << " = " << comp3 - comp2;
    cout << endl << comp1 << " / " << comp2 << " = " << comp1 / comp2;


    complexType comp4(comp2);

    cout << endl << "Value of Comp4 : " << comp4 << endl;

    comp4.setRealNumber(50);

    cout << endl << "New Value of Comp4 : " << comp4;

    complexType comp5;

    comp5 = comp1;

    cout <<  endl << "Value of Comp5 : " << comp5;

    comp5.setImaginaryNumber(97);

    cout << endl << "New Value of Comp5 : " << comp5 << endl;

    if (comp5 == comp1)
        cout << endl << "THEY GOT THE SAME REAL AND IMAGINARY NUMBER";
    else
        cout << endl << "THEY GOT DIFFERENT REAL AND IMAGINARY NUMBER";

    if (comp2 != comp1)
        cout << endl << "COMP2 IS NOT THE SAME AS COMP1";
    else
        cout << endl << "COMP2 IS THE SAME AS COMP1";

    if (comp2 < comp1)
        cout << endl << "COMP2 IS LESS THAN COMP1";
    else
        cout << endl << "COMP2 IS NOT LESS THAN COMP1";

    if (comp4 >= comp3)
        cout << endl << "COMP4 IS GREATER THAN OR EQUAL TO COMP3";
    else
        cout << endl << "COMP4 IS NOT GREATER THAN OR EQUAL TO COMP3";

    return 0;
}
