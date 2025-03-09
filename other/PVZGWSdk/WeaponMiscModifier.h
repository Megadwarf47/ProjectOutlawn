///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponMiscModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponMiscModifier"); }
		virtual ~WeaponMiscModifier() override {}
		WeaponMiscModifier() {
			m_enableBreathControl = false;
			m_canBeInSupportedShooting = false;
			m_unZoomOnBoltAction = true;
			m_holdBoltActionUntilZoomRelease = true;
			m_isSilenced = false;
		};

		bool m_enableBreathControl; // 0x18 (24)
		bool m_canBeInSupportedShooting; // 0x19 (25)
		bool m_unZoomOnBoltAction; // 0x1A (26)
		bool m_holdBoltActionUntilZoomRelease; // 0x1B (27)
		bool m_isSilenced; // 0x1C (28)
	}; // 0x20 (32)
}

