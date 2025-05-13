///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class EntryAimAssistTargetOptionsComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntryAimAssistTargetOptionsComponentData"); }
		virtual ~EntryAimAssistTargetOptionsComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		EntryAimAssistTargetOptionsComponentData() {
			m_notSnapZoomTargetAngle = 0.f;
			m_allowSoldierAsTarget = true;
		};

		float m_notSnapZoomTargetAngle; // 0x70 (112)
		bool m_allowSoldierAsTarget; // 0x74 (116)
	}; // 0x80 (128)
}

