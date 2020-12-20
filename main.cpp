#include "EmployeeType.h"

using namespace std;

int main() {

    int hours = 105;
    int minutes = 95;
    int deliveries = 231;
    double tips = 13.40;

//    cout << "How many full hours you`ve worked?: " << endl;
//    cin >> hours;
//    cout << "How many minutes left?: " << endl;
//    cin >> minutes;
//    cout << "How many deliveries you`ve made?: " << endl;
//    cin >> deliveries;
//    cout << "How many tips you`ve earned?: " << endl;
//    cin >> tips;

    Student student(hours, minutes, deliveries, tips);
    student.showStatistics();

    Courier courier(hours, minutes, deliveries, tips);
    courier.showStatistics();

    return 0;
}
