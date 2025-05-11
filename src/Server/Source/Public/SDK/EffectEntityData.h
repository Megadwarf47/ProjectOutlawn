///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/QualityScalableBool.h>
#include <fb/QualityScalableFloat.h>
#include <fb/QualityScalableInt.h>
#include <fb/RefArray.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class EffectEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectEntityData"); }
		virtual ~EffectEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		EffectEntityData() {
			m_maxActiveInstanceCount = QualityScalableInt(30, 30, 30, 30);
			m_startDelay = 0.f;
			m_resetInstanceWhenStarted = true;
			m_attachToSpawnSurface = false;
			m_enable = QualityScalableBool(true, true, true, true);
		};

		RefArray<GameObjectData> m_components; // 0x60 (96)
		QualityScalableInt m_maxActiveInstanceCount; // 0x68 (104)
		QualityScalableFloat m_cullDistance; // 0x78 (120)
		float m_startDelay; // 0x88 (136)
		bool m_resetInstanceWhenStarted; // 0x8C (140)
		bool m_attachToSpawnSurface; // 0x8D (141)
		QualityScalableBool m_enable; // 0x8E (142)
	}; // 0xA0 (160)
}

