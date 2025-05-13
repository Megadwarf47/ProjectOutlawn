///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DynamicGamePhysicsEntityData.h>

namespace fb {
	class MeshAsset;
}

namespace fb {
	class DynamicModelEntityData : public DynamicGamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicModelEntityData"); }
		virtual ~DynamicModelEntityData() override {}
		virtual bool getIsEntityOwner() const override { return true; }
		virtual Realm getRealm() const override { return Realm_Client; }
		DynamicModelEntityData() {
			m_destructiblePartCount = 0;
			m_noCollision = false;
		};

		CtrRef<MeshAsset> m_mesh; // 0x90 (144)
		u32 m_destructiblePartCount; // 0x98 (152)
		bool m_noCollision; // 0x9C (156)
	}; // 0xA0 (160)
}

