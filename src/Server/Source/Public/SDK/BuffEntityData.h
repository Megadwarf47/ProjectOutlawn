///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffEntityData"); }
		virtual ~BuffEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		BuffEntityData() {
			m_source = -1;
		};

		CtrRef<BuffData> m_buff; // 0x18 (24)
		s32 m_source; // 0x20 (32)
		MaterialDecl m_material; // 0x24 (36)
	}; // 0x28 (40)
}

