#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;
void sleepcp(int milliseconds);
#define clear() printf("\033[H\033[J")

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}

void lizard()
{
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::://+++ooooooooooooooooo++++////////::::::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::/+ooooooooooooooooooooooooooooooooooooo/::::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::/+ooooooooooooooooooooooooooooooooooooooooo/:::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::/yydNNdooooooooooooossssooooooooooooooooo+////+oo/::::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::sNMMMMNdooooooooooosmMMMMmsooooooooooooooo+////+ooo+:::::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::/+osyyyyssoooooooooooohMMMMMMhoooooooooooooooo++++oooooo/:::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::/++ooooooooooooooooooooooohmdhhysooooooooooooooooooooooooooo:::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::/+oooooooooooooooooooooooooooooooooooooooooo++/++ooooooooooooo+::::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::+ooooooooooooooooooooooooooooooooooooooooooo+/////+o+++ooooooooo+:::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::+ooooooooooooooooooooooooooooooooooooooooooooo+///+o/////+oooooooo:::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::+oooooooooooooooooooooooooooooooooooooooooooooooooooo//////oooooooo+::::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::oooooooooooooooooooooosoooooooooooooooooooo////+ooooo+///+oooooooooo/:::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::/+++oooooooooooooooooooooooooooooooooooooo//////ooooooooooooooooooooo:::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::///++oooooooooooooooooooooooooooooooo+/////ooooooooooooooooooooo+::::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::://////+++++++++++++++++++ooooooo+++ooooooooooooooooooooooo/:::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::+oooooooo++ooooooooo+++ooooooooo+:::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::/oooooo/////+ooooo+////+ooooooooo:::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::ooooo+//////oooooo////+ooooooooo:::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::/ooooo+///+oooooooo++ooooooooooo:::::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::+oooooooooooooooooooooooooooooo+::::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::+oooooooooooooooooooooooooooooo+:::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::+ooooooooo+////+ooooooooooooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::oooooooo+//////ooo+////+oooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::+oooooooo+////+ooo//////+ooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::oooooooooooooooo+///////ooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::ooooooooooooooooo//////+ooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::/ooo++//+oooooooooo++++ooooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::+oo+//////ooooooooooooooooooo/:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::ooo///////+oooooooooooooooooo/:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::ooo///////+oooooooooooooooooo/:::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::/ooo///////ooooooooooooooooooo+:::::::::::::::::" << endl;
    sleepcp(100);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::ooooo/////+oooooooooooooooooooo:::::::::::::::::" << endl;
    sleepcp(100);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::+ooooooo+ooooooooooooooooooooooo/::::::::::::::::" << endl;
    sleepcp(100);
    cout << "//////////////////////////////////////////////////+osssssssssssssssssssssssssssssss/////////////////" << endl;
    sleepcp(100);
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++oyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo++++++++++++++++" << endl;

}

int main()
{
    clear();
    sleepcp(14000);
    cout << "hey there friend" << endl;
    cout << "" << endl;
    sleepcp(4000);
    cout << "i know you've been having some troubles lately" << endl;
    cout << "" << endl;
    sleepcp(5000);
    cout << "be the person i know you can be" << endl;
    cout << "" << endl;
    sleepcp(5000);
    cout << "dont leave anything up to chance" << endl;
    cout << "" << endl;
    sleepcp(4000);
    cout << "i belive in you pal" << endl;
    sleepcp(3000);
    cout << "we ALL belive in you" << endl;
    cout << "" << endl;
    sleepcp(5000);
    cout << "ur a winner kiddo." << endl;
    cout << "dont you ever forget" << endl;
    cout << "" << endl;
    sleepcp(6000);
    lizard();
    sleepcp(19000);

    return 0;


}
