///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/ProfileOptionsType.h>
#include <fb/String.h>

namespace fb {
	class ProfileOptionData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionData"); }
		virtual ~ProfileOptionData() override {}
		ProfileOptionData() {
			m_category = ProfileOptionsType::GstAudio;
		};

		String m_uniqueId; // 0x18 (24)
		ProfileOptionsType m_category; // 0x20 (32)
	}; // 0x28 (40)
}

