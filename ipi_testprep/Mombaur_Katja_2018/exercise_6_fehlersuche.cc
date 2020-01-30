#include <iostream>
#include <cmath>
#include <iomanip>

double geometric_series(double q, int n) { // int rückgabewert
    double res;
    int counter = 0;
    while(counter <= n){
        res += pow(q, counter); // sollte wohl res += pow(q, i) sein. außerdem fehlt semikolon
        ++counter;
    }
    return res;
}

int main(){
    double q = 0.5;
    double res = geometric_series( q,53);
    std::cout << std::setprecision(20) << res << std::endl;
    if (res - 2. == 0.) { // ZUweisung statt bool gleiheitsabfrage
        std::cout << "Ergebnis stimmt" << std::endl; // std:: fehlt
    }
    else{
        std::cout << "Ergebnis stimmt nicht " << std::endl; // mochmal std:: vergessen
    }
    return 0;
}