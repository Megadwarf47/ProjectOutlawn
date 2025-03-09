///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>

namespace fb {
	class RootingVFXBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RootingVFXBuffEffectData"); }
		virtual ~RootingVFXBuffEffectData() override {}
		RootingVFXBuffEffectData() {
			m_rootedPowerThreshold = 1.f;
		};

		float m_rootedPowerThreshold; // 0x10 (16)
	}; // 0x18 (24)
}

