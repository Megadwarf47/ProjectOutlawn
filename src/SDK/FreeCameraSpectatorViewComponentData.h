///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpectatorViewComponentData.h>

namespace fb {
	class CollidableFreeCameraData;
}

namespace fb {
	class FreeCameraSpectatorViewComponentData : public SpectatorViewComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FreeCameraSpectatorViewComponentData"); }
		virtual ~FreeCameraSpectatorViewComponentData() override {}
		FreeCameraSpectatorViewComponentData() {
			m_checkSpectatorAreas = true;
			m_checkCombatAreas = false;
			m_scannable = true;
		};

		CtrRef<CollidableFreeCameraData> m_freeCameraData; // 0x10 (16)
		bool m_checkSpectatorAreas; // 0x18 (24)
		bool m_checkCombatAreas; // 0x19 (25)
		bool m_scannable; // 0x1A (26)
	}; // 0x20 (32)
}

