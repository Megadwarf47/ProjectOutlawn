///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Vec4.h>

namespace fb {
	class ClientEffectMaskVolumeEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClientEffectMaskVolumeEntityData"); }
		virtual ~ClientEffectMaskVolumeEntityData() override {}
		ClientEffectMaskVolumeEntityData() {
			m_lifeTimeInSeconds = 3.f;
			m_applyEffectCurve = Vec4(-4.08482f, 2.747351f, -0.950717f, 1.933036f);
			m_updatePeriodInSeconds = 0.2f;
			m_radius = 20.f;
		};

		float m_lifeTimeInSeconds; // 0x18 (24)
		Vec4 m_applyEffectCurve; // 0x20 (32)
		float m_updatePeriodInSeconds; // 0x30 (48)
		float m_radius; // 0x34 (52)
	}; // 0x40 (64)
}

