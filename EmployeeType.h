#ifndef PYSZNEPLCOUNTER_EMPLOYEETYPE_H
#define PYSZNEPLCOUNTER_EMPLOYEETYPE_H

#include <iostream>
#include <iomanip>
#include <cmath>

#define COURIER_INC_PER_H 20
#define CAP_INC_PER_H 21

class EmployeeType {
private:

    int hours;
    double minutes;
    int deliveries;
    double tips;

    int incPerHour;

    int bonuses;
    int allHours;
    double hourIncome;
    double totalIncome;
    double delPerHour;

    const int phoneBonus = 25;

protected:

    void setHours(int howManyHours);

    void setMinutes(double howManyMinutes);

    void setDeliveries(int howManyDeliveries);

    void setIncome(int incomePerHour);

    void setTips(double howManyTips);

    void setTotalIncome(double incomeAfterTaxes);


    int getHours() const {
        return hours;
    }

    double getMinutes() const {
        return minutes;
    }

    int getDeliveries() const {
        return deliveries;
    }

    int getBonuses() const {
        return bonuses;
    }

    int getAllHours() const {
        return allHours;
    }

    double getTotalIncome() const {
        return totalIncome;
    }

    double getHourIncome() const {
        return hourIncome;
    }


    void countAllHours();

    void countHourIncome();

    void countBonuses();

    void countTotalIncome();

    void countDelPerHour();

protected:

    virtual void countAllData();

public:
    EmployeeType(int hours, double minutes, int deliveries, double tips)
            : allHours(0), totalIncome(0), hourIncome(0), bonuses(0),
              incPerHour(0){
        setHours(hours);
        setMinutes(minutes);
        setDeliveries(deliveries);
        setTips(tips);
    }

    void showStatistics();

    ~EmployeeType() = default;
};

class Student : public EmployeeType {
public:

    Student(int hours, double minutes, int deliveries, double tips) : EmployeeType(hours, minutes, deliveries, tips){
        setIncome(COURIER_INC_PER_H);
    }

    ~Student() {};
};

class Courier : public EmployeeType{
private:
    struct taxes{
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
    Courier(int hours, double minutes, int deliveries, double tips) : EmployeeType(hours, minutes, deliveries, tips){
        setIncome(COURIER_INC_PER_H);
    }

    ~Courier() {};
};

#include "EmployeeType.cpp"

#endif //PYSZNEPLCOUNTER_EMPLOYEETYPE_H
