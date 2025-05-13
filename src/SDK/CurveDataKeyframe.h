///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CurveDataKeyframe : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CurveDataKeyframe"); }
		virtual ~CurveDataKeyframe() override {}
		CurveDataKeyframe() {
			m_x = 0.f;
			m_y = 0.f;
		};

		float m_x; // 0x10 (16)
		float m_y; // 0x14 (20)
	}; // 0x18 (24)
}

