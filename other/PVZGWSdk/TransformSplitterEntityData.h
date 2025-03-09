///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Realm.h>

namespace fb {
	class TransformSplitterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformSplitterEntityData"); }
		virtual ~TransformSplitterEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TransformSplitterEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		LinearTransform m_transform; // 0x20 (32)
	}; // 0x60 (96)
}

