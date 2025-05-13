///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlazePresenceBackendData.h>
#include <fb/PeerCreateGameParameters.h>

namespace fb {
	class PVZBlazePresenceBackendData : public BlazePresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZBlazePresenceBackendData"); }
		virtual ~PVZBlazePresenceBackendData() override {}
		PVZBlazePresenceBackendData() {
		};

		PeerCreateGameParameters m_peerCreateParameters; // 0x30 (48)
	}; // 0x40 (64)
}

