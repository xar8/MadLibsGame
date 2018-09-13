//Authors: 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string noun1;
    string verb1;
    string noun2;
    string place1;
    string adjective1;
    string noun3;
    string noun4;
    string verb2;
    int number1;
    
    cout<<"Enter a noun: "<< endl;
    cin>> noun1;
    cout<<"Enter a verb: "<< endl;
    cin>> verb1;
    cout<<"Enter a noun: "<< endl;
    cin>> noun2;
    cout<<"Enter a place: "<< endl;
    cin>> place1;
    cout<<"Enter an adjective: "<< endl;
    cin>> adjective1;
    cout<<"Enter a noun: "<< endl;
    cin>> noun3;
    cout<<"Enter a noun: "<< endl;
    cin>> noun4;
    cout<<"Enter a verb: "<< endl;
    cin>> verb2;
    cout<<"Enter a number: "<< endl;
    cin>> number1;
   
    cout<<"Dear " << noun1 << "," << endl;
    cout<<"You know I " << verb1 << " you. You got them " << noun2 << ". Haha." << endl;
    cout<<"I am currently in " << place1 << ", and I am " << adjective1 << ". I am" << endl;
    cout<<"going to have my pet " << noun3 << " deliver this to you. Or should I go in my" << endl;
    cout<<"flying " << noun4 << ". You know what, I am just going to " << verb2 << " it." << endl;
    cout<<"See you in about " << number1 << " days. Haha bye." << endl;

  return 0;
}
