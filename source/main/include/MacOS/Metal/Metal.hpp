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

#include "MacOS/Metal/MTLAccelerationStructure.hpp"
#include "MacOS/Metal/MTLAccelerationStructureCommandEncoder.hpp"
#include "MacOS/Metal/MTLAccelerationStructureTypes.hpp"
#include "MacOS/Metal/MTLAllocation.hpp"
#include "MacOS/Metal/MTLArgument.hpp"
#include "MacOS/Metal/MTLArgumentEncoder.hpp"
#include "MacOS/Metal/MTLBinaryArchive.hpp"
#include "MacOS/Metal/MTLBlitCommandEncoder.hpp"
#include "MacOS/Metal/MTLBlitPass.hpp"
#include "MacOS/Metal/MTLBuffer.hpp"
#include "MacOS/Metal/MTLCaptureManager.hpp"
#include "MacOS/Metal/MTLCaptureScope.hpp"
#include "MacOS/Metal/MTLCommandBuffer.hpp"
#include "MacOS/Metal/MTLCommandEncoder.hpp"
#include "MacOS/Metal/MTLCommandQueue.hpp"
#include "MacOS/Metal/MTLComputeCommandEncoder.hpp"
#include "MacOS/Metal/MTLComputePass.hpp"
#include "MacOS/Metal/MTLComputePipeline.hpp"
#include "MacOS/Metal/MTLCounters.hpp"
#include "MacOS/Metal/MTLDefines.hpp"
#include "MacOS/Metal/MTLDepthStencil.hpp"
#include "MacOS/Metal/MTLDevice.hpp"
#include "MacOS/Metal/MTLDrawable.hpp"
#include "MacOS/Metal/MTLDynamicLibrary.hpp"
#include "MacOS/Metal/MTLEvent.hpp"
#include "MacOS/Metal/MTLFence.hpp"
#include "MacOS/Metal/MTLFunctionConstantValues.hpp"
#include "MacOS/Metal/MTLFunctionDescriptor.hpp"
#include "MacOS/Metal/MTLFunctionHandle.hpp"
#include "MacOS/Metal/MTLFunctionLog.hpp"
#include "MacOS/Metal/MTLFunctionStitching.hpp"
#include "MacOS/Metal/MTLHeaderBridge.hpp"
#include "MacOS/Metal/MTLHeap.hpp"
#include "MacOS/Metal/MTLIndirectCommandBuffer.hpp"
#include "MacOS/Metal/MTLIndirectCommandEncoder.hpp"
#include "MacOS/Metal/MTLIntersectionFunctionTable.hpp"
#include "MacOS/Metal/MTLIOCommandBuffer.hpp"
#include "MacOS/Metal/MTLIOCommandQueue.hpp"
#include "MacOS/Metal/MTLIOCompressor.hpp"
#include "MacOS/Metal/MTLLibrary.hpp"
#include "MacOS/Metal/MTLLinkedFunctions.hpp"
#include "MacOS/Metal/MTLLogState.hpp"
#include "MacOS/Metal/MTLParallelRenderCommandEncoder.hpp"
#include "MacOS/Metal/MTLPipeline.hpp"
#include "MacOS/Metal/MTLPixelFormat.hpp"
#include "MacOS/Metal/MTLPrivate.hpp"
#include "MacOS/Metal/MTLRasterizationRate.hpp"
#include "MacOS/Metal/MTLRenderCommandEncoder.hpp"
#include "MacOS/Metal/MTLRenderPass.hpp"
#include "MacOS/Metal/MTLRenderPipeline.hpp"
#include "MacOS/Metal/MTLResidencySet.hpp"
#include "MacOS/Metal/MTLResource.hpp"
#include "MacOS/Metal/MTLResourceStateCommandEncoder.hpp"
#include "MacOS/Metal/MTLResourceStatePass.hpp"
#include "MacOS/Metal/MTLSampler.hpp"
#include "MacOS/Metal/MTLStageInputOutputDescriptor.hpp"
#include "MacOS/Metal/MTLTexture.hpp"
#include "MacOS/Metal/MTLTypes.hpp"
#include "MacOS/Metal/MTLVertexDescriptor.hpp"
#include "MacOS/Metal/MTLVisibleFunctionTable.hpp"
#include "MacOS/Metal/MTLVersion.hpp"

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
