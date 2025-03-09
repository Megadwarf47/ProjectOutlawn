///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class PVZMessageEntityInfo;
}

namespace fb {
	class PVZUIMessageEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIMessageEntityData"); }
		virtual ~PVZUIMessageEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PVZUIMessageEntityData() {
		};

		CtrRef<PVZMessageEntityInfo> m_messageInfo; // 0x18 (24)
	}; // 0x20 (32)
}

