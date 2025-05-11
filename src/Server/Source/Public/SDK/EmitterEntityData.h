///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EffectEntityData.h>
#include <fb/QualityScalableFloat.h>

namespace fb {
	class EmitterAsset;
}

namespace fb {
	class EmitterEntityData : public EffectEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmitterEntityData"); }
		virtual ~EmitterEntityData() override {}
		EmitterEntityData() {
			m_spawnProbability = QualityScalableFloat(1.f, 1.f, 1.f, 1.f);
			m_localPlayerOnly = false;
		};

		CtrRef<EmitterAsset> m_emitter; // 0xA0 (160)
		QualityScalableFloat m_spawnProbability; // 0xA8 (168)
		bool m_localPlayerOnly; // 0xB8 (184)
	}; // 0xC0 (192)
}

