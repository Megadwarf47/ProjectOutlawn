///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameComponentEntityData.h>
#include <fb/PVZCommanderActionType.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class PVZCommanderEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCommanderEntityData"); }
		virtual ~PVZCommanderEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		PVZCommanderEntityData() {
			m_staticCameraElevation = 25.f;
			m_team = TeamId::TeamNeutral;
			m_initialSundropAmount = 50;
			m_sundropAmount = 25;
			m_sundropFrequency = 10.f;
		};

		float m_staticCameraElevation; // 0x80 (128)
		TeamId m_team; // 0x84 (132)
		Array<PVZCommanderActionType> m_globalActions; // 0x88 (136)
		u32 m_initialSundropAmount; // 0x90 (144)
		u32 m_sundropAmount; // 0x94 (148)
		float m_sundropFrequency; // 0x98 (152)
		String m_teamIdentifier; // 0xA0 (160)
	}; // 0xB0 (176)
}

