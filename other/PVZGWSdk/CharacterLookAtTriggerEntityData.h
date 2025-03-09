///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerEventEntityData.h>

namespace fb {
	class CharacterLookAtTriggerEntityData : public TriggerEventEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterLookAtTriggerEntityData"); }
		virtual ~CharacterLookAtTriggerEntityData() override {}
		CharacterLookAtTriggerEntityData() {
			m_fov = 5.f;
			m_minDistanceToObject = 0.f;
			m_maxDistanceToObject = 0.f;
			m_startTriggerLookingAt = true;
			m_checkOcclusion = true;
			m_useEntityDirection = false;
		};

		float m_fov; // 0x70 (112)
		float m_minDistanceToObject; // 0x74 (116)
		float m_maxDistanceToObject; // 0x78 (120)
		bool m_startTriggerLookingAt; // 0x7C (124)
		bool m_checkOcclusion; // 0x7D (125)
		bool m_useEntityDirection; // 0x7E (126)
	}; // 0x80 (128)
}

