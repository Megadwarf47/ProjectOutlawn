///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class InterpolateTransformEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InterpolateTransformEntityData"); }
		virtual ~InterpolateTransformEntityData() override {}
		InterpolateTransformEntityData() {
			m_autoActivate = true;
		};

		bool m_autoActivate; // 0x18 (24)
		LinearTransform m_inputTransform; // 0x20 (32)
	}; // 0x60 (96)
}

