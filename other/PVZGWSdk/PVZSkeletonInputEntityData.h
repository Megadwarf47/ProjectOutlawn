///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class PVZSkeletonInputEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSkeletonInputEntityData"); }
		virtual ~PVZSkeletonInputEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZSkeletonInputEntityData() {
			m_gestureLostTimeout = 60.f;
		};

		float m_gestureLostTimeout; // 0x18 (24)
	}; // 0x20 (32)
}

