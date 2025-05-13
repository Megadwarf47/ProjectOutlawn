///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalPlayerIndex.h>
#include <fb/ReferenceObjectData.h>
#include <fb/SubRealm.h>

namespace fb {
	class LogicReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LogicReferenceObjectData"); }
		virtual ~LogicReferenceObjectData() override {}
		LogicReferenceObjectData() {
			m_localPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_Invalid;
			m_subRealm = SubRealm::SubRealm_All;

			m_castSunShadowEnable = false;
		};

		LocalPlayerIndex m_localPlayerIndex; // 0x80 (128)
		SubRealm m_subRealm; // 0x84 (132)
	}; // 0x90 (144)
}

