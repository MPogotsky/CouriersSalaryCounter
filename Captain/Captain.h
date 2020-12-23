#ifndef SALARYCOUNTER_CAPTAIN_H
#define SALARYCOUNTER_CAPTAIN_H

#define CAP_INC_PER_H 21

class CaptainStudent : public Employee {
public:
    CaptainStudent(int hours, double minutes, int deliveries, double tips) : Employee(hours, minutes, deliveries,
                                                                                      tips) {
        setIncome(CAP_INC_PER_H);
    }

    ~CaptainStudent() {};
};

class Captain : public Courier {
public:
    Captain(int hours, double minutes, int deliveries, double tips) : Courier(hours, minutes, deliveries, tips) {
        setIncome(CAP_INC_PER_H);
    }

    ~Captain() {};
};



#endif //SALARYCOUNTER_CAPTAIN_H
