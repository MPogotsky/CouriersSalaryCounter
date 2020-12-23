#ifndef SALARYCOUNTER_COURIER_H
#define SALARYCOUNTER_COURIER_H

#define COURIER_INC_PER_H 20

class CourierStudent : public Employee {
public:

    CourierStudent(int hours, double minutes, int deliveries, double tips) : Employee(hours, minutes, deliveries,
                                                                                      tips) {
        setIncome(COURIER_INC_PER_H);
    }

    ~CourierStudent() {};
};

class Courier : public Employee {
private:
    struct taxes {
        double healthTax = 0.1126;
        double incomeTax = 0.18;
        double heathContribution1 = 0.09;
        double heathContribution2 = 0.0775;
    };

    taxes tax;

    double healthTaxBasis;
    double incomeTaxBasis;

    double incomeAfterTaxFee;

    double incomeAfterTaxes();

protected:

    void countAllData() override;

public:
    Courier(int hours, double minutes, int deliveries, double tips) : Employee(hours, minutes, deliveries, tips) {
        setIncome(COURIER_INC_PER_H);
    }

    ~Courier() {};
};

#include "Courier.cpp"

#endif //SALARYCOUNTER_COURIER_H
