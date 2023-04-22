#include <BSMPTBenchmark/Tensors/tensors.h>

std::vector<double> ConvertVEVToHiggsBase(const std::vector<double> &inputVev) {
  std::vector<double> result(NHiggs);
  result.at(2) = inputVev.at(0);
  result[4] = inputVev.at(1);
  result[6] = inputVev.at(2);
  result[7] = inputVev.at(3);
  return result;
}

std::vector<std::vector<std::vector<std::vector<double>>>> GetL4Tensor() {
  double L1 = example_point_C2HDM[0];
  double L2 = example_point_C2HDM[1];
  double L3 = example_point_C2HDM[2];
  double L4 = example_point_C2HDM[3];
  double RL5 = example_point_C2HDM[4];
  double IL5 = example_point_C2HDM[5];

  std::vector<std::vector<std::vector<std::vector<double>>>> Curvature_Higgs_L4;
  Curvature_Higgs_L4.resize(NHiggs);
  for (auto &l1 : Curvature_Higgs_L4) {
    l1.resize(NHiggs);
    for (auto &l2 : l1) {
      l2.resize(NHiggs);
      for (auto &l3 : l2) {
        l3.resize(NHiggs);
      }
    }
  }

  Curvature_Higgs_L4[0][0][0][0] = 3 * L1;
  Curvature_Higgs_L4[0][0][1][1] = L1;
  Curvature_Higgs_L4[0][0][2][2] = L3 + L4 + RL5;
  Curvature_Higgs_L4[0][0][2][3] = -IL5;
  Curvature_Higgs_L4[0][0][3][3] = L3 + L4 - RL5;
  Curvature_Higgs_L4[0][0][4][4] = L1;
  Curvature_Higgs_L4[0][0][5][5] = L1;
  Curvature_Higgs_L4[0][0][6][6] = L3;
  Curvature_Higgs_L4[0][0][7][7] = L3;
  Curvature_Higgs_L4[0][1][2][2] = IL5;
  Curvature_Higgs_L4[0][1][2][3] = RL5;
  Curvature_Higgs_L4[0][1][3][3] = -IL5;
  Curvature_Higgs_L4[0][2][4][6] = L4 / 0.2e1 + RL5 / 0.2e1;
  Curvature_Higgs_L4[0][2][4][7] = -IL5 / 0.2e1;
  Curvature_Higgs_L4[0][2][5][6] = IL5 / 0.2e1;
  Curvature_Higgs_L4[0][2][5][7] = L4 / 0.2e1 + RL5 / 0.2e1;
  Curvature_Higgs_L4[0][3][4][6] = -IL5 / 0.2e1;
  Curvature_Higgs_L4[0][3][4][7] = L4 / 0.2e1 - RL5 / 0.2e1;
  Curvature_Higgs_L4[0][3][5][6] = -L4 / 0.2e1 + RL5 / 0.2e1;
  Curvature_Higgs_L4[0][3][5][7] = -IL5 / 0.2e1;
  Curvature_Higgs_L4[1][1][1][1] = 3 * L1;
  Curvature_Higgs_L4[1][1][2][2] = L3 + L4 - RL5;
  Curvature_Higgs_L4[1][1][2][3] = IL5;
  Curvature_Higgs_L4[1][1][3][3] = L3 + L4 + RL5;
  Curvature_Higgs_L4[1][1][4][4] = L1;
  Curvature_Higgs_L4[1][1][5][5] = L1;
  Curvature_Higgs_L4[1][1][6][6] = L3;
  Curvature_Higgs_L4[1][1][7][7] = L3;
  Curvature_Higgs_L4[1][2][4][6] = IL5 / 0.2e1;
  Curvature_Higgs_L4[1][2][4][7] = -L4 / 0.2e1 + RL5 / 0.2e1;
  Curvature_Higgs_L4[1][2][5][6] = L4 / 0.2e1 - RL5 / 0.2e1;
  Curvature_Higgs_L4[1][2][5][7] = IL5 / 0.2e1;
  Curvature_Higgs_L4[1][3][4][6] = L4 / 0.2e1 + RL5 / 0.2e1;
  Curvature_Higgs_L4[1][3][4][7] = -IL5 / 0.2e1;
  Curvature_Higgs_L4[1][3][5][6] = IL5 / 0.2e1;
  Curvature_Higgs_L4[1][3][5][7] = L4 / 0.2e1 + RL5 / 0.2e1;
  Curvature_Higgs_L4[2][2][2][2] = 3 * L2;
  Curvature_Higgs_L4[2][2][3][3] = L2;
  Curvature_Higgs_L4[2][2][4][4] = L3;
  Curvature_Higgs_L4[2][2][5][5] = L3;
  Curvature_Higgs_L4[2][2][6][6] = L2;
  Curvature_Higgs_L4[2][2][7][7] = L2;
  Curvature_Higgs_L4[3][3][3][3] = 3 * L2;
  Curvature_Higgs_L4[3][3][4][4] = L3;
  Curvature_Higgs_L4[3][3][5][5] = L3;
  Curvature_Higgs_L4[3][3][6][6] = L2;
  Curvature_Higgs_L4[3][3][7][7] = L2;
  Curvature_Higgs_L4[4][4][4][4] = 3 * L1;
  Curvature_Higgs_L4[4][4][5][5] = L1;
  Curvature_Higgs_L4[4][4][6][6] = L3 + L4 + RL5;
  Curvature_Higgs_L4[4][4][6][7] = -IL5;
  Curvature_Higgs_L4[4][4][7][7] = L3 + L4 - RL5;
  Curvature_Higgs_L4[4][5][6][6] = IL5;
  Curvature_Higgs_L4[4][5][6][7] = RL5;
  Curvature_Higgs_L4[4][5][7][7] = -IL5;
  Curvature_Higgs_L4[5][5][5][5] = 3 * L1;
  Curvature_Higgs_L4[5][5][6][6] = L3 + L4 - RL5;
  Curvature_Higgs_L4[5][5][6][7] = IL5;
  Curvature_Higgs_L4[5][5][7][7] = L3 + L4 + RL5;
  Curvature_Higgs_L4[6][6][6][6] = 3 * L2;
  Curvature_Higgs_L4[6][6][7][7] = L2;
  Curvature_Higgs_L4[7][7][7][7] = 3 * L2;

  for (std::size_t k1 = 0; k1 < NHiggs; k1++) {
    for (std::size_t k2 = k1; k2 < NHiggs; k2++) {
      for (std::size_t k3 = k2; k3 < NHiggs; k3++) {
        for (std::size_t k4 = k3; k4 < NHiggs; k4++) {
          Curvature_Higgs_L4[k2][k3][k4][k1] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k3][k4][k1][k2] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k4][k1][k2][k3] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k2][k1][k3][k4] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k4][k2][k1][k3] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k3][k4][k2][k1] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k1][k3][k4][k2] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k3][k2][k1][k4] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k4][k3][k2][k1] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k1][k4][k3][k2] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k2][k1][k4][k3] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k4][k2][k3][k1] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k1][k4][k2][k3] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k3][k1][k4][k2] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k2][k3][k1][k4] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k1][k3][k2][k4] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k4][k1][k3][k2] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k2][k4][k1][k3] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k3][k2][k4][k1] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k1][k2][k4][k3] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k3][k1][k2][k4] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k4][k3][k1][k2] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
          Curvature_Higgs_L4[k2][k4][k3][k1] =
              Curvature_Higgs_L4[k1][k2][k3][k4];
        }
      }
    }
  }

  return Curvature_Higgs_L4;
}

