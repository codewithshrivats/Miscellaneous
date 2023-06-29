// C++ Program to implement
// the above approach
 
#include <stdio.h>
 // Function to calculate Kinetic Energy
float kineticEnergy(float M, float V)
{
    // Stores the Kinetic Energy
    float KineticEnergy;
 
    KineticEnergy = 0.5 * M * V * V;
 
    return KineticEnergy;
}
 
// Function to calculate Potential Energy
float potentialEnergy(float M, float H)
{
    // Stores the Potential Energy
    float PotentialEnergy;
 
    PotentialEnergy = M * 9.8 * H;
 
    return PotentialEnergy;
}
 
// Driver Code
int main()
{
    float M = 5.5, H = 23.5, V = 10.5;

    printf("Kinetic Energy =",kineticEnergy(M, V));
    printf("Potential Energy = ",potentialEnergy(M, H));
    return 0;
}