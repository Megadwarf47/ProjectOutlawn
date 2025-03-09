///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BoneComponentData.h>
#include <fb/RotationAxisEnum.h>

namespace fb {
	class FlapComponentData : public BoneComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlapComponentData"); }
		virtual ~FlapComponentData() override {}
		FlapComponentData() {
			m_rotationAxis = RotationAxisEnum::RALeft;
			m_rotationScale = 1.f;
		};

		RotationAxisEnum m_rotationAxis; // 0x70 (112)
		float m_rotationScale; // 0x74 (116)
	}; // 0x80 (128)
}

