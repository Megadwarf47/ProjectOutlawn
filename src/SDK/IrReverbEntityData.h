///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/FadeCurveType.h>

namespace fb {
	class ImpulseResponseAsset;
}

namespace fb {
	class IrReverbEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IrReverbEntityData"); }
		virtual ~IrReverbEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		IrReverbEntityData() {
			m_gain = -12.f;
			m_volume = 0.f;
			m_fadeCurve = FadeCurveType::FadeCurveType_LinearAmplitude;
			m_isDominant = false;
		};

		CtrRef<ImpulseResponseAsset> m_impulseResponse; // 0x18 (24)
		float m_gain; // 0x20 (32)
		float m_volume; // 0x24 (36)
		FadeCurveType m_fadeCurve; // 0x28 (40)
		bool m_isDominant; // 0x2C (44)
	}; // 0x30 (48)
}

