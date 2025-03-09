///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>

namespace fb {
	class WaterAsset;
}

namespace fb {
	class WaterEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterEntityData"); }
		virtual ~WaterEntityData() override {}
		WaterEntityData() {
		};

		CtrRef<WaterAsset> m_asset; // 0x90 (144)
	}; // 0xA0 (160)
}

