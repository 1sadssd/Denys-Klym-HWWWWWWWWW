#include <iostream> 
#include<Windows.h>
#include<time.h>

using namespace std;

class ChisloCounter 
{
private:

    int minimum;
    int maximum;
    int value;

public:
    ChisloCounter(int min, int max)
    {
        minimum = min;
        maximum = max;
        value = minimum;
    }
    void setMinimum(int min) 
    {
        minimum = min;
    }
    void setMaximum(int max) 
    {
        maximum = max;
    }
    void increment() 
    {
        if (value == maximum) 
        {
            value = minimum;
        }
        else
        {
            value++;
        }
    }
    int getValue() 
    {
        return value;
    }
};

int main()
{
SetConsoleOutputCP(1251);

ChisloCounter  counter(0, 59);

    for (int i = 0; i < 65; i++) 
    {
        cout << counter.getValue() << " ";
        counter.increment();

       Sleep(1000);
    }
    return 0;
}