///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/OriginTokenType.h>
#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class OriginSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OriginSettings"); }
		virtual ~OriginSettings() override {}
		OriginSettings() {
			m_tokenType = OriginTokenType::OriginTokenType_Ticket;
			m_enabled = true;
			m_log = false;
			m_allowProductionEnvironment = false;
		};

		String m_contentId; // 0x20 (32)
		String m_title; // 0x28 (40)
		String m_multiplayerId; // 0x30 (48)
		String m_language; // 0x38 (56)
		OriginTokenType m_tokenType; // 0x40 (64)
		String m_authCodeClientId; // 0x48 (72)
		bool m_enabled; // 0x50 (80)
		bool m_log; // 0x51 (81)
		bool m_allowProductionEnvironment; // 0x52 (82)
	}; // 0x58 (88)
}

