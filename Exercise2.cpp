#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
    srand(time(0));
    int daysTillExpiration =rand() % 12;
    switch(daysTillExpiration){
        case 0:
        std::cout<<"Your subscripition has expired."<<std::endl;
        break;
        case 1:
        std::cout<<"Your subscrition expires within a day!\nRenew now and save 20%!"<<std::endl;
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        std::cout<<"Your subscripition expires soon"<<daysTillExpiration<<"days\nRenew now and save 10%!"<<std::endl;
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        std::cout<<"Your subscripition expires soon. Renew now!"<<std::endl;
        break;
        default:
        std::cout<<"You have an active subscripition"<<std::endl;
        break;
    }
      return 0;
}

    
