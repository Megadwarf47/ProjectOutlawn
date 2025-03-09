///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DogTagData.h>
#include <fb/String.h>

namespace fb {
	class AdvancedDogTagData : public DogTagData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AdvancedDogTagData"); }
		virtual ~AdvancedDogTagData() override {}
		AdvancedDogTagData() {
			m_isStatMeasuredInTime = false;
		};

		String m_statCode; // 0x78 (120)
		String m_statSID; // 0x80 (128)
		bool m_isStatMeasuredInTime; // 0x88 (136)
	}; // 0x90 (144)
}

