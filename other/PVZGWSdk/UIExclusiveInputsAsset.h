///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/InputConceptIdentifiers.h>

namespace fb {
	class UIExclusiveInputsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIExclusiveInputsAsset"); }
		virtual ~UIExclusiveInputsAsset() override {}
		UIExclusiveInputsAsset() {
		};

		Array<InputConceptIdentifiers> m_exclusiveInputConcepts; // 0x18 (24)
	}; // 0x20 (32)
}

