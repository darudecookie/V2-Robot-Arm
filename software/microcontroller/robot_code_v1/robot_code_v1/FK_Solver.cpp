#include "FK_Solver.h"

#include <math.h>
#include <stdint.h>
#include <cstring>
#include <algorithm>
#include <iterator>

#include <iostream>

#define theta 0
#define alpha 1
#define r 2
#define d 3

FK_Solver::FK_Solver(float all_DH_paramaters[7][4])
{

    memcpy(FK_Solver::_m_joint_DH_paramaters, all_DH_paramaters, sizeof(FK_Solver::_m_joint_DH_paramaters));
}

void FK_Solver::populate_Jacobian_from_DH(float DH_paramaters[4], float output_Jacobian[4][4])
{

    // std::cout << "populate" << std::endl;

    // theta, alpha, r, d
    float Jacobian[4][4] = {

        {std::cos(DH_paramaters[theta]), -std::sin(DH_paramaters[theta]) * std::cos(DH_paramaters[alpha]), std::sin(DH_paramaters[theta]) * std::sin(DH_paramaters[alpha]), DH_paramaters[r] * std::cos(DH_paramaters[theta])},
        {std::sin(DH_paramaters[theta]), std::cos(DH_paramaters[theta]) * std::cos(DH_paramaters[alpha]), -std::cos(DH_paramaters[theta]) * std::sin(DH_paramaters[alpha]), DH_paramaters[r] * std::sin(DH_paramaters[theta])},
        {0, std::sin(DH_paramaters[alpha]), std::cos(DH_paramaters[alpha]), DH_paramaters[d]},
        {0, 0, 0, 1}};
    /*
            {std::cos(DH_paramaters[0]), -std::sin(DH_paramaters[0]) * std::cos(DH_paramaters[1]), std::sin(DH_paramaters[0]) * std::sin(DH_paramaters[1]), DH_paramaters[2] * std::cos(DH_paramaters[0])},
            {std::sin(DH_paramaters[0]), std::cos(DH_paramaters[0]) * std::cos(DH_paramaters[1]), -std::cos(DH_paramaters[0]) * std::sin(DH_paramaters[1])},
            {0, std::sin(DH_paramaters[1]), std::cos(DH_paramaters[1]), DH_paramaters[3]},
            {0, 0, 0, 1},
};*/

    // FK_Solver::printmatrix(Jacobian);
    memcpy(output_Jacobian, Jacobian, sizeof(Jacobian));
}

void FK_Solver::calculate_FK(float joint_angles[7])
{
    // std::cout << "calc fk" << std::endl;

    memset(FK_Solver::end_effector_Jacobian, 0, 0.75 * sizeof(FK_Solver::end_effector_Jacobian)); // set end effector jacobian to 0, this will be the final output of the ik calc
    FK_Solver::end_effector_Jacobian[3][0] = 0;
    FK_Solver::end_effector_Jacobian[3][1] = 0;
    FK_Solver::end_effector_Jacobian[3][2] = 0;
    FK_Solver::end_effector_Jacobian[3][3] = 1;

    float joint_Jacobians[7][4][4];

    // modify original dh with new joint angles, create new jacobians for updated dh
    for (uint8_t i = 0; i < 7; i++)
    {

        FK_Solver::_m_joint_DH_paramaters[i][0] += joint_angles[i];
        FK_Solver::populate_Jacobian_from_DH(_m_joint_DH_paramaters[i], joint_Jacobians[i]); // populate jacobian and set it
        // FK_Solver::printmatrix(joint_Jacobians[i]);
    }

    for (uint8_t i = 0; i < 7; i++)
    {
        cross_multiply(FK_Solver::end_effector_Jacobian, joint_Jacobians[i], FK_Solver::end_effector_Jacobian);
    }

    for (uint8_t i = 0; i < 3; i++)
    {
        FK_Solver::position[i] = FK_Solver::end_effector_Jacobian[i][3];
        // std::cout << FK_Solver::end_effector_Jacobian[i][3] << " inside test " << std::endl;
    }

    // reset the DH to their original value so the solver only works with absolute values
    for (uint8_t i = 0; i < 7; i++)
    {
        FK_Solver::_m_joint_DH_paramaters[i][0] -= joint_angles[i];
    }
}

bool FK_Solver::check_angles_against_bounds(float joint_angles[7], float workspace_bounds[3][2])
{

    std::cout << "check" << std::endl;

    FK_Solver::calculate_FK(joint_angles);

    for (uint8_t i = 0; i < 3;)
    {
        if (workspace_bounds[i][0] > FK_Solver::position[i] || workspace_bounds[i][1] < FK_Solver::position[i])
        {
            return false;
        }
    }
    return true;
}

void FK_Solver::cross_multiply(float output_matrix[4][4], float matrix1[4][4], float matrix2[4][4])
{

    // std::cout << "cross" << std::endl;

    float new_Jacobian[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                // std::cout << i << ", " << j << ", " << k << std::endl;

                new_Jacobian[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    memcpy(output_matrix, new_Jacobian, sizeof(new_Jacobian));

    // FK_Solver::printmatrix(matrix1);
    // FK_Solver::printmatrix(output_matrix);
}

void FK_Solver::printmatrix(float matrix[4][4])
{

    for (int i = 0; i < 4; i++)
    {
        for (int meow = 0; meow < 4; meow++)
        {
            std::cout << matrix[i][meow] << ", ";
        }
        (i != 3) ? std::cout << "\n" : std::cout << " - print" << std::endl;
    }
    std::cout << "\n";
}

void FK_Solver::printdh(float dh[7][4])
{
    std::cout << "printdh" << std::endl;

    for (int i = 0; i < 7; i++)
    {
        for (int meow = 0; meow < 4; meow++)
        {
            std::cout << dh[i][meow] << ", ";
        }
        std::cout << "\n";
    }
}
