

#include <C:\Users\darud\Documents\V2-Robot-Arm\software\microcontroller\robot_code_v1\robot_code_v1\FK_Solver.h>
#include <iostream>
#include <random>
#include <ctime>

/*
struct mrow
{
    float position[3];
} fk_tester;
*/

const float pi = 3.14159265359;

float v1_dh[7][4] = {
    /*
    {0, 1, 0, 217.75},
    {0, 2, 255.5, 0},
    {0, -1, 0, 97.75},
    {0, 1, 0, 123.8},
    {1, 1, 0, -70},
    {0, 0, 0, 0},
    {0, 0, 0, 0}};*/

    {pi, pi, 0, 217.75},
    {0, 2 * pi, 255.5, 0},
    {-pi, -pi, 0, 97.75},
    {0, pi, 0, 123.8},
    {pi, pi, 0, -70},
    {0, 0, 5, 22.9},
    {0, 0, 0, 0}};

float internet_dh[7][4] = {
    {0, 1, 0, 1},
    {0, 0, 1, 0},
    {0, 0, 1, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 2},
    {0, 0, 0, 0}};

float rad_to_deg(float rad)
{
    return ((180 * rad) / pi);
}

float deg_to_rad(float deg)
{
    return ((deg * pi) / 180);
}

int main()
{
    std::cout << "start" << std::endl;

     float testaangles[7] = {0, 0, 0, 0, 0, 0, 0};
    //-142.204, -3.60011, 91.8027, 16.2005, 66.602, -174.605, 138.604,

    // std::srand(std::time(NULL));
    /*
    std::cout << "joint angles (deg): ";
    float testaangles[7];
    for (int i = 0; i < 7; i++)
    {
        testaangles[i] = deg_to_rad((float)((rand() % 360) - 180));
        std::cout << rad_to_deg(testaangles[i]) << ", ";
    }
    testaangles[6] = 0;*/

    std::cout << std::endl;

    FK_Solver fk_tester(internet_dh);

    fk_tester.calculate_FK(testaangles);

    //std::cout << "x: " << fk_tester.position[0] << ", y: " << fk_tester.position[1] << ", z: " << fk_tester.position[2] << std::endl;
    //std::cout << "R: " << rad_to_deg(fk_tester.RPY_rotation[0]) << ", P: " << rad_to_deg(fk_tester.RPY_rotation[1]) << ", Y: " << rad_to_deg(fk_tester.RPY_rotation[2]) << std::endl;

    fk_tester.printmatrix(fk_tester.end_effector_transformation);

    std::cout << "end" << std::endl;
    return 1;
}
