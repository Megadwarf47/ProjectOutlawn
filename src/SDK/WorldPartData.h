///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PrefabBlueprint.h>

namespace fb {
	class WorldPartData : public PrefabBlueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldPartData"); }
		virtual ~WorldPartData() override {}
		WorldPartData() {
			m_enabled = true;
			m_useDeferredEntityCreation = false;
		};

		Guid m_hackToSolveRealTimeTweakingIssue; // 0x48 (72)
		bool m_enabled; // 0x58 (88)
		bool m_useDeferredEntityCreation; // 0x59 (89)
	}; // 0x60 (96)
}

