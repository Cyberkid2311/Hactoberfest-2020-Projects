#include <iostream>
int main() {
  int pin,tries;
  std::cout << "BANK OF CODING"<<endl<<endl;
  std::cout << "Enter your PIN: ";
 std::cin >> pin; 
  if(pin<1000 || pin>9999){
  	std::cout<<"Please enter four digit PIN:";
  	std::cin>>pin;
	std::cout<<"tries: "<<tries<<endl;
	tries++;
	}
  while (pin != 1234 && tries <= 3) {
    std::cout <<endl << "Enter your PIN: ";
    std::cin >> pin;
     std::cout<<"tries: "<<tries<<endl;
	tries++; 
   }
   if (pin == 1234) {
    std::cout << "PIN accepted!"<<endl;
    std::cout << "You now have access."<<endl;  
  } 

}
