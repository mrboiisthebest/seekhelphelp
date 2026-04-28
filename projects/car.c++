#include <iostream>
#include <string>
#include <vector>
#include <any>
#include <string>

class car{
    public:
        std::string make ="DEFAULT-MAKE";
        bool powered = false;
        std::string name = "DEFAULT-CAR";
        int year = 0;
        std::vector<std::string> data;

    car(std::string make, std::string name, int year){
        this->make = make;
        this->name = name;
        this->year = year;

        this->UpdateData();
    }
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
        this->data.push_back(std::to_string(this->year));
    }

    void PrintData(){
      for (auto& item: data){
           std::cout << item << std::endl;
        }
    }
};


int main(){
    car Honda("Honda", "BatMobile", 2031);

    Honda.PrintData();

    return 0;
}