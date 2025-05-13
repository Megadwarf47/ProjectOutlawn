///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EffectEntityData.h>
#include <fb/Vec4.h>

namespace fb {
	class VisualEnvironmentBlueprint;
}

namespace fb {
	class VisualEnvironmentEffectEntityData : public EffectEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualEnvironmentEffectEntityData"); }
		virtual ~VisualEnvironmentEffectEntityData() override {}
		VisualEnvironmentEffectEntityData() {
			m_lifetimeCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_cullAngleCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_cullDistanceCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_lifetime = -1.f;
			m_sampleOnStartOnly = false;
			m_hideOccluded = false;
		};

		Vec4 m_lifetimeCurve; // 0xA0 (160)
		Vec4 m_cullAngleCurve; // 0xB0 (176)
		Vec4 m_cullDistanceCurve; // 0xC0 (192)
		CtrRef<VisualEnvironmentBlueprint> m_visualEnvironment; // 0xD0 (208)
		float m_lifetime; // 0xD8 (216)
		bool m_sampleOnStartOnly; // 0xDC (220)
		bool m_hideOccluded; // 0xDD (221)
	}; // 0xE0 (224)
}

