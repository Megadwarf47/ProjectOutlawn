///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CharacterType.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/PointOfInterestInfo.h>
#include <fb/ThreatData.h>

namespace fb {
	class PressureData;
}

namespace fb {
	class AIPressureComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIPressureComponentData"); }
		virtual ~AIPressureComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AIPressureComponentData() {
			m_characterType = CharacterType::Character_Unknown;
		};

		PointOfInterestInfo m_interest; // 0x70 (112)
		CtrRef<PressureData> m_pressure; // 0x90 (144)
		Array<ThreatData> m_threatLevels; // 0x98 (152)
		CharacterType m_characterType; // 0xA0 (160)
	}; // 0xB0 (176)
}

