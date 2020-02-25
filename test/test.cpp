#include "CLI11.hpp"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <time.h>
#include <stdio.h>
#include <iterator>


using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

using namespace std;

int main(int argc, char** argv) {
    CLI::App app{""};

    string filename = "default";
    CLI::Option* v = app.add_flag("-v, --version ", "gives the version of the proggram");
    CLI::Option* version = app.add_flag("");

    CLI11_PARSE(app, argc, argv);

    if(v)
      cout << "3.2" << endl;
    return 0;

    if(version)
      cout << "3.2" << endl;
    return 0;
}