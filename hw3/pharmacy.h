#ifndef _PHARMACY_H_
#define _PHARMACY_H_
#include <string>
#include "patient_account.h"
using namespace std;

class Pharmacy
{
private:
    const int MED_A = 200;
    const int MED_B = 800;
    const int MED_C = 3200;
    const int MED_D = 16000;
    const int MED_E = 80000;

public:
    int getA()
    {
        return MED_A;
    }
    int getB()
    {
        return MED_B;
    }
    int getC()
    {
        return MED_C;
    }
    int getD()
    {
        return MED_D;
    }
    int getE()
    {
        return MED_E;
    }
    bool update_patient_charges(string med_type, PatientAccount &patient)
    {
        if (med_type != "A" && med_type != "B" && med_type != "C" && med_type != "D" && med_type != "E")
            return false;
        else if (med_type == "A")
            patient.add_charges(MED_A);
        else if (med_type == "B")
            patient.add_charges(MED_B);
        else if (med_type == "C")
            patient.add_charges(MED_C);
        else if (med_type == "D")
            patient.add_charges(MED_D);
        else if (med_type == "E")
            patient.add_charges(MED_E);
        return true;
    }
};

#endif