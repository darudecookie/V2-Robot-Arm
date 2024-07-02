#ifndef FK_Solver_h
#define FK_Solver_h

#include <stdint.h>

class FK_Solver
{
public:
    float position[3] = {0, 0, 0};
    float RPY_rotation[3];

    float base_offsets[3] = {0, 0, 0};

    FK_Solver(float all_DH_paramaters[7][4]);

    void calculate_FK(float joint_angles[7]);

    bool check_angles_against_bounds(float joint_angles[7], float workspace_bounds[3][2]);

    // private:
    float _m_joint_DH_paramaters[4][4];
    float end_effector_Jacobian[4][4];
    float _m_joint_DH_params[7][4];

    void populate_Jacobian_from_DH(float DH_paramaters[4], float output_Jacobian[4][4]);
    void cross_multiply(float output_matrix[4][4], float matrix1[4][4], float matrix2[4][4]);

    void printmatrix(float matrix[4][4]);
    void printdh(float dh[7][4]);
};

#endif