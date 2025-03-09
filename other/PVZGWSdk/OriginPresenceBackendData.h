///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PresenceBackendData.h>

namespace fb {
	class OriginPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OriginPresenceBackendData"); }
		virtual ~OriginPresenceBackendData() override {}
		OriginPresenceBackendData() {
		};

		Array<String> m_commerceCategories; // 0x18 (24)
	}; // 0x20 (32)
}

