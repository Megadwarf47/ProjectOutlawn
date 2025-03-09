///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/ProceduralAwarenessComponentBinding.h>
#include <fb/Vec3.h>

namespace fb {
	class ProceduralAwarenessComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralAwarenessComponentData"); }
		virtual ~ProceduralAwarenessComponentData() override {}
		ProceduralAwarenessComponentData() {
			m_enabled = true;
			m_forceLookAtPlayer = false;
			m_disableRandomForcedLooksAtPlayer = false;
			m_useTargetOverride = false;
		};

		Vec3 m_targetOverride; // 0x70 (112)
		ProceduralAwarenessComponentBinding m_binding; // 0x80 (128)
		bool m_enabled; // 0xE4 (228)
		bool m_forceLookAtPlayer; // 0xE5 (229)
		bool m_disableRandomForcedLooksAtPlayer; // 0xE6 (230)
		bool m_useTargetOverride; // 0xE7 (231)
	}; // 0xF0 (240)
}

