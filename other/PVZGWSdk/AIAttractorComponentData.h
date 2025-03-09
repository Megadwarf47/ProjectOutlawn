///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIAttractorData.h>
#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class PVZAIActorData;
}

namespace fb {
	class AIAttractorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIAttractorComponentData"); }
		virtual ~AIAttractorComponentData() override {}
		AIAttractorComponentData() {
			m_globalPriorityModifier = 1.f;
		};

		Vec3 m_attackHeight; // 0x70 (112)
		CtrRef<PVZAIActorData> m_aiActor; // 0x80 (128)
		Array<AIAttractorData> m_attractorInteractions; // 0x88 (136)
		Array<Vec3> m_locationOffsets; // 0x90 (144)
		float m_globalPriorityModifier; // 0x98 (152)
	}; // 0xA0 (160)
}

