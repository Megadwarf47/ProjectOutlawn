///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PresenceBackendData.h>
#include <fb/Ps3ParentalLockAgeSettings.h>
#include <fb/Ps3ServiceSettings.h>
#include <fb/String.h>

namespace fb {
	class Ps3PresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Ps3PresenceBackendData"); }
		virtual ~Ps3PresenceBackendData() override {}
		Ps3PresenceBackendData() {
		};

		String m_communicationId; // 0x18 (24)
		String m_communicationSignature; // 0x20 (32)
		Array<Ps3ParentalLockAgeSettings> m_parentalLockAgeSettings; // 0x28 (40)
		Array<Ps3ServiceSettings> m_serviceSettings; // 0x30 (48)
	}; // 0x38 (56)
}

