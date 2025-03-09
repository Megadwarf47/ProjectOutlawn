///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AreaTriggerInclude.h>
#include <fb/MaterialDecl.h>
#include <fb/TriggerEntityData.h>

namespace fb {
	class UnderFireTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnderFireTriggerEntityData"); }
		virtual ~UnderFireTriggerEntityData() override {}
		UnderFireTriggerEntityData() {
			m_radius = 5.f;
			m_coolDownTime = 1.f;
			m_triggeredBy = AreaTriggerInclude::ATAll;
			m_disableIfTrackEntityIsLost = true;
			m_randomYaw = true;
			m_indicateHit = false;
		};

		float m_radius; // 0x70 (112)
		float m_coolDownTime; // 0x74 (116)
		MaterialDecl m_triggerOnMaterialOnly; // 0x78 (120)
		AreaTriggerInclude m_triggeredBy; // 0x7C (124)
		bool m_disableIfTrackEntityIsLost; // 0x80 (128)
		bool m_randomYaw; // 0x81 (129)
		bool m_indicateHit; // 0x82 (130)
	}; // 0x90 (144)
}

