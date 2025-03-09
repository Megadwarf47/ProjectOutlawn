///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class ProbeUserData;
}

namespace fb {
	class ProberTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProberTune"); }
		virtual ~ProberTune() override {}
		ProberTune() {
			m_probeInterval = 0.25f;
			m_probeForGround = true;
		};

		float m_probeInterval; // 0x18 (24)
		CtrRef<ProbeUserData> m_probeUserData; // 0x20 (32)
		bool m_probeForGround; // 0x28 (40)
	}; // 0x30 (48)
}

