///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/EntityData.h>
#include <fb/FbProxyControllerEntityBinding.h>

namespace fb {
	class FbProxyControllerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FbProxyControllerEntityData"); }
		virtual ~FbProxyControllerEntityData() override {}
		FbProxyControllerEntityData() {
			m_animationEntitySpacePriority = 3;
			m_alwaysClearEntitySpaceWhenInScenario = false;
		};

		FbProxyControllerEntityBinding m_cannedAnimBinding; // 0x18 (24)
		s32 m_animationEntitySpacePriority; // 0x40 (64)
		AntRef m_pointerGameState; // 0x44 (68)
		bool m_alwaysClearEntitySpaceWhenInScenario; // 0x58 (88)
	}; // 0x60 (96)
}

