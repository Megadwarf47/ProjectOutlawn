///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>

namespace fb {
	class DVRMomentEvent;
}

namespace fb {
	class DVRMomentsEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DVRMomentsEntityData"); }
		virtual ~DVRMomentsEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		DVRMomentsEntityData() {
		};

		RefArray<DVRMomentEvent> m_moments; // 0x18 (24)
	}; // 0x20 (32)
}

