///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class PredestructionEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PredestructionEntityData"); }
		virtual ~PredestructionEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PredestructionEntityData() {
			m_radius = 3.f;
			m_enabled = true;
		};

		float m_radius; // 0x60 (96)
		bool m_enabled; // 0x64 (100)
	}; // 0x70 (112)
}

