///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class WaterAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterAsset"); }
		virtual ~WaterAsset() override {}
		WaterAsset() {
			m_physicsResource = ;
		};

		ResourceRef m_physicsResource; // 0x18 (24)
	}; // 0x20 (32)
}

