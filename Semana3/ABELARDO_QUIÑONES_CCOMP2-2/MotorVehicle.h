#include <iostream>
#include <string>

class MotorVehicle {
    public:
        MotorVehicle(std::string fuelT,std::string Color, int engineC){
            fuelType = fuelT;
            color = Color;
            engineCapacity = engineC;
        }
        
        void DisplayCarDetails(){
            std::cout << "\nMake:  " << make;
            std::cout << "\nFuel Type:  " << fuelType;
            std::cout << "\nYear of Manufacture:  " << yearOfManufacture;
            std::cout << "\nColor:  " << color;
            std::cout << "\nEngine Capacity:  " << engineCapacity << std::endl;
            
        }

        // Gets & Sets

        void setMake(std::string Make){
            make = Make;
        }
        std::string getMake() const{
            return make;
        }
        void setFuelType(std::string fuelT){
            fuelType = fuelT;
        }
        std::string getFuelType() const{
            return fuelType;
        }
        void setYearOfManufacture(int yearManu){
            yearOfManufacture = yearManu;
        }
        int getYearOfManufacture() const{
            return yearOfManufacture;
        }
        void setColor(std::string Color){
            color = Color;
        }
        std::string getColor() const{
            return color;
        }
        void setEngineCapacity(int engineC){
            engineCapacity = engineC;
        }
        int getEngineCapacity() const{
            return engineCapacity;
        }

    private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;
};