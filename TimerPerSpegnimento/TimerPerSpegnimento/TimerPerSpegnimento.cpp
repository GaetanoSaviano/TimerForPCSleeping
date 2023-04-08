

#include <iostream>
#include <windows.h> 
#include <stdlib.h>

using namespace std;
int main()
{
    int time;
    cout << "In how many minutes do you want to shut down your PC ? ";
    cin >> time;
    int sleep_time = time * 60000;
    Sleep(sleep_time);
    cout << "Bye Bye...Good Night!" << endl;
    system("shutdown -s -t 5 -f");
    
}


