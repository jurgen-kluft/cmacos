//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//
// Metal/MTLFunctionHandle.hpp
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

#include "cmacos/Metal/MTLDefines.hpp"
#include "cmacos/Metal/MTLHeaderBridge.hpp"
#include "cmacos/Metal/MTLPrivate.hpp"

#include "cmacos/Foundation/Foundation.hpp"

#include "cmacos/Metal/MTLLibrary.hpp"

namespace MTL
{
class FunctionHandle : public NS::Referencing<FunctionHandle>
{
public:
    MTL::FunctionType functionType() const;

    NS::String*       name() const;

    class Device*     device() const;
};

}

// property: functionType
_MTL_INLINE MTL::FunctionType MTL::FunctionHandle::functionType() const
{
    return Object::sendMessage<MTL::FunctionType>(this, _MTL_PRIVATE_SEL(functionType));
}

// property: name
_MTL_INLINE NS::String* MTL::FunctionHandle::name() const
{
    return Object::sendMessage<NS::String*>(this, _MTL_PRIVATE_SEL(name));
}

// property: device
_MTL_INLINE MTL::Device* MTL::FunctionHandle::device() const
{
    return Object::sendMessage<MTL::Device*>(this, _MTL_PRIVATE_SEL(device));
}
