///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class AlignmentData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AlignmentData"); }
		virtual ~AlignmentData() override {}
		AlignmentData() {
			m_alignAction = 899534898;
			m_stopTolerance = 15.f;
			m_speed = 0.05f;
		};

		s32 m_alignAction; // 0x10 (16)
		float m_stopTolerance; // 0x14 (20)
		float m_speed; // 0x18 (24)
	}; // 0x20 (32)
}

