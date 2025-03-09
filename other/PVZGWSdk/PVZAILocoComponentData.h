///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class PVZAILocoComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZAILocoComponentData"); }
		virtual ~PVZAILocoComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZAILocoComponentData() {
			m_wantedYaw = 0.f;
			m_wantedPitch = 0.f;
		};

		float m_wantedYaw; // 0x70 (112)
		float m_wantedPitch; // 0x74 (116)
	}; // 0x80 (128)
}

