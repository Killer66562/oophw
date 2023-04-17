#ifndef _PATIENT_ACCOUNT_H_
#define _PATIENT_ACCOUNT_H_

class PatientAccount
{
private:
    int charges;
    int days;
    const int DAILY_RATE = 4000;

public:
    PatientAccount()
    {
        charges = 0;
        days = 0;
    }
    PatientAccount(int d)
    {
        charges = 0;
        days = d;
    }
    int stayed_days()
    {
        return this->days;
    }
    int daily_rate()
    {
        return DAILY_RATE;
    }
    void add_charges(int charges)
    {
        this->charges += charges;
    }
    int check_out()
    {
        return this->charges + this->days * DAILY_RATE;
    }
};

#endif