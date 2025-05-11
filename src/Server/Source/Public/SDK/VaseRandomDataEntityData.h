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
	class VaseRandomDataDefinition;
}

namespace fb {
	class VaseRandomDataEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VaseRandomDataEntityData"); }
		virtual ~VaseRandomDataEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		VaseRandomDataEntityData() {
		};

		CtrRef<VaseRandomDataDefinition> m_definition; // 0x18 (24)
	}; // 0x20 (32)
}

