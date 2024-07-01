

#include <C:\Users\darud\Documents\V2-Robot-Arm\software\microcontroller\robot_code_v1\FK_Solver.h>
#include <iostream>
/*
struct mrow
{
    float position[3];
} fk_tester;
*/
float v1_dh[7][4] = {
    {.7238, 1, 0, 217.75},
    {1.5213, 2, 255.5, 0},
    {-1, -1, 0, 97.75},
    {0, 1, 0, 123.8},
    {1, 1, 0, -70},
    {0, 0, 0, 0},
    {0, 0, 0, 0}};

int main()
{
    std::cout << "start" << std::endl;
    float testaangles[7] = {0, 0.1, 0.23, 0.3, 0.32, 0, 0};
    FK_Solver fk_tester(v1_dh);


    fk_tester.calculate_FK(testaangles);

    //std::cout << fk_tester.position[0] << ", " << fk_tester.position[1] << ", " << fk_tester.position[2] << std::endl;

    fk_tester.printmatrix(fk_tester.end_effector_Jacobian);

    std::cout<<"end"<<std::endl;
    return 1;
}
