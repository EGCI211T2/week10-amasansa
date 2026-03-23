#include <iostream>
#include <iomanip>

using namespace std;
#include "Time.h"
int main(){
    Time t1,t2,t3;
    t1.getTime();
    // t1.set_time(5,6,7);
    t2.getTime();
    // t2.set_time(6,7,8);
    t1.display();
    t2.display();
    
    t3=t2.subtract(t1);
    t3.display();
}
