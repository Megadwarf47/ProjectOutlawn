///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class HealthStateData;
	class PartLinkData;
}

namespace fb {
	class PartComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PartComponentData"); }
		virtual ~PartComponentData() override {}
		PartComponentData() {
			m_damageOverride = 0.f;
			m_isSupported = false;
			m_isFragile = false;
			m_isNetworkable = false;
			m_isWindow = false;
			m_animatePhysics = false;
		};

		RefArray<HealthStateData> m_healthStates; // 0x70 (112)
		RefArray<PartLinkData> m_partLinks; // 0x78 (120)
		float m_damageOverride; // 0x80 (128)
		bool m_isSupported; // 0x84 (132)
		bool m_isFragile; // 0x85 (133)
		bool m_isNetworkable; // 0x86 (134)
		bool m_isWindow; // 0x87 (135)
		bool m_animatePhysics; // 0x88 (136)
	}; // 0x90 (144)
}

