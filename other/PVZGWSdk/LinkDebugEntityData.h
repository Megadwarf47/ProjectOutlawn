///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class LinkDebugEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkDebugEntityData"); }
		virtual ~LinkDebugEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		LinkDebugEntityData() {
			m_realm = Realm::Realm_Client;
			m_expectedTargetDataCountInRuntime = 100000;
			m_expectedTargetInstanceCountInRuntime = 100000;
			m_expectAllTargetsToBeResolvableFromSource = false;
			m_expectAllTargetsToBeInSameSubLevel = false;
			m_expectAllTargetsToBeImmutable = false;
			m_expectAllTargetsToBeDynamic = false;
		};

		Realm m_realm; // 0x18 (24)
		u32 m_expectedTargetDataCountInRuntime; // 0x1C (28)
		u32 m_expectedTargetInstanceCountInRuntime; // 0x20 (32)
		bool m_expectAllTargetsToBeResolvableFromSource; // 0x24 (36)
		bool m_expectAllTargetsToBeInSameSubLevel; // 0x25 (37)
		bool m_expectAllTargetsToBeImmutable; // 0x26 (38)
		bool m_expectAllTargetsToBeDynamic; // 0x27 (39)
	}; // 0x28 (40)
}

