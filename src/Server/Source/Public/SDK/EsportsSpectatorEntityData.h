///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpectatorEntityData.h>

namespace fb {
	class EsportsSpectatorEntityData : public SpectatorEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EsportsSpectatorEntityData"); }
		virtual ~EsportsSpectatorEntityData() override {}
		EsportsSpectatorEntityData() {
			m_selectFreeCameraByIndex = 0;
			m_outOfBoundsTime = 10.f;
		};

		s32 m_selectFreeCameraByIndex; // 0x38 (56)
		float m_outOfBoundsTime; // 0x3C (60)
	}; // 0x40 (64)
}

