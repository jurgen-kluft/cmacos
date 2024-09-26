//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//
// Metal/Metal.hpp
//
// Copyright 2020-2024 Apple Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#pragma once

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "cmacos/Metal/MTLAccelerationStructure.hpp"
#include "cmacos/Metal/MTLAccelerationStructureCommandEncoder.hpp"
#include "cmacos/Metal/MTLAccelerationStructureTypes.hpp"
#include "cmacos/Metal/MTLAllocation.hpp"
#include "cmacos/Metal/MTLArgument.hpp"
#include "cmacos/Metal/MTLArgumentEncoder.hpp"
#include "cmacos/Metal/MTLBinaryArchive.hpp"
#include "cmacos/Metal/MTLBlitCommandEncoder.hpp"
#include "cmacos/Metal/MTLBlitPass.hpp"
#include "cmacos/Metal/MTLBuffer.hpp"
#include "cmacos/Metal/MTLCaptureManager.hpp"
#include "cmacos/Metal/MTLCaptureScope.hpp"
#include "cmacos/Metal/MTLCommandBuffer.hpp"
#include "cmacos/Metal/MTLCommandEncoder.hpp"
#include "cmacos/Metal/MTLCommandQueue.hpp"
#include "cmacos/Metal/MTLComputeCommandEncoder.hpp"
#include "cmacos/Metal/MTLComputePass.hpp"
#include "cmacos/Metal/MTLComputePipeline.hpp"
#include "cmacos/Metal/MTLCounters.hpp"
#include "cmacos/Metal/MTLDefines.hpp"
#include "cmacos/Metal/MTLDepthStencil.hpp"
#include "cmacos/Metal/MTLDevice.hpp"
#include "cmacos/Metal/MTLDrawable.hpp"
#include "cmacos/Metal/MTLDynamicLibrary.hpp"
#include "cmacos/Metal/MTLEvent.hpp"
#include "cmacos/Metal/MTLFence.hpp"
#include "cmacos/Metal/MTLFunctionConstantValues.hpp"
#include "cmacos/Metal/MTLFunctionDescriptor.hpp"
#include "cmacos/Metal/MTLFunctionHandle.hpp"
#include "cmacos/Metal/MTLFunctionLog.hpp"
#include "cmacos/Metal/MTLFunctionStitching.hpp"
#include "cmacos/Metal/MTLHeaderBridge.hpp"
#include "cmacos/Metal/MTLHeap.hpp"
#include "cmacos/Metal/MTLIndirectCommandBuffer.hpp"
#include "cmacos/Metal/MTLIndirectCommandEncoder.hpp"
#include "cmacos/Metal/MTLIntersectionFunctionTable.hpp"
#include "cmacos/Metal/MTLIOCommandBuffer.hpp"
#include "cmacos/Metal/MTLIOCommandQueue.hpp"
#include "cmacos/Metal/MTLIOCompressor.hpp"
#include "cmacos/Metal/MTLLibrary.hpp"
#include "cmacos/Metal/MTLLinkedFunctions.hpp"
#include "cmacos/Metal/MTLLogState.hpp"
#include "cmacos/Metal/MTLParallelRenderCommandEncoder.hpp"
#include "cmacos/Metal/MTLPipeline.hpp"
#include "cmacos/Metal/MTLPixelFormat.hpp"
#include "cmacos/Metal/MTLPrivate.hpp"
#include "cmacos/Metal/MTLRasterizationRate.hpp"
#include "cmacos/Metal/MTLRenderCommandEncoder.hpp"
#include "cmacos/Metal/MTLRenderPass.hpp"
#include "cmacos/Metal/MTLRenderPipeline.hpp"
#include "cmacos/Metal/MTLResidencySet.hpp"
#include "cmacos/Metal/MTLResource.hpp"
#include "cmacos/Metal/MTLResourceStateCommandEncoder.hpp"
#include "cmacos/Metal/MTLResourceStatePass.hpp"
#include "cmacos/Metal/MTLSampler.hpp"
#include "cmacos/Metal/MTLStageInputOutputDescriptor.hpp"
#include "cmacos/Metal/MTLTexture.hpp"
#include "cmacos/Metal/MTLTypes.hpp"
#include "cmacos/Metal/MTLVertexDescriptor.hpp"
#include "cmacos/Metal/MTLVisibleFunctionTable.hpp"
#include "cmacos/Metal/MTLVersion.hpp"

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
