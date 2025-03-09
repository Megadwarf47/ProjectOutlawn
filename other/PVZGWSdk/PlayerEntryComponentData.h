///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntEntryIdEnum.h>
#include <fb/CtrRef.h>
#include <fb/EntryComponentData.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	class PlayerEntryComponentData : public EntryComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerEntryComponentData"); }
		virtual ~PlayerEntryComponentData() override {}
		PlayerEntryComponentData() {
			m_animationAccelerationMultiplier = Vec3(0.1f, 0.1f, 0.1f);
			m_antEntryId = AntEntryIdEnum::AntEntryIdEnum_Humvee_Driver;
		};

		Vec3 m_animationAccelerationMultiplier; // 0xF0 (240)
		String m_antEntryID; // 0x100 (256)
		AntEntryIdEnum m_antEntryId; // 0x108 (264)
		CtrRef<AntEnumeration> m_antEntryEnumeration; // 0x110 (272)
	}; // 0x120 (288)
}

