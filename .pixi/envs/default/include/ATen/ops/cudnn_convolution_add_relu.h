#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/cudnn_convolution_add_relu_ops.h>

namespace at {


// aten::cudnn_convolution_add_relu(Tensor self, Tensor weight, Tensor z, Scalar? alpha, Tensor? bias, int[] stride, int[] padding, int[] dilation, int groups) -> Tensor
inline at::Tensor cudnn_convolution_add_relu(const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
    return at::_ops::cudnn_convolution_add_relu::call(self, weight, z, alpha, bias, stride, padding, dilation, groups);
}

// aten::cudnn_convolution_add_relu.out(Tensor self, Tensor weight, Tensor z, Scalar? alpha, Tensor? bias, int[] stride, int[] padding, int[] dilation, int groups, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cudnn_convolution_add_relu_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
    return at::_ops::cudnn_convolution_add_relu_out::call(self, weight, z, alpha, bias, stride, padding, dilation, groups, out);
}
// aten::cudnn_convolution_add_relu.out(Tensor self, Tensor weight, Tensor z, Scalar? alpha, Tensor? bias, int[] stride, int[] padding, int[] dilation, int groups, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cudnn_convolution_add_relu_outf(const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups, at::Tensor & out) {
    return at::_ops::cudnn_convolution_add_relu_out::call(self, weight, z, alpha, bias, stride, padding, dilation, groups, out);
}

}
