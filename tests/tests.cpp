#include <BSMPTBenchmark/Tensors/tensors.h>
#include <gtest/gtest.h>

TEST(CompareTensors, compare) {
  const std::vector<double> vev{5, 30, 20, -1};
  const auto vev_base = ConvertVEVToHiggsBase(vev);
  const auto L4 = GetL4Tensor();
  const auto MixedTensor = GetMixedMatrixTensor();

  const auto calculatedExplicity = CalculateExplicitly(L4, vev_base);
  const auto calculatedSimplified = GetSimplifiedMatrix(vev_base);
  const auto calculatedWithTrace = CalculateWithTrace(MixedTensor, vev_base);

  ASSERT_PRED2(
      [](const Eigen::MatrixXd &lhs, const Eigen::MatrixXd &rhs) {
        return lhs.isApprox(rhs, 1e-4);
      },
      calculatedSimplified, calculatedSimplified);

  ASSERT_PRED2(
      [](const Eigen::MatrixXd &lhs, const Eigen::MatrixXd &rhs) {
        return lhs.isApprox(rhs, 1e-4);
      },
      calculatedSimplified, calculatedWithTrace);
}
