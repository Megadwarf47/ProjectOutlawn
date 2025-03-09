///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class TeamAsset : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamAsset"); }
		virtual ~TeamAsset() override {}
		TeamAsset() {
		};

	}; // 0x18 (24)
}

