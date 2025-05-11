///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZMessageEntityInfo.h>
#include <fb/PVZMessageLineData.h>
#include <fb/String.h>

namespace fb {
	class PVZTooltipMessageEntityInfo : public PVZMessageEntityInfo {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZTooltipMessageEntityInfo"); }
		virtual ~PVZTooltipMessageEntityInfo() override {}
		PVZTooltipMessageEntityInfo() {
			m_displayTime = 5.f;
			m_entryInputAction = 899534898;
		};

		String m_messageSid; // 0x10 (16)
		float m_displayTime; // 0x18 (24)
		Array<PVZMessageLineData> m_additionalMessages; // 0x20 (32)
		s32 m_entryInputAction; // 0x28 (40)
	}; // 0x30 (48)
}

