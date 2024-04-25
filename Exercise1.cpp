#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int daysTillExpiration = rand() % 12;
    if(daysTillExpiration <= 0){
   cout <<"Your subscripition has expired"<<endl;
    }else if(daysTillExpiration <= 1){
   cout <<"Your subscripition expires within a day!" <<endl; 
   cout <<"Renew now and save 20%!"<<endl;
  }else if (daysTillExpiration <= 5){
    cout <<"Your subscripition expires in"<<daysTillExpiration<<"days"<<endl;
    cout <<"Renew now and save 10%!"<<endl;
   }else if (daysTillExpiration <=10) {
    cout <<"Your subscripition will expire soon. Renew now!"<<endl;
   }
     else{cout << "You have an active subscripition."<<endl;
     }
     return 0;
     
}