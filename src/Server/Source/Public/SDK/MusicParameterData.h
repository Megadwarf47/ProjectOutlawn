///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MusicInputData.h>

namespace fb {
	class MusicParameterData : public MusicInputData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicParameterData"); }
		virtual ~MusicParameterData() override {}
		MusicParameterData() {
			m_defaultValue = 0.f;
		};

		float m_defaultValue; // 0x20 (32)
	}; // 0x28 (40)
}

