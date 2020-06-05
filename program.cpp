#include <iostream>

using namespace std;

double square(double x)
{
    return x*x;
}

void printSquare(double x)
{
    cout << "The square of " << x << " is " << square(x) << endl;
}

char getAnswer()
{
    cout << "Do you want to proceed (y or n)?" << endl;
    char answer = 0;
    cin >> answer;
    return answer;
}

bool accept()
{
    
    if(getAnswer()=='y') return true;
    return false;
}

bool accept2()
{
    switch(getAnswer()){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

int main()
{
    cout << "Hello World!\n";
    printSquare(2.2);
    printSquare(67.98);
    return 0;
}