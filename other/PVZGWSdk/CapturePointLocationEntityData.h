///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class CapturePointLocationEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CapturePointLocationEntityData"); }
		virtual ~CapturePointLocationEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		CapturePointLocationEntityData() {
			m_captureTime = 40.f;
			m_defendTime = 40.f;
			m_firstContribution = 1.f;
			m_additionalContribution = 0.25f;
			m_maxPointContribution = 2.f;
			m_humanAttackerCount = 0;
			m_humanDefenderCount = 0;
			m_aiAttackerCount = 0;
			m_aiDefenderCount = 0;
			m_instantCaptureEnabled = false;
			m_enabled = true;
		};

		float m_captureTime; // 0x18 (24)
		float m_defendTime; // 0x1C (28)
		float m_firstContribution; // 0x20 (32)
		float m_additionalContribution; // 0x24 (36)
		float m_maxPointContribution; // 0x28 (40)
		s32 m_humanAttackerCount; // 0x2C (44)
		s32 m_humanDefenderCount; // 0x30 (48)
		s32 m_aiAttackerCount; // 0x34 (52)
		s32 m_aiDefenderCount; // 0x38 (56)
		bool m_instantCaptureEnabled; // 0x3C (60)
		bool m_enabled; // 0x3D (61)
	}; // 0x40 (64)
}

