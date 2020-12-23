#ifndef SALARYCOUNTER_EMPLOYEE_H
#define SALARYCOUNTER_EMPLOYEE_H

#include <iostream>
#include <iomanip>
#include <cmath>

class Employee {
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
    Employee(int hours, double minutes, int deliveries, double tips)
            : totalIncome(0), hourIncome(0), bonuses(0),
              incPerHour(0) {
        setHours(hours);
        setMinutes(minutes);
        setDeliveries(deliveries);
        setTips(tips);
    }

    void showStatistics();

    ~Employee() = default;
};





#include "Employee.cpp"

#endif //SALARYCOUNTER_EMPLOYEE_H
