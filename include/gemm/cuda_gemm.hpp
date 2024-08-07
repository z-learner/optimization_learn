#pragma once

#include <vector>

namespace gemm {

enum class CudaGemmAlgorithm {
    kNative,
    kShared,
    kSharedRigster,
};

template <typename T>
void cuda_gemm(const std::vector<std::vector<T>>& A, const std::vector<std::vector<T>>& B, std::vector<std::vector<T>>& C,
               CudaGemmAlgorithm algorithm);

template <typename T>
void cuda_gemm_cu(const T* A, const T* B, T* C, int M, int K, int N, CudaGemmAlgorithm algorithm);

}  // namespace gemm