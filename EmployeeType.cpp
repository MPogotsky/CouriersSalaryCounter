
#include "EmployeeType.h"

void EmployeeType::setHours(int howManyHours){
    hours = howManyHours;
}

void EmployeeType::setMinutes(double howManyMinutes){
    minutes = howManyMinutes;
}

void EmployeeType::setDeliveries(int howManyDeliveries){
    deliveries = howManyDeliveries;
}

void EmployeeType::setIncome(int incomePerHour){
    incPerHour = incomePerHour;
}

void EmployeeType::setTips(double howManyTips) {
    tips = howManyTips;
}

void EmployeeType::countAllHours() {
    if(minutes > 60){
        allHours = hours + int(minutes / 60);
        minutes = minutes - int(minutes / 60)*60;
    }
}

void  EmployeeType::countHourIncome(){
    hourIncome = (allHours * incPerHour) + round(((minutes * incPerHour)/60)*10)/10;
}

void EmployeeType::countBonuses(){
    if (deliveries <= 75) {
        totalIncome += 0;
    } else if (deliveries <= 150) {
        totalIncome += deliveries - 75;
        bonuses += deliveries - 75;
    } else if (deliveries <= 250) {
        totalIncome += (deliveries - 150) * 2;
        bonuses += (deliveries - 150) * 2;
    } else {
        totalIncome += (deliveries - 250) * 4;
        bonuses += (deliveries - 250) * 4;
    }
}

void EmployeeType::countDelPerHour() {
    delPerHour = round((deliveries/(allHours + (minutes/60)))*10)/10;
}

void EmployeeType::countTotalIncome(){
    totalIncome += hourIncome + phoneBonus + tips;
}

void EmployeeType::countAllData() {
    countAllHours();
    countDelPerHour();
    countHourIncome();
    countBonuses();
    countTotalIncome();
}

void EmployeeType::showStatistics() {

    countAllData();

    std::cout << "Your`s statistic:";
    std::cout << std::setw(10)<< std::left << "\n Hours  \t"      <<  allHours << "h " << minutes <<"min";
    std::cout << std::setw(10)<< std::left << "\n Deliveries \t"  <<  deliveries;
    std::cout << std::setw(10)<< std::left << "\n Del/hour \t"  <<  delPerHour;
    std::cout << std::setw(10)<< std::left << "\n Hour income \t" <<  hourIncome << " zl";
    std::cout << std::setw(10)<< std::left << "\n Bonuses \t"     <<  bonuses << " + 25zl";
    std::cout << std::setw(10)<< std::left << "\n Tips    \t"     <<  tips << " zl";
    std::cout << "\n-------------------------";
    std::cout << std::setw(10)<< std::left << "\n Total income \t"<<  totalIncome << " zl" << std::endl;

}
