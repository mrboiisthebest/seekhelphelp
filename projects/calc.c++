#include <iostream>
#include <iomanip>

using namespace std;

double addNumbers(double a, double b){
    return a + b;
}

double subNumbers(double a, double b){
    return a - b;
}

double divNumbers(double a, double b){
    return a / b;
}

double multNumbers(double a, double b){
    return a * b;
}


double calculate(double num1, double num2, int opp){
    /*
        1 = add,
        2 = sub,
        3 = div,
        4 = mult
    */
    switch(opp){
        case 1:
        return addNumbers(num1, num2);

        case 2:
        return subNumbers(num1, num2);

        case 3:
        return divNumbers(num1, num2);

        case 4:
        return multNumbers(num1, num2);
    }
}

double userInteraction(){
double num1, num2, opp;

    cout << "Number1:"<< endl;
    std::cin >> num1;
    cout << "Number2:"<< endl;
    std::cin >> num2;
    cout << "Opp(1-4 -> +,-,/,*):"<< endl;
    std::cin >> opp;

    return num1, num2, opp;

}

int main(){
    double num1, num2, opp = userInteraction();
    double result = calculate(num1, num2, opp);

    cout << "Result:" << result << endl;

    return 0;

}


/*
Case for non number opperaters
Add checks for user input

*/