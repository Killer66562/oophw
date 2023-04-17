#ifndef _SURGERY_H_
#define _SURGERY_H_
#include <string>
using namespace std;
class Surgery
{
private:
    const int SURGERY_A = 6000;
    const int SURGERY_B = 12000;
    const int SURGERY_C = 24000;
    const int SURGERY_D = 48000;
    const int SURGERY_E = 96000;

public:
    int getA()
    {
        return SURGERY_A;
    }
    int getB()
    {
        return SURGERY_B;
    }
    int getC()
    {
        return SURGERY_C;
    }
    int getD()
    {
        return SURGERY_D;
    }
    int getE()
    {
        return SURGERY_E;
    }
    bool update_patient_charges(string surgery_type, PatientAccount &patient)
    {
        if (surgery_type != "A" && surgery_type != "B" && surgery_type != "C" && surgery_type != "D" && surgery_type != "E")
            return false;
        else if (surgery_type == "A")
            patient.add_charges(SURGERY_A);
        else if (surgery_type == "B")
            patient.add_charges(SURGERY_B);
        else if (surgery_type == "C")
            patient.add_charges(SURGERY_C);
        else if (surgery_type == "D")
            patient.add_charges(SURGERY_D);
        else if (surgery_type == "E")
            patient.add_charges(SURGERY_E);
        return true;
    }
};

#endif