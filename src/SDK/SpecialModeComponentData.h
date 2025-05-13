///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/SpecialModeBinding.h>
#include <fb/String.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	class SpecialModeComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpecialModeComponentData"); }
		virtual ~SpecialModeComponentData() override {}
		SpecialModeComponentData() {
			m_isReady = false;
		};

		CtrRef<AntEnumeration> m_specialModeEnum; // 0x70 (112)
		String m_weaponID; // 0x78 (120)
		SpecialModeBinding m_specialModeAnimationBinding; // 0x80 (128)
		bool m_isReady; // 0xE4 (228)
	}; // 0xF0 (240)
}

