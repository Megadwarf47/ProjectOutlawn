///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceBackendData.h>
#include <fb/String.h>

namespace fb {
	class DurangoPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DurangoPresenceBackendData"); }
		virtual ~DurangoPresenceBackendData() override {}
		DurangoPresenceBackendData() {
			m_titleId = 0;
		};

		u32 m_titleId; // 0x18 (24)
		String m_serviceConfigId; // 0x20 (32)
	}; // 0x28 (40)
}

