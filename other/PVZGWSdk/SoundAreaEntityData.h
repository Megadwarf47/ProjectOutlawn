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
	class BigWorldSettingsAsset;
	class SoundAsset;
}

namespace fb {
	class SoundAreaEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundAreaEntityData"); }
		virtual ~SoundAreaEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SoundAreaEntityData() {
			m_fadeWidth = 10.f;
			m_proximityMultiplier = 1.f;
			m_fadeCurve = FadeCurveType::FadeCurveType_LinearDecibel;
			m_enableOnCreation = true;
		};

		CtrRef<SoundAsset> m_sound; // 0x18 (24)
		CtrRef<BigWorldSettingsAsset> m_bigWorld; // 0x20 (32)
		float m_fadeWidth; // 0x28 (40)
		float m_proximityMultiplier; // 0x2C (44)
		FadeCurveType m_fadeCurve; // 0x30 (48)
		bool m_enableOnCreation; // 0x34 (52)
	}; // 0x38 (56)
}

