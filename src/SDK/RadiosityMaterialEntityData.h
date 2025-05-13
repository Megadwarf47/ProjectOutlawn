///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class RadiosityMaterialEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadiosityMaterialEntityData"); }
		virtual ~RadiosityMaterialEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		RadiosityMaterialEntityData() {
			m_materialId = 0;
			m_emissive = false;
		};

		CtrRef<ObjectBlueprint> m_blueprint; // 0x18 (24)
		Vec3 m_color; // 0x20 (32)
		u64 m_materialId; // 0x30 (48)
		bool m_emissive; // 0x38 (56)
	}; // 0x40 (64)
}

