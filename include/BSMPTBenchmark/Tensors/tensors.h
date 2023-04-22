#pragma once

#include <eigen3/Eigen/Dense>
#include <vector>

const std::vector<double> example_point_C2HDM{/* lambda_1 = */ 3.29771,
                                              /* lambda_2 = */ 0.274365,
                                              /* lambda_3 = */ 4.71019,
                                              /* lambda_4 = */ -2.23056,
                                              /* Re(lambda_5) = */ -2.43487,
                                              /* Im(lambda_5) = */ 0.124948,
                                              /* Re(m_{12}^2) = */ 2706.86,
                                              /* tan(beta) = */ 4.64487,
                                              /* Yukawa Type = */ 1};

const std::size_t NHiggs = 8;

std::vector<double> ConvertVEVToHiggsBase(const std::vector<double> &inputVev);

std::vector<std::vector<std::vector<std::vector<double>>>> GetL4Tensor();

Eigen::MatrixXd GetSimplifiedMatrix(const std::vector<double> &vev);

std::vector<std::vector<Eigen::MatrixXd>> GetMixedMatrixTensor();

Eigen::MatrixXd CalculateExplicitly(
    const std::vector<std::vector<std::vector<std::vector<double>>>> &L4,
    const std::vector<double> &vev);

Eigen::MatrixXd
CalculateWithTrace(const std::vector<std::vector<Eigen::MatrixXd>> &MixedTensor,
                   const std::vector<double> &vev);
