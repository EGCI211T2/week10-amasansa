#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"
// void square(float&);
// void square(float &x)
// {
//     x*=x;
// }

int main(){
    struct Time t1,t2,t3;
    cout<<"What time was it?";
    getTime(t1);
    cout<<"What time is it now?";
    getTime(t2);
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    display(t3);

    // float age;
    // string colour;
    // cout << "How old are you? and What your fav colour?" << endl;
    // cin >> age >> colour;
    // cout << "Your age is " << setw(10) << age << endl;
    // cout <<"Your fav colour is " << setw(5) << colour << endl << endl;

    // cout << "Your age is " << setfill(' ') << setw(10) << age << endl;
    // cout <<"Your fav colour is " << setw(5) << colour << endl << endl;

    // cout << "Your age is " << setw(10) << fixed << setprecision(2) << age << endl;
    // cout <<"Your fav colour is " << setw(5) << colour << endl << endl;

    // square(age);
    // cout << "Your age is " << setw(10) << fixed << setprecision(2) << age << endl;
    // cout <<"Your fav colour is " << setw(5) << colour << endl;
}
