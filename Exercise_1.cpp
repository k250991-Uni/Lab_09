# include <iostream>
# include <string>
using namespace std;

class Car 
{
    public:
        string carBrand;
        static int totalCars;

        Car (string carBrand) {
            this -> carBrand = carBrand;
            totalCars++;
            cout << "Car added succesfully\n";
        }

        void display () {
            cout << "Total cars added are " << totalCars << endl;
        }
};

int Car::totalCars = 0;

int main() {
    Car c1("Ford");
    Car c2("BMW");

    c1.display();
}