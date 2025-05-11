///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PeerCreateGameParameters.h>
#include <fb/ServerBackendData.h>

namespace fb {
	class PeerServerBackendData : public ServerBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PeerServerBackendData"); }
		virtual ~PeerServerBackendData() override {}
		PeerServerBackendData() {
		};

		PeerCreateGameParameters m_createParameters; // 0x18 (24)
	}; // 0x28 (40)
}

