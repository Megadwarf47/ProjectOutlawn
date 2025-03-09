///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class PVZAIActorData;
}

namespace fb {
	class AIActorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIActorComponentData"); }
		virtual ~AIActorComponentData() override {}
		AIActorComponentData() {
		};

		CtrRef<PVZAIActorData> m_aiActor; // 0x70 (112)
		String m_aiTypeName; // 0x78 (120)
		String m_commanderIconName; // 0x80 (128)
		String m_commanderDeadIconName; // 0x88 (136)
	}; // 0x90 (144)
}

