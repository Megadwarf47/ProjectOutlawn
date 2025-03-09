///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class FollowerTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FollowerTune"); }
		virtual ~FollowerTune() override {}
		FollowerTune() {
			m_circulate_minTime = 1.f;
			m_circulate_maxTime = 2.f;
			m_startupSlowness = 0.75f;
			m_startupBulk = 0.2f;
			m_packingPadding = 0.25f;
			m_circulate_enable = true;
		};

		float m_circulate_minTime; // 0x18 (24)
		float m_circulate_maxTime; // 0x1C (28)
		float m_startupSlowness; // 0x20 (32)
		float m_startupBulk; // 0x24 (36)
		float m_packingPadding; // 0x28 (40)
		bool m_circulate_enable; // 0x2C (44)
	}; // 0x30 (48)
}

