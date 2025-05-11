///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>

namespace fb {
	class RandomXYZEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomXYZEvaluatorData"); }
		virtual ~RandomXYZEvaluatorData() override {}
		RandomXYZEvaluatorData() {
			m_maxX = 1.f;
			m_minX = -1.f;
			m_maxY = 1.f;
			m_minY = -1.f;
			m_maxZ = 1.f;
			m_minZ = -1.f;
		};

		float m_maxX; // 0x18 (24)
		float m_minX; // 0x1C (28)
		float m_maxY; // 0x20 (32)
		float m_minY; // 0x24 (36)
		float m_maxZ; // 0x28 (40)
		float m_minZ; // 0x2C (44)
	}; // 0x30 (48)
}

