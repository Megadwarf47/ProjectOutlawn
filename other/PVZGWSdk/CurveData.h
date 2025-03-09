///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CurveType.h>
#include <fb/DataContainer.h>
#include <fb/InfinityType.h>

namespace fb {
	class CurveData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CurveData"); }
		virtual ~CurveData() override {}
		CurveData() {
			m_preInfinity = InfinityType::InfinityType_Constant;
			m_postInfinity = InfinityType::InfinityType_Constant;
			m_curveType = CurveType::CurveType_Complex;
			m_isWeighted = false;
			m_isStatic = true;
		};

		InfinityType m_preInfinity; // 0x10 (16)
		InfinityType m_postInfinity; // 0x14 (20)
		CurveType m_curveType; // 0x18 (24)
		Array<float> m_x; // 0x20 (32)
		Array<float> m_y; // 0x28 (40)
		Array<float> m_inTanX; // 0x30 (48)
		Array<float> m_inTanY; // 0x38 (56)
		Array<float> m_outTanX; // 0x40 (64)
		Array<float> m_outTanY; // 0x48 (72)
		bool m_isWeighted; // 0x50 (80)
		bool m_isStatic; // 0x51 (81)
	}; // 0x58 (88)
}

