///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class PickupEntityData;
}

namespace fb {
	class PickupEntityAsset : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PickupEntityAsset"); }
		virtual ~PickupEntityAsset() override {}
		PickupEntityAsset() {
		};

		CtrRef<PickupEntityData> m_data; // 0x18 (24)
	}; // 0x20 (32)
}

