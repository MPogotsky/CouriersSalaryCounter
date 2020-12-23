#include "Employee/Employee.h"
#include "Courier/Courier.h"
#include "Captain/Captain.h"

using namespace std;

int main() {

    cout << "Please, chose what type of employee you are?:" << endl;
    cout << "1.Courier \n"
            "2.Captain " << endl;
    int choice1;
    cin >> choice1;

    if(choice1 < 1 or choice1 > 2){
        cerr << "Invalid data. Choose from those two." << endl;
    }else{

        cout << "Do you pay taxes?" << endl;
        cout << "1.Yes \t2.No" << endl;
        int choice2;
        cin >> choice2;

        if(choice2 < 1 or choice2 > 2){
            cerr << "Invalid data. Choose from those two." << endl;
        }else{

            int hours  = 60;
            int minutes = 30;
            int deliveries = 133;
            double tips = 14;

//            cout << "How many full hours you`ve worked?: " << endl;
//            cin >> hours;
//            cout << "How many minutes left?: " << endl;
//            cin >> minutes;
//            cout << "How many deliveries you`ve made?: " << endl;
//            cin >> deliveries;
//            cout << "How many tips you`ve earned?: " << endl;
//            cin >> tips;

            if(choice1 == 1 && choice2 == 1){
                Courier courier(hours, minutes, deliveries, tips);
                courier.showStatistics();
            }else if(choice1 == 1 && choice2 ==2){
                CourierStudent student(hours, minutes, deliveries, tips);
                student.showStatistics();
            }else if(choice1 == 2 && choice2 == 1){
                Captain captain(hours, minutes, deliveries, tips);
                captain.showStatistics();
            }else if(choice1 == 2 && choice2 == 2){
                CaptainStudent captainStudent(hours, minutes, deliveries, tips);
                captainStudent.showStatistics();
            }
        }
    }

    return 0;
}
