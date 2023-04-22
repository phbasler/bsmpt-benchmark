#include <BSMPTBenchmark/Tensors/tensors.h>
#include <gtest/gtest.h>

TEST(CompareTensors, compare) {
  const std::vector<double> vev{5, 30, 20, -1};
  const auto vev_base = ConvertVEVToHiggsBase(vev);
  const auto L4 = GetL4Tensor();
  const auto MixedTensor = GetMixedMatrixTensor();

  auto TWrapTensor = GetL4InTWrap();
  const auto vev_tens = GetVevInTWrap(vev_base);

  const auto calculatedExplicity = CalculateExplicitly(L4, vev_base);
  const auto calculatedSimplified = GetSimplifiedMatrix(vev_base);
  const auto calculatedWithTrace = CalculateWithTrace(MixedTensor, vev_base);
  const Eigen::MatrixXd calculatedWithTWrap =
      CalculateWithTWrap(TWrapTensor, vev_tens);

  ASSERT_PRED2(
      [](const Eigen::MatrixXd &lhs, const Eigen::MatrixXd &rhs) {
        return lhs.isApprox(rhs, 1e-4);
      },
      calculatedExplicity, calculatedSimplified);

  ASSERT_PRED2(
      [](const Eigen::MatrixXd &lhs, const Eigen::MatrixXd &rhs) {
        return lhs.isApprox(rhs, 1e-4);
      },
      calculatedExplicity, calculatedWithTrace);

  ASSERT_PRED2(
      [](const Eigen::MatrixXd &lhs, const Eigen::MatrixXd &rhs) {
        return lhs.isApprox(rhs, 1e-4);
      },
      calculatedExplicity, calculatedWithTWrap);
}
