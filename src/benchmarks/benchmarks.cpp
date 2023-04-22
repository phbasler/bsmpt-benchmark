#include <BSMPTBenchmark/Tensors/tensors.h>
#include <benchmark/benchmark.h>

static void BM_TensorMultiplication(benchmark::State &state) {
  const auto L4 = GetL4Tensor();
  const std::vector<double> vev{5, 30, 20, -1};
  const auto vev_base = ConvertVEVToHiggsBase(vev);

  for (auto _ : state) {
    auto MassMatrix = CalculateExplicitly(L4, vev_base);
  }
}

static void BM_Simplified(benchmark::State &state) {
  const auto L4 = GetL4Tensor();
  const std::vector<double> vev{5, 30, 20, -1};
  const auto vev_base = ConvertVEVToHiggsBase(vev);

  for (auto _ : state) {
    Eigen::MatrixXd MassHiggs = GetSimplifiedMatrix(vev_base);
  }
}

static void BM_MixedMode(benchmark::State &state) {
  const auto MixedTensor = GetMixedMatrixTensor();
  const std::vector<double> vev{5, 30, 20, -1};
  const auto vev_base = ConvertVEVToHiggsBase(vev);

  for (auto _ : state) {
    auto MassMatrix = CalculateWithTrace(MixedTensor, vev_base);
  }
}

BENCHMARK(BM_TensorMultiplication);
BENCHMARK(BM_Simplified);
BENCHMARK(BM_MixedMode);
BENCHMARK_MAIN();
