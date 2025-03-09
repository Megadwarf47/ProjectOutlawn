///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class SoundSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundSettings"); }
		virtual ~SoundSettings() override {}
		SoundSettings() {
			m_enable = true;
		};

		String m_audioSystemUri; // 0x20 (32)
		String m_voCommon; // 0x28 (40)
		String m_voEnglish; // 0x30 (48)
		String m_voSpanish; // 0x38 (56)
		String m_voFrench; // 0x40 (64)
		String m_voGerman; // 0x48 (72)
		String m_voItalian; // 0x50 (80)
		bool m_enable; // 0x58 (88)
	}; // 0x60 (96)
}

