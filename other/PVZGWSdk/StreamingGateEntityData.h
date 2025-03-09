///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class StreamingGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StreamingGateEntityData"); }
		virtual ~StreamingGateEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		StreamingGateEntityData() {
			m_timeout = 10.f;
		};

		float m_timeout; // 0x18 (24)
	}; // 0x20 (32)
}

