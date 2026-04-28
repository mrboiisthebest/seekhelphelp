#include <iostream>

class Shape{
    public:
        double voulume;
        std::string color;
        std::string name;

    void PrintData(){
        std::cout << "Volume: " << this->voulume << "\n";
        std::cout << "Color: " << this->color << "\n";
        std::cout << "Name: " << this->name << "\n";
    }
};


class Cube : public Shape{
    public:
        int length;

    void Claculate(){
        this->voulume = this->length * 6;
    }

    Cube(int length, std::string color, std::string name){
        this->length = length;
        this->color = color;
        this->name = name;
    }
};


int main(){
    Cube box(33, "Green", "Box");

    box.Claculate();
    box.PrintData();

    return 0;
}