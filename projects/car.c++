#include <iostream>
#include <string>
#include <vector>
#include <any>
#include <string>

class car{
    public:
        std::string make = "DEFAULT-MAKE";
        bool powered = false;
        std::string name = "DEFAULT-CAR";

        std::vector<std::string> data;

    void Power(bool power){
        if (power){
            std::cout << "Turned on!"; 
            this->powered = true;
        }else if(!power){
            std::cout << "Turned off!"; 
            this->powered = false;
        }
    }

    void UpdateData(){
        this->data.push_back(this->name);
        this->data.push_back(std::to_string(this->powered));
        this->data.push_back(this->make);
    }

    void PrintData(){
      for (auto& item: data){
           std::cout << item << std::endl;
        }
    }
};


int main(){
    car Honda;
    Honda.Power(true);
    Honda.make = "Honda";
    Honda.name = "TheBatMobile";

    Honda.UpdateData();
    Honda.PrintData();

    return 0;
}