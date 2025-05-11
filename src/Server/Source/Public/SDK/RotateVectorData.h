///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>

namespace fb {
	class RotateVectorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RotateVectorData"); }
		virtual ~RotateVectorData() override {}
		RotateVectorData() {
			m_angle = 0.f;
			m_inputAffectsPhi = true;
			m_rotateWithinPlane = false;
		};

		float m_angle; // 0x18 (24)
		bool m_inputAffectsPhi; // 0x1C (28)
		bool m_rotateWithinPlane; // 0x1D (29)
	}; // 0x20 (32)
}

