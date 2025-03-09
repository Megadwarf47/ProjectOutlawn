///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceBackendData.h>

namespace fb {
	class DirtySockPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DirtySockPresenceBackendData"); }
		virtual ~DirtySockPresenceBackendData() override {}
		DirtySockPresenceBackendData() {
		};

	}; // 0x18 (24)
}

