///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class DynamicEnvmapEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicEnvmapEntityData"); }
		virtual ~DynamicEnvmapEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		DynamicEnvmapEntityData() {
		};

	}; // 0x60 (96)
}

