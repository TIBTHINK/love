#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;

int main(){

    cout << "You are loved." << endl;
    cout << "You might not feel like you are but there is some one out there for you." << endl;
    std::chrono::duration<int, std::milli> timespan(1000);
    std::this_thread::sleep_for(timespan);
    return 0;
}
