///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/SpatialEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class ProceduralAwarenessTargetEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralAwarenessTargetEntityData"); }
		virtual ~ProceduralAwarenessTargetEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ProceduralAwarenessTargetEntityData() {
			m_realm = Realm::Realm_Client;
			m_importance = -1.f;
			m_importanceMultiplier = 1.f;
			m_lookAtTime = 0.f;
			m_dartRadius = 0.5f;
			m_enabled = true;
		};

		Vec3 m_positionOffset; // 0x60 (96)
		Realm m_realm; // 0x70 (112)
		float m_importance; // 0x74 (116)
		float m_importanceMultiplier; // 0x78 (120)
		float m_lookAtTime; // 0x7C (124)
		float m_dartRadius; // 0x80 (128)
		bool m_enabled; // 0x84 (132)
	}; // 0x90 (144)
}

