///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffRadiatorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffRadiatorComponentData"); }
		virtual ~BuffRadiatorComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		BuffRadiatorComponentData() {
			m_armingTime = 0.f;
			m_period = 1.f;
			m_radius = 0.f;
			m_checkOccluded = false;
		};

		CtrRef<BuffData> m_buff; // 0x70 (112)
		float m_armingTime; // 0x78 (120)
		float m_period; // 0x7C (124)
		float m_radius; // 0x80 (128)
		bool m_checkOccluded; // 0x84 (132)
	}; // 0x90 (144)
}

