///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>

namespace fb {
	class SoldierSprintSettingsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierSprintSettingsData"); }
		virtual ~SoldierSprintSettingsData() override {}
		SoldierSprintSettingsData() {
			m_fov = 65.f;
			m_fovInDelay = 0.f;
			m_fovInTime = 0.3f;
			m_fovOutDelay = 0.f;
			m_fovOutTime = 0.2f;
			m_recoverTime = 1.f;
			m_sprintToProneRecoverTime = 1.f;
		};

		float m_fov; // 0x10 (16)
		float m_fovInDelay; // 0x14 (20)
		float m_fovInTime; // 0x18 (24)
		float m_fovOutDelay; // 0x1C (28)
		float m_fovOutTime; // 0x20 (32)
		float m_recoverTime; // 0x24 (36)
		float m_sprintToProneRecoverTime; // 0x28 (40)
		Array<s32> m_interruptingActions; // 0x30 (48)
	}; // 0x38 (56)
}

