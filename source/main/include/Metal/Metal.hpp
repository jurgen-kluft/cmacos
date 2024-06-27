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

#include "Metal/MTLAccelerationStructure.hpp"
#include "Metal/MTLAccelerationStructureCommandEncoder.hpp"
#include "Metal/MTLAccelerationStructureTypes.hpp"
#include "Metal/MTLAllocation.hpp"
#include "Metal/MTLArgument.hpp"
#include "Metal/MTLArgumentEncoder.hpp"
#include "Metal/MTLBinaryArchive.hpp"
#include "Metal/MTLBlitCommandEncoder.hpp"
#include "Metal/MTLBlitPass.hpp"
#include "Metal/MTLBuffer.hpp"
#include "Metal/MTLCaptureManager.hpp"
#include "Metal/MTLCaptureScope.hpp"
#include "Metal/MTLCommandBuffer.hpp"
#include "Metal/MTLCommandEncoder.hpp"
#include "Metal/MTLCommandQueue.hpp"
#include "Metal/MTLComputeCommandEncoder.hpp"
#include "Metal/MTLComputePass.hpp"
#include "Metal/MTLComputePipeline.hpp"
#include "Metal/MTLCounters.hpp"
#include "Metal/MTLDefines.hpp"
#include "Metal/MTLDepthStencil.hpp"
#include "Metal/MTLDevice.hpp"
#include "Metal/MTLDrawable.hpp"
#include "Metal/MTLDynamicLibrary.hpp"
#include "Metal/MTLEvent.hpp"
#include "Metal/MTLFence.hpp"
#include "Metal/MTLFunctionConstantValues.hpp"
#include "Metal/MTLFunctionDescriptor.hpp"
#include "Metal/MTLFunctionHandle.hpp"
#include "Metal/MTLFunctionLog.hpp"
#include "Metal/MTLFunctionStitching.hpp"
#include "Metal/MTLHeaderBridge.hpp"
#include "Metal/MTLHeap.hpp"
#include "Metal/MTLIndirectCommandBuffer.hpp"
#include "Metal/MTLIndirectCommandEncoder.hpp"
#include "Metal/MTLIntersectionFunctionTable.hpp"
#include "Metal/MTLIOCommandBuffer.hpp"
#include "Metal/MTLIOCommandQueue.hpp"
#include "Metal/MTLIOCompressor.hpp"
#include "Metal/MTLLibrary.hpp"
#include "Metal/MTLLinkedFunctions.hpp"
#include "Metal/MTLLogState.hpp"
#include "Metal/MTLParallelRenderCommandEncoder.hpp"
#include "Metal/MTLPipeline.hpp"
#include "Metal/MTLPixelFormat.hpp"
#include "Metal/MTLPrivate.hpp"
#include "Metal/MTLRasterizationRate.hpp"
#include "Metal/MTLRenderCommandEncoder.hpp"
#include "Metal/MTLRenderPass.hpp"
#include "Metal/MTLRenderPipeline.hpp"
#include "Metal/MTLResidencySet.hpp"
#include "Metal/MTLResource.hpp"
#include "Metal/MTLResourceStateCommandEncoder.hpp"
#include "Metal/MTLResourceStatePass.hpp"
#include "Metal/MTLSampler.hpp"
#include "Metal/MTLStageInputOutputDescriptor.hpp"
#include "Metal/MTLTexture.hpp"
#include "Metal/MTLTypes.hpp"
#include "Metal/MTLVertexDescriptor.hpp"
#include "Metal/MTLVisibleFunctionTable.hpp"
#include "Metal/MTLVersion.hpp"

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
