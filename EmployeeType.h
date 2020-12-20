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

public:
    EmployeeType()
            : hours(0), minutes(0), deliveries(0), allHours(0), totalIncome(0), hourIncome(0), bonuses(0),
              incPerHour(0), tips(0) {
    }

    const int phoneBonus = 25;

    void setHours(int howManyHours);

    void setMinutes(double howManyMinutes);

    void setDeliveries(int howManyDeliveries);

    void setIncome(int incomePerHour);

    void setTips(double howManyTips);


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

    void showStatistics();

    ~EmployeeType() = default;
};

class Student : public EmployeeType {
public:

    Student(int hours, double minutes, int deliveries, double tips) {
        setHours(hours);
        setMinutes(minutes);
        setDeliveries(deliveries);
        setTips(tips);
        setIncome(COURIER_INC_PER_H);
    }

    ~Student(){};
};

#include "EmployeeType.cpp"

#endif //PYSZNEPLCOUNTER_EMPLOYEETYPE_H
