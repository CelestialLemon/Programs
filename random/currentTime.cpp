#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    time_t now = time(0);
    
    
    tm* localtm = localtime(&now);
    cout << "The local date and time is: " << asctime(localtm) << endl;
    return 0;
}
