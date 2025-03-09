///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class BTRefTreeKey : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTRefTreeKey"); }
		virtual ~BTRefTreeKey() override {}
		BTRefTreeKey() {
			m_assetHash = 0;
		};

		u32 m_assetHash; // 0x18 (24)
	}; // 0x20 (32)
}

