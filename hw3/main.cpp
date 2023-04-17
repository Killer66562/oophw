#include "patient_account.h"
#include "surgery.h"
#include "pharmacy.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    PatientAccount patient1, patient2(10);
    Surgery sg;
    Pharmacy ph;
    string input;
    cout << "2 patients are waiting for check out today." << endl;
    cout << "Patient1 has not stayed in this hospital." << endl;
    cout << "Patient2 has stayed in this hospital for " << patient2.stayed_days() << " days." << endl;
    cout << "The daily rate is " << patient2.daily_rate() << " dollars." <<endl;
    cout << "Calculate patient1's charges first then patient2's charges." << endl;

    cout << endl << "Charges of different surgeries:" << endl;
    cout << "A) " << sg.getA() << " dollars" << endl;
    cout << "B) " << sg.getB() << " dollars" << endl;
    cout << "C) " << sg.getC() << " dollars" << endl;
    cout << "D) " << sg.getD() << " dollars" << endl;
    cout << "E) " << sg.getE() << " dollars" << endl;
    cout << endl << "Enter 'N' if this patient did not do any surgery" << endl;
    cout << "Please enter a type of surgery:" << endl;
    while (true)
    {
        getline(cin, input);
        if (input == "N")
            break;
        if (sg.update_patient_charges(input, patient1))
            break;
        else
            cout << "Invalid input! Please enter again:" << endl;
    }
    cout << endl << "Charges of different medicines:" << endl;
    cout << "A) " << ph.getA() << " dollars" << endl;
    cout << "B) " << ph.getB() << " dollars" << endl;
    cout << "C) " << ph.getC() << " dollars" << endl;
    cout << "D) " << ph.getD() << " dollars" << endl;
    cout << "E) " << ph.getE() << " dollars" << endl;
    cout << endl << "Enter 'N' if this patient did not do any surgery" << endl;
    cout << "Please enter a type of surgery:" << endl;
    while (true)
    {
        getline(cin, input);
        if (input == "N")
            break;
        if (ph.update_patient_charges(input, patient1))
            break;
        else
            cout << "Invalid input! Please enter again:" << endl;
    }
    cout << endl
         << "Patient1's total charges: " << patient1.check_out() << endl;
    cout << endl << "Charges of different surgeries:" << endl;
    cout << "A) " << sg.getA() << " dollars" << endl;
    cout << "B) " << sg.getB() << " dollars" << endl;
    cout << "C) " << sg.getC() << " dollars" << endl;
    cout << "D) " << sg.getD() << " dollars" << endl;
    cout << "E) " << sg.getE() << " dollars" << endl;
    cout << endl << "Enter 'N' if this patient did not do any surgery" << endl;
    cout << "Please enter a type of surgery:" << endl;
    while (true)
    {
        getline(cin, input);
        if (input == "N")
            break;
        if (sg.update_patient_charges(input, patient2))
            break;
        else
            cout << "Invalid input! Please enter again:" << endl;
    }
    cout << endl << "Charges of different medicines:" << endl;
    cout << "A) " << ph.getA() << " dollars" << endl;
    cout << "B) " << ph.getB() << " dollars" << endl;
    cout << "C) " << ph.getC() << " dollars" << endl;
    cout << "D) " << ph.getD() << " dollars" << endl;
    cout << "E) " << ph.getE() << " dollars" << endl;
    cout << endl << "Enter 'N' if this patient did not do any surgery" << endl;
    cout << "Please enter a type of surgery:" << endl;
    while (true)
    {
        getline(cin, input);
        if (input == "N")
            break;
        if (ph.update_patient_charges(input, patient2))
            break;
        else
            cout << "Invalid input! Please enter again:" << endl;
    }
    cout << endl
         << "Patient2's total charges: " << patient2.check_out() << endl;
}