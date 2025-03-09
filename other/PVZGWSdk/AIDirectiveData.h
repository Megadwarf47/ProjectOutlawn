///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DirectivePriority.h>
#include <fb/EntityData.h>

namespace fb {
	class AIDirectiveData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIDirectiveData"); }
		virtual ~AIDirectiveData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AIDirectiveData() {
			m_priority = DirectivePriority::DP_MustFollow;
		};

		DirectivePriority m_priority; // 0x18 (24)
	}; // 0x20 (32)
}

