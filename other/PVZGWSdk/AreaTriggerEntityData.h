///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AreaTriggerInclude.h>
#include <fb/LinearTransform.h>
#include <fb/TeamId.h>
#include <fb/TriggerEntityData.h>

namespace fb {
	class AreaTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AreaTriggerEntityData"); }
		virtual ~AreaTriggerEntityData() override {}
		AreaTriggerEntityData() {
			m_include = AreaTriggerInclude::ATPlayers;
			m_radius = 0.f;
			m_insideAreaEventRepeatTime = 0.f;
			m_teamOfAllies = TeamId::Team1;
			m_useCharacterEntity = false;
			m_useRadiusWithGeometryTransform = false;
			m_useSphereSweepTest = false;
			m_ignoreImmortalCharacters = false;
			m_oneInsideAreaEventPerSoldier = false;
			m_triggerOnlyOnLeave = false;
			m_resetOnEnable = false;
			m_triggerOnLeaveOnDeath = true;
			m_triggerOnLeaveOnDisable = false;
		};

		LinearTransform m_geometryTransform; // 0x70 (112)
		AreaTriggerInclude m_include; // 0xB0 (176)
		float m_radius; // 0xB4 (180)
		float m_insideAreaEventRepeatTime; // 0xB8 (184)
		TeamId m_teamOfAllies; // 0xBC (188)
		bool m_useCharacterEntity; // 0xC0 (192)
		bool m_useRadiusWithGeometryTransform; // 0xC1 (193)
		bool m_useSphereSweepTest; // 0xC2 (194)
		bool m_ignoreImmortalCharacters; // 0xC3 (195)
		bool m_oneInsideAreaEventPerSoldier; // 0xC4 (196)
		bool m_triggerOnlyOnLeave; // 0xC5 (197)
		bool m_resetOnEnable; // 0xC6 (198)
		bool m_triggerOnLeaveOnDeath; // 0xC7 (199)
		bool m_triggerOnLeaveOnDisable; // 0xC8 (200)
	}; // 0xD0 (208)
}