Eigen::MatrixXd GetSimplifiedMatrix(const std::vector<double> &vev) {

  double lambda1 = example_point_C2HDM[0];
  double lambda2 = example_point_C2HDM[1];
  double lambda3 = example_point_C2HDM[2];
  double lambda4 = example_point_C2HDM[3];
  double Relambda5 = example_point_C2HDM[4];
  double Imlambda5 = example_point_C2HDM[5];

  double wCB = vev.at(2);
  double wCP = vev.at(7);
  double w1 = vev.at(4);
  double w2 = vev.at(6);

  Eigen::MatrixXd MassHiggs = Eigen::MatrixXd::Zero(NHiggs, NHiggs);
  MassHiggs(0, 0) = lambda1 * std::pow(w1, 2) + lambda3 * std::pow(w2, 2) +
                    lambda3 * std::pow(wCP, 2) +
                    std::pow(wCB, 2) * (Relambda5 + lambda3 + lambda4);
  MassHiggs(0, 1) = Imlambda5 * std::pow(wCB, 2);
  MassHiggs(0, 2) =
      -Imlambda5 * w1 * wCP +
      2 * w1 * w2 * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(0, 3) =
      -Imlambda5 * w1 * w2 +
      2 * w1 * wCP * (-1.0 / 2.0 * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(0, 4) =
      -Imlambda5 * wCB * wCP +
      2 * w2 * wCB * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(0, 5) =
      Imlambda5 * w2 * wCB +
      2 * wCB * wCP * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(0, 6) =
      2 * w1 * wCB * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(0, 7) = -Imlambda5 * w1 * wCB;
  MassHiggs(1, 0) = Imlambda5 * std::pow(wCB, 2);
  MassHiggs(1, 1) = lambda1 * std::pow(w1, 2) + lambda3 * std::pow(w2, 2) +
                    lambda3 * std::pow(wCP, 2) +
                    std::pow(wCB, 2) * (-Relambda5 + lambda3 + lambda4);
  MassHiggs(1, 2) =
      Imlambda5 * w1 * w2 +
      2 * w1 * wCP * ((1.0 / 2.0) * Relambda5 - 1.0 / 2.0 * lambda4);
  MassHiggs(1, 3) =
      -Imlambda5 * w1 * wCP +
      2 * w1 * w2 * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(1, 4) =
      Imlambda5 * w2 * wCB +
      2 * wCB * wCP * ((1.0 / 2.0) * Relambda5 - 1.0 / 2.0 * lambda4);
  MassHiggs(1, 5) =
      Imlambda5 * wCB * wCP +
      2 * w2 * wCB * (-1.0 / 2.0 * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(1, 6) = Imlambda5 * w1 * wCB;
  MassHiggs(1, 7) =
      2 * w1 * wCB * ((1.0 / 2.0) * Relambda5 - 1.0 / 2.0 * lambda4);
  MassHiggs(2, 0) =
      -Imlambda5 * w1 * wCP +
      2 * w1 * w2 * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(2, 1) =
      Imlambda5 * w1 * w2 +
      2 * w1 * wCP * ((1.0 / 2.0) * Relambda5 - 1.0 / 2.0 * lambda4);
  MassHiggs(2, 2) = lambda2 * std::pow(w2, 2) + 3 * lambda2 * std::pow(wCB, 2) +
                    lambda2 * std::pow(wCP, 2) + lambda3 * std::pow(w1, 2);
  MassHiggs(2, 4) = 2 * lambda3 * w1 * wCB;
  MassHiggs(2, 6) = 2 * lambda2 * w2 * wCB;
  MassHiggs(2, 7) = 2 * lambda2 * wCB * wCP;
  MassHiggs(3, 0) =
      -Imlambda5 * w1 * w2 +
      2 * w1 * wCP * (-1.0 / 2.0 * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(3, 1) =
      -Imlambda5 * w1 * wCP +
      2 * w1 * w2 * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(3, 3) = lambda2 * std::pow(w2, 2) + lambda2 * std::pow(wCB, 2) +
                    lambda2 * std::pow(wCP, 2) + lambda3 * std::pow(w1, 2);
  MassHiggs(4, 0) =
      -Imlambda5 * wCB * wCP +
      2 * w2 * wCB * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(4, 1) =
      Imlambda5 * w2 * wCB +
      2 * wCB * wCP * ((1.0 / 2.0) * Relambda5 - 1.0 / 2.0 * lambda4);
  MassHiggs(4, 2) = 2 * lambda3 * w1 * wCB;
  MassHiggs(4, 4) = -2 * Imlambda5 * w2 * wCP + 3 * lambda1 * std::pow(w1, 2) +
                    lambda3 * std::pow(wCB, 2) +
                    std::pow(w2, 2) * (Relambda5 + lambda3 + lambda4) +
                    std::pow(wCP, 2) * (-Relambda5 + lambda3 + lambda4);
  MassHiggs(4, 5) = Imlambda5 * std::pow(w2, 2) - Imlambda5 * std::pow(wCP, 2) +
                    2 * Relambda5 * w2 * wCP;
  MassHiggs(4, 6) =
      -2 * Imlambda5 * w1 * wCP + 2 * w1 * w2 * (Relambda5 + lambda3 + lambda4);
  MassHiggs(4, 7) = -2 * Imlambda5 * w1 * w2 +
                    2 * w1 * wCP * (-Relambda5 + lambda3 + lambda4);
  MassHiggs(5, 0) =
      Imlambda5 * w2 * wCB +
      2 * wCB * wCP * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(5, 1) =
      Imlambda5 * wCB * wCP +
      2 * w2 * wCB * (-1.0 / 2.0 * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(5, 4) = Imlambda5 * std::pow(w2, 2) - Imlambda5 * std::pow(wCP, 2) +
                    2 * Relambda5 * w2 * wCP;
  MassHiggs(5, 5) = 2 * Imlambda5 * w2 * wCP + lambda1 * std::pow(w1, 2) +
                    lambda3 * std::pow(wCB, 2) +
                    std::pow(w2, 2) * (-Relambda5 + lambda3 + lambda4) +
                    std::pow(wCP, 2) * (Relambda5 + lambda3 + lambda4);
  MassHiggs(5, 6) = 2 * Imlambda5 * w1 * w2 + 2 * Relambda5 * w1 * wCP;
  MassHiggs(5, 7) = -2 * Imlambda5 * w1 * wCP + 2 * Relambda5 * w1 * w2;
  MassHiggs(6, 0) =
      2 * w1 * wCB * ((1.0 / 2.0) * Relambda5 + (1.0 / 2.0) * lambda4);
  MassHiggs(6, 1) = Imlambda5 * w1 * wCB;
  MassHiggs(6, 2) = 2 * lambda2 * w2 * wCB;
  MassHiggs(6, 4) =
      -2 * Imlambda5 * w1 * wCP + 2 * w1 * w2 * (Relambda5 + lambda3 + lambda4);
  MassHiggs(6, 5) = 2 * Imlambda5 * w1 * w2 + 2 * Relambda5 * w1 * wCP;
  MassHiggs(6, 6) = 3 * lambda2 * std::pow(w2, 2) + lambda2 * std::pow(wCB, 2) +
                    lambda2 * std::pow(wCP, 2) +
                    std::pow(w1, 2) * (Relambda5 + lambda3 + lambda4);
  MassHiggs(6, 7) = -Imlambda5 * std::pow(w1, 2) + 2 * lambda2 * w2 * wCP;
  MassHiggs(7, 0) = -Imlambda5 * w1 * wCB;
  MassHiggs(7, 1) =
      2 * w1 * wCB * ((1.0 / 2.0) * Relambda5 - 1.0 / 2.0 * lambda4);
  MassHiggs(7, 2) = 2 * lambda2 * wCB * wCP;
  MassHiggs(7, 4) = -2 * Imlambda5 * w1 * w2 +
                    2 * w1 * wCP * (-Relambda5 + lambda3 + lambda4);
  MassHiggs(7, 5) = -2 * Imlambda5 * w1 * wCP + 2 * Relambda5 * w1 * w2;
  MassHiggs(7, 6) = -Imlambda5 * std::pow(w1, 2) + 2 * lambda2 * w2 * wCP;
  MassHiggs(7, 7) = lambda2 * std::pow(w2, 2) + lambda2 * std::pow(wCB, 2) +
                    3 * lambda2 * std::pow(wCP, 2) +
                    std::pow(w1, 2) * (-Relambda5 + lambda3 + lambda4);

  return MassHiggs;
}

std::vector<std::vector<Eigen::MatrixXd>> GetMixedMatrixTensor() {
  std::vector<std::vector<Eigen::MatrixXd>> result;
  auto L4_orig = GetL4Tensor();
  result.resize(NHiggs);
  for (std::size_t i{0}; i < NHiggs; ++i) {
    result[i].resize(NHiggs);
    for (std::size_t j{0}; j < NHiggs; ++j) {
      auto &mat = result[i][j];
      mat = Eigen::MatrixXd::Zero(NHiggs, NHiggs);
      for (std::size_t k{0}; k < NHiggs; ++k) {
        for (std::size_t l{0}; l < NHiggs; ++l) {
          mat(k, l) = L4_orig[i][j][k][l];
        }
      }
    }
  }
  return result;
}

Eigen::MatrixXd CalculateExplicitly(
    const std::vector<std::vector<std::vector<std::vector<double>>>> &L4,
    const std::vector<double> &vev_base) {
  Eigen::MatrixXd MassHiggs = Eigen::MatrixXd::Zero(NHiggs, NHiggs);
  for (std::size_t i{0}; i < NHiggs; ++i) {
    for (std::size_t j{0}; j < NHiggs; ++j) {
      for (std::size_t k{0}; k < NHiggs; ++k) {
        for (std::size_t l{0}; l < NHiggs; ++l) {
          MassHiggs(i, j) += L4[i][j][k][l] * vev_base[k] * vev_base[l];
        }
      }
    }
  }
  return MassHiggs;
}

Eigen::MatrixXd
CalculateWithTrace(const std::vector<std::vector<Eigen::MatrixXd>> &MixedTensor,
                   const std::vector<double> &vev) {
  Eigen::MatrixXd OmegaMat = Eigen::MatrixXd::Zero(NHiggs, NHiggs);
  for (std::size_t i{0}; i < NHiggs; ++i) {
    for (std::size_t j{0}; j < NHiggs; ++j) {
      OmegaMat(i, j) = vev.at(i) * vev.at(j);
    }
  }

  Eigen::MatrixXd MassHiggs = Eigen::MatrixXd::Zero(NHiggs, NHiggs);
  for (std::size_t i{0}; i < NHiggs; ++i) {
    for (std::size_t j{0}; j < NHiggs; ++j) {
      MassHiggs(i, j) = (MixedTensor[i][j] * OmegaMat).diagonal().sum();
    }
  }
  return MassHiggs;
}
