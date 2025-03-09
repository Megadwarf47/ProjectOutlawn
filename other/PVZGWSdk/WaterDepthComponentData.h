///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class WaterDepthComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterDepthComponentData"); }
		virtual ~WaterDepthComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		WaterDepthComponentData() {
			m_updateRate = 1;
			m_autoStart = true;
			m_resetOnStop = false;
			m_enabled = false;
		};

		u32 m_updateRate; // 0x70 (112)
		bool m_autoStart; // 0x74 (116)
		bool m_resetOnStop; // 0x75 (117)
		bool m_enabled; // 0x76 (118)
	}; // 0x80 (128)
}

