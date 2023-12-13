#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include  "CalculateG.cpp"   

using namespace std;

int main(){

class CalculateG {
public:
    // Declare variables with appropriate data types
    double gravity = -9.81; // Earth's gravity in m/s^2
    double fallingTime = 30;
    double initialVelocity = 0.0;
    double finalVelocity;
    double initialPosition = 0.0;
    double finalPosition;

    // Method to compute position and velocity
    void calculatePositionAndVelocity() {
        // Calculate position using the formula: x(t) = 0.5 * a * t^2 + v_i * t + x_i
        finalPosition = 0.5 * gravity * fallingTime * fallingTime + initialVelocity * fallingTime + initialPosition;

        // Calculate velocity using the formula: v(t) = a * t + v_i
        finalVelocity = gravity * fallingTime + initialVelocity;

        // Print out the result for position
        std::cout << "The object's position after " << fallingTime << " seconds is " << finalPosition << " m." << std::endl;

        // Print out the result for velocity
        std::cout << "The object's velocity after " << fallingTime << " seconds is " << finalVelocity << " m/s." << std::endl;
    }
};

int main() {
    // Create an instance of CalculateG
    CalculateG calculator;

    // Call the method to compute position and velocity
    calculator.calculatePositionAndVelocity();

     // Main method
    public static void main(String[] args) {
        // Create an instance of CalculateG
        CalculateG calculator = new CalculateG();

        // Call the method to compute position and velocity
        calculator.calculatePositionAndVelocity();

        // Call the method for multiplication
        double multiplicationResult = calculator.multi(2.0, 3.0);
        calculator.outline(multiplicationResult);

        // Call the method for powering to square
        double squareResult = calculator.square(4.0);
        calculator.outline(squareResult);

        // Call the method for summation
        double sumResult = calculator.sum(5.0, 7.0);
        calculator.outline(sumResult);
    }

    return 0;
}}