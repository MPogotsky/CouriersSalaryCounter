#include "Employee.h"

void Employee::setHours(int howManyHours) {
    hours = howManyHours;
}

void Employee::setMinutes(double howManyMinutes) {
    minutes = howManyMinutes;
}

void Employee::setDeliveries(int howManyDeliveries) {
    deliveries = howManyDeliveries;
}

void Employee::setIncome(int incomePerHour) {
    incPerHour = incomePerHour;
}

void Employee::setTips(double howManyTips) {
    tips = howManyTips;
}

void Employee::setTotalIncome(double incomeAfterTaxes) {
    totalIncome = incomeAfterTaxes;
}

void Employee::countAllHours() {
    allHours = hours;
    if (minutes > 60) {
        allHours = hours + int(minutes / 60);
        minutes = minutes - int(minutes / 60) * 60;
    }
}

void Employee::countHourIncome() {
    hourIncome = (allHours * incPerHour) + round(((minutes * incPerHour) / 60) * 10) / 10;
}

void Employee::countBonuses() {
    if (deliveries <= 75) {
        totalIncome += 0;
    } else if (deliveries <= 150) {
        bonuses += deliveries - 75;
        totalIncome += bonuses;
    } else if (deliveries <= 250) {
        bonuses += 75 + (deliveries - 150) * 2;
        totalIncome += bonuses;
    } else {
        bonuses += 275 + (deliveries - 250) * 4;
        totalIncome += bonuses;
    }
}

void Employee::countDelPerHour() {
    delPerHour = round((deliveries / (allHours + (minutes / 60))) * 10) / 10;
}

void Employee::countTotalIncome() {
    totalIncome += hourIncome + phoneBonus + tips;
}

void Employee::countAllData() {
    countAllHours();
    countDelPerHour();
    countHourIncome();
    countBonuses();
    countTotalIncome();
}


void Employee::showStatistics() {

    countAllData();

    std::cout << "Your`s statistic:";
    std::cout << std::setw(10) << std::left << "\n Hours  \t" << allHours << "h " << minutes << "min";
    std::cout << std::setw(10) << std::left << "\n Deliveries \t" << deliveries;
    std::cout << std::setw(10) << std::left << "\n Del/hour \t" << delPerHour;
    std::cout << std::setw(10) << std::left << "\n Hour income \t" << hourIncome << " zl";
    std::cout << std::setw(10) << std::left << "\n Bonuses \t" << bonuses << " + 25zl";
    std::cout << std::setw(10) << std::left << "\n Tips    \t" << tips << " zl";
    std::cout << "\n-------------------------";
    std::cout << std::setw(10) << std::left << "\n Total income \t" << totalIncome << " zl" << std::endl;

}
