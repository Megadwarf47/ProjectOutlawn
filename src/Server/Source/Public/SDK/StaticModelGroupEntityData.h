///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GamePhysicsEntityData.h>
#include <fb/StaticModelGroupMemberData.h>

namespace fb {
	class StaticModelGroupEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaticModelGroupEntityData"); }
		virtual ~StaticModelGroupEntityData() override {}
		StaticModelGroupEntityData() {
			m_networkIdCount = 0;
		};

		Array<StaticModelGroupMemberData> m_memberDatas; // 0x90 (144)
		u32 m_networkIdCount; // 0x98 (152)
		Guid m_hackToSolveRealTimeTweakingIssue; // 0x9C (156)
	}; // 0xB0 (176)
}

