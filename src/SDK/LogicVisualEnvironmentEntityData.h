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
	class VisualEnvironmentBlueprint;
}

namespace fb {
	class LogicVisualEnvironmentEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LogicVisualEnvironmentEntityData"); }
		virtual ~LogicVisualEnvironmentEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LogicVisualEnvironmentEntityData() {
			m_visibility = 0.f;
		};

		CtrRef<VisualEnvironmentBlueprint> m_visualEnvironment; // 0x18 (24)
		float m_visibility; // 0x20 (32)
	}; // 0x28 (40)
}

