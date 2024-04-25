#include <iostream>
using namespace std;
int main(){
    int userlnput;
    cout<<"please enter an interger value between 5 and 10:";
    cin>> userlnput;
    while(userlnput<5 || userlnput>10){
      cout<<"invalid input.please enter an interger value between 5 and 10:";
       cin>> userlnput;
    }
    cout<<"Your input value";
    cout<<userlnput;
    cout<<"has been accepted."<<endl;
    return 0;
}