//Create a class time with members hours, minutes. Take input, add two time objects passing objects to function and display result.


#include<iostream>
using namespace std;

class time
{
    int hours;
    int minutes;

    public:
        void gettime(int h, int m)
        {
            hours = h;
            minutes = m;
        }

        void puttime(void)
        {
            cout << hours << " hours : ";
            cout << minutes << " minutes" << endl;
        }

        void sum(time, time);
};

void time::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes %60;
    hours = hours + t1.hours + t2.hours;
}


int main()
{
    time T1, T2, T3;

    T1.gettime(2, 45);
    T2.gettime(3, 30);

    T3.sum(T1, T2);

    cout << "T1= ";
    T1.puttime();

    cout << "T2= ";
    T2.puttime();

    cout << "T3= ";
    T3.puttime();

}


// Output:
// T1= 2 hours : 45 minutes
// T2= 3 hours : 30 minutes
// T3= 6 hours : 15 minutes

