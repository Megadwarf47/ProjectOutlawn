///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceBackendData.h>

namespace fb {
	class XenonPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("XenonPresenceBackendData"); }
		virtual ~XenonPresenceBackendData() override {}
		XenonPresenceBackendData() {
			m_titleId = 0;
		};

		u32 m_titleId; // 0x18 (24)
	}; // 0x20 (32)
}

