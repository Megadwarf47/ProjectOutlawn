///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/Vec2.h>

namespace fb {
	class InputCurveData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputCurveData"); }
		virtual ~InputCurveData() override {}
		InputCurveData() {
			m_handleMultipleInputsAsSquare = false;
		};

		Array<s32> m_affectedInputs; // 0x10 (16)
		Array<Vec2> m_inputModifierCurve; // 0x18 (24)
		bool m_handleMultipleInputsAsSquare; // 0x20 (32)
	}; // 0x28 (40)
}

