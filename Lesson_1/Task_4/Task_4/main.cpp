#include <iostream>
using namespace std;

int main() {
    int salary;

    cout <<"Write your salary: "; cin >> salary;

    if ((salary > 0) * (salary < 1000)) {
        cout <<"You should work harder!"<<endl;
    }
    if ((salary > 999) * (salary < 100000)) {
        cout <<"You are well done"<< endl;
    }

    if (salary > 1000000) {
        cout <<"You are a millionaire " << endl;
    }

    return 0;

}
