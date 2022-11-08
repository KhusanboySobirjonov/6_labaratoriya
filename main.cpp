#include <iostream>
#include <string>
using namespace std;
struct teacher {
    int group_digit, num;
    string last_name, first_name, patronymic, science;
};
class Teachers {
    public:
        teacher teach;
        void show();
        void show1();
};
class teachers : public Teachers {
    public:
        void show() {
            cout << "No  " << "FISH\t\t\t\t" << "Fani\t\t" << "Guruhi\t\n";
        }
        void show1() {
            cout << teach.num << "   " << teach.last_name << " " << teach.first_name << " " << teach.patronymic << "\t" << teach.science << "\t" << teach.group_digit << endl;
        }
    teachers();
};
teachers::teachers() {
    cout << "Familiyasini kiriting:\n";
    cin >> teach.last_name;
    cout << "Ismini kiriting:\n";
    cin >> teach.first_name;
    cout << "Sharifini kiriting:\n";
    cin >> teach.patronymic;
    cout << "Fanini kiriting:\n";
    cin >> teach.science;
    cout << "Guruhini kiriting:\n";
    cin >> teach.group_digit;
}
int main() {
    teachers *obj;
    int n;
    cout << "O'qituvchilar sonini kiriting: ";
    cin >> n;
    obj = new teachers[n];
    obj[0].show();
    for (int i=0; i<=n; i++) {
        obj[i].teach.num=i;
    }
    for (int i=0; i<=n; i++) {
        if (i<n) {
            obj[i].show1();
        }
    }
    return 0;
}
